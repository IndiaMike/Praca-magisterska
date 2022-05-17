#include "lab.h"
#include "mainwindow.h"

Lab::Lab(QObject *parent) : QObject(parent)
{
    for(int i=0;i<4;i++)
    {
        setspeed[i] = 0;
        motspos[i] = 0.0;
        motscurrent[i] = 0.0;
    }
    cmdout = cmdLab_null;
    cmdoutvalue = 0;
}
uint16_t Lab::crc16(uint8_t* packet, uint32_t nBytes)
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
uint16_t Lab::PrepareFrameToSend(void)
{
    buf[0] = 155;
    buf[1] = Frametype_LabGeneral;
    buf[2] = static_cast<uint8_t>(setspeed[0]);
    buf[3] = static_cast<uint8_t>(setspeed[1]);
    buf[4] = static_cast<uint8_t>(setspeed[2]);
    buf[5] = static_cast<uint8_t>(setspeed[3]);
    buf[6] = cmdout;
    buf[7] = cmdoutvalue;
    uint16_t crc = crc16(buf, 8);
    buf[8] = static_cast<uint8_t>(crc>>8);
    buf[9] = static_cast<uint8_t>(crc>>0);
    return 10;
}
uint16_t Lab::PrepareFrameOnlyCmd(void)
{
    bufoc[0] = Frametype_Header;
    bufoc[1] = Frametype_LabCmd;
    bufoc[2] = cmdout;
    bufoc[3] = cmdoutvalue;
    uint16_t crc = crc16(bufoc, 4);
    bufoc[4] = static_cast<uint8_t>(crc>>8);
    bufoc[5] = static_cast<uint8_t>(crc>>0);
    return 6;
}
void Lab::ReadMotorPos(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 14);
    uint16_t crc2 = ((uint16_t)buf[14]<<8) + ((uint16_t)buf[15]<<0);
    uint8_t index = 2;
    if(crc1 == crc2)
    {
        for(uint8_t i=0;i<4;i++)
        {
            motspos[i] = (double)((int16_t)(((uint16_t)buf[index++]<<8) + ((uint16_t)buf[index++]<<0))) / 10.0;
            motscurrent[i] = (double)(buf[index++]) / 10.0;
        }
    }
}
void Lab::ReadTelemetry(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 5);
    uint16_t crc2 = ((uint16_t)buf[5]<<8) + ((uint16_t)buf[6]<<0);
    if(crc1 == crc2)
    {

    }
}
