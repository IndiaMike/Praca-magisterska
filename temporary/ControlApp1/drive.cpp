#include "drive.h"
#include "mainwindow.h"

Drive::Drive(QObject *parent) : QObject(parent)
{
    emergencyHardwareEmergencySwitch = false;
    SelectedHost = SelectedHost_Satel;
    setspeedfront = 0;
    setspeeddir = 0;
    lon = 0;
    lat = 0;
    yaw = 0;
    pitch = 0;
    roll = 0;
    cmdout = cmdDrive_null;
    for(int i=0;i<4;i++)
    {
        error[i] = false;
        setserwopos[i] = 0;
    }
}
uint16_t Drive::crc16(uint8_t* packet, uint32_t nBytes)
{
    uint16_t crc = 0;
    for(uint32_t byte = 0; byte < nBytes; byte++)
    {
        crc = crc ^ ((uint16_t)packet[byte] << 8);
        for (uint8_t bit = 0; bit < 8; bit++)
            if(crc & 0x8000) 	crc = (crc << 1) ^ 0x1021;
            else							crc = crc << 1;
    }
    return crc;
}
uint16_t Drive::PrepareFrameToSend(void)
{
    buf[0] = 155;
    buf[1] = Frametype_DriveGeneral;
    buf[2] = static_cast<uint8_t>(setspeedfront);
    buf[3] = static_cast<uint8_t>(setspeeddir);
    buf[4] = static_cast<uint8_t>(setserwopos[0]);
    buf[5] = static_cast<uint8_t>(setserwopos[1]);
    buf[6] = static_cast<uint8_t>(setserwopos[2]);
    buf[7] = static_cast<uint8_t>(setserwopos[3]);
    buf[8] = static_cast<uint8_t>(cmdout);
    uint16_t crc = crc16(buf, 9);
    buf[9] = static_cast<uint8_t>(crc>>8);
    buf[10] = static_cast<uint8_t>(crc>>0);
    return 11;
}
uint16_t Drive::PrepareFrameOnlyCmd(void)
{
    bufoc[0] = 155;
    bufoc[1] = Frametype_DriveCmd;
    bufoc[2] = static_cast<uint8_t>(cmdout);
    uint16_t crc = crc16(bufoc, 3);
    bufoc[3] = static_cast<uint8_t>(crc>>8);
    bufoc[4] = static_cast<uint8_t>(crc>>0);
    return 5;
}
void Drive::ReadRoverPosAbs(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 16);
    uint16_t crc2 = ((uint16_t)buf[16]<<8) + buf[17];
    if(crc1 == crc2)
    {
        yaw =    static_cast<double>((int16_t)(((uint16_t)buf[2]<<8) + ((uint16_t)buf[3]<<0))) / 10.0;
        pitch =  static_cast<double>((int16_t)(((uint16_t)buf[4]<<8) + ((uint16_t)buf[5]<<0))) / 10.0;
        roll =   static_cast<double>((int16_t)(((uint16_t)buf[6]<<8) + ((uint16_t)buf[7]<<0))) / 10.0;
        lon =    static_cast<double>((int32_t)(((uint32_t)buf[8]<<24) + ((uint32_t)buf[9]<<16) + ((uint32_t)buf[10]<<8) + ((uint32_t)buf[11]<<0))) / 1000000.0;
        lat =    static_cast<double>(((int32_t)((uint32_t)buf[12]<<24) + ((uint32_t)buf[13]<<16) + ((uint32_t)buf[14]<<8) + ((uint32_t)buf[15]<<0))) / 1000000.0;
    }
}
void Drive::ReadRoverPosRel(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 19);
    uint16_t crc2 = ((uint16_t)buf[19]<<8) + buf[20];
    if(crc1 == crc2)
    {
        yaw =    static_cast<double>((int16_t)(((uint16_t)buf[2]<<8) + ((uint16_t)buf[3]<<0))) / 10.0;
        pitch =  static_cast<double>((int16_t)(((uint16_t)buf[4]<<8) + ((uint16_t)buf[5]<<0))) / 10.0;
        roll =   static_cast<double>((int16_t)(((uint16_t)buf[6]<<8) + ((uint16_t)buf[7]<<0))) / 10.0;
        lon =    static_cast<double>((int32_t)(((uint32_t)buf[8]<<24) + ((uint32_t)buf[9]<<16) + ((uint32_t)buf[10]<<8) + ((uint32_t)buf[11]<<0))) / 1000.0;
        lat =    static_cast<double>((int32_t)(((uint32_t)buf[12]<<24) + ((uint32_t)buf[13]<<16) + ((uint32_t)buf[14]<<8) + ((uint32_t)buf[15]<<0))) / 1000.0;
        uint32_t artagsee1 = (((uint32_t)buf[16]<<16) + ((uint32_t)buf[17]<<8) + ((uint32_t)buf[18]<<0));
    }
}
uint32_t Drive::PrepareFrameNewPoints(void)
{
    uint8_t numpoints = 4;
    double points[numpoints][3];
    points[0][0] = 0;
    points[0][1] = 5;
    points[0][2] = 200;
    points[1][0] = 2;
    points[1][1] = 8;
    points[1][2] = 200;
    points[2][0] = 2;
    points[2][1] = 4;
    points[2][2] = 200;
    points[3][0] = 0;
    points[3][1] = 0;
    points[3][2] = 100;
    uint32_t idx = 0;
    bufnp[idx++] = Frametype_Header;
    bufnp[idx++] = Frametype_NewpointsERC;//rodzaj ramki dla identyfikacji przez łazika
    bufnp[idx++] = numpoints;//liczba punktów do wysłania
    for(int i=0;i<numpoints;i++)
    {
        int32_t lon = static_cast<int32_t>(points[i][0] * 1000.0);
        int32_t lat = static_cast<int32_t>(points[i][1] * 1000.0);
        int16_t yaw = static_cast<int32_t>(points[i][2] * 10.0);

        bufnp[idx++] = lon>>24;
        bufnp[idx++] = lon>>16;
        bufnp[idx++] = lon>>8;
        bufnp[idx++] = lon>>0;
        bufnp[idx++] = lat>>24;
        bufnp[idx++] = lat>>16;
        bufnp[idx++] = lat>>8;
        bufnp[idx++] = lat>>0;
        bufnp[idx++] = yaw>>8;
        bufnp[idx++] = yaw>>0;
    }
    uint16_t crc = crc16(bufnp, idx);
    bufnp[idx++] = static_cast<uint8_t>(crc>>8);
    bufnp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
void Drive::ReadTelemetry(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 7);
    uint16_t crc2 = ((uint16_t)buf[7]<<8) + ((uint16_t)buf[8]<<0);
    if(crc1 == crc2)
    {
        if(buf[2] & 0x01)                       emergencyHardwareEmergencySwitch = true;
        else                                    emergencyHardwareEmergencySwitch = false;
        if(buf[2] & 0x02)                       emergencySoftwareEmergencySwitch = true;
        else                                    emergencySoftwareEmergencySwitch = false;
        if(buf[2] & 0x10)                       error[0] = true;
        else                                    error[0] = false;
        if(buf[2] & 0x20)                       error[1] = true;
        else                                    error[1] = false;
        if(buf[2] & 0x30)                       error[2] = true;
        else                                    error[2] = false;
        if(buf[2] & 0x40)                       error[3] = true;
        else                                    error[3] = false;

        SelectedHost = (eSelectedHost)((buf[3] >> 0) & 0x03);
        NaviType = (eNaviType)((buf[3] >> 2) & 0x03);

        speed = buf[4];

        nrp = (buf[5] >> 0) & 0x3f;
        nvCom = (buf[5] >> 6) & 0x01;
        newPointsRec = (buf[5] >> 7) & 0x01;

        roverStatus = (eRoverStatus)((buf[6] >> 0) & 0x0f);
    }
}
