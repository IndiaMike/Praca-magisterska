#include "manip.h"
#include "mainwindow.h"

Manip::Manip(QObject *parent) : QObject(parent)
{
    Coordinate = ManipCoordinate_JoinJog;
    for(int i=0;i<7;i++)
    {
        setspeed[i] = 0;
        axesPosRPY[i] = 0.0;
        motspos[i] = 0.0;
        motsErrors[i] = false;
        motsPid[i] = false;
    }
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            axesPosMat[i][j] = 0.0;
    cmdout = cmdManip_null;
    cmdoutvalue = 0;
    cmdin = cmdManip_null;
    calibrated = false;
    globalSpeed = 0;
    startError = false;
    posReached = false;
}
uint16_t Manip::crc16(uint8_t* packet, uint32_t nBytes)
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
uint16_t Manip::PrepareFrameToSend(void)
{
    buf[0] = 155;
    buf[1] = Frametype_ManipGeneral;
    buf[2] = static_cast<uint8_t>(setspeed[0]);
    buf[3] = static_cast<uint8_t>(setspeed[1]);
    buf[4] = static_cast<uint8_t>(setspeed[2]);
    buf[5] = static_cast<uint8_t>(setspeed[3]);
    buf[6] = static_cast<uint8_t>(setspeed[4]);
    buf[7] = static_cast<uint8_t>(setspeed[5]);
    buf[8] = static_cast<uint8_t>(setspeed[6]);
    buf[9] = 0;
    buf[10] = 0;
    uint16_t crc = crc16(buf, 11);
    buf[11] = static_cast<uint8_t>(crc>>8);
    buf[12] = static_cast<uint8_t>(crc>>0);
    return 13;
}
uint16_t Manip::PrepareFrameOnlyCmd(void)
{
    bufoc[0] = 155;
    bufoc[1] = Frametype_ManipCmd;
    bufoc[2] = cmdout;
    bufoc[3] = cmdoutvalue;
    uint16_t crc = crc16(bufoc, 4);
    bufoc[4] = static_cast<uint8_t>(crc>>8);
    bufoc[5] = static_cast<uint8_t>(crc>>0);
    return 6;
}
uint16_t Manip::PrepareFrameSavePoint(uint8_t seq, uint8_t point, uint8_t armspeed, uint8_t type, int8_t gripperspeed, uint8_t grippertime)
{
    bufsp[0] = Frametype_Header;
    bufsp[1] = Frametype_ManipSave;
    bufsp[2] = seq;
    bufsp[3] = point;
    bufsp[4] = armspeed;
    bufsp[5] = type;
    bufsp[6] = static_cast<uint8_t>(gripperspeed);
    bufsp[7] = grippertime;
    uint16_t crc = crc16(bufsp, 8);
    bufsp[8] = static_cast<uint8_t>(crc>>8);
    bufsp[9] = static_cast<uint8_t>(crc>>0);
    return 10;
}
void Manip::ReadMotorPos(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 14);
    uint16_t crc2 = ((uint16_t)buf[14]<<8) + ((uint16_t)buf[15]<<0);
    if(crc1 == crc2)
    {
        for(uint8_t i=0;i<6;i++)
        {
            motspos[i] = (double)((int16_t)(((uint16_t)buf[2+2*i+0]<<8) + ((uint16_t)buf[2+2*i+1]<<0))) / 100.0;
        }
    }
}
void Manip::ReadAxesPosRPY(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 14);
    uint16_t crc2 = ((uint16_t)buf[14]<<8) + ((uint16_t)buf[15]<<0);
    if(crc1 == crc2)
    {
        for(uint8_t i=0;i<3;i++)
            axesPosRPY[i] = (double)((int16_t)(((uint16_t)buf[2+2*i+0]<<8) + ((uint16_t)buf[2+2*i+1]<<0))) / 10.0;
        for(uint8_t i=3;i<6;i++)
            axesPosRPY[i] = (double)((int16_t)(((uint16_t)buf[2+2*i+0]<<8) + ((uint16_t)buf[2+2*i+1]<<0))) / 100.0;
    }
}
void Manip::ReadAxesPosMat(uint8_t *buf)
{
    uint16_t crc1 = crc16(buf, 26);
    uint16_t crc2 = ((uint16_t)buf[26]<<8) + ((uint16_t)buf[27]<<0);
    if(crc1 == crc2)
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<4;j++)
                axesPosMat[i][j] = (double)((int16_t)(((uint16_t)buf[2+2*(4*i+j)+0]<<8) + ((uint16_t)buf[2+2*(4*i+j)+1]<<0)));

        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                axesPosMat[i][j] /= 100.0;
        for(int i=0;i<3;i++)
            axesPosMat[i][3] /= 10.0;
    }
}
void Manip::ReadTelemetry(uint8_t* buf)
{
    uint16_t crc1 = crc16(buf, 5);
    uint16_t crc2 = ((uint16_t)buf[5]<<8) + ((uint16_t)buf[6]<<0);
    if(crc1 == crc2)
    {
        Coordinate = (eManipCoordinate)(buf[2] & 0x0f);

        if(buf[2] & 0x10)    calibrated = true;
        else                 calibrated = false;
        if(buf[2] & 0x20)    posReached = true;
        else                 posReached = false;
        if(buf[2] & 0x40)    startError = true;
        else                 startError = false;
        if(buf[2] & 0x80)    moveInterrupted = true;
        else                 moveInterrupted = false;

        for(int i=0;i<7;i++)
            motsErrors[i] = ((buf[3] >> i) & 0x01);

        for(int i=0;i<7;i++)
            motsPid[i] = ((buf[4] >> i) & 0x01);
    }
}
uint16_t Manip::PrepareFrameJoinMoveAbs(double tab[6])
{
    globalSpeed = 60;
    uint16_t idx = 0;
    int16_t temp[6];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipJoinMoveAbs;
    for(int i=0;i<6;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameJoinMoveInc(double tab[6])
{
    globalSpeed = 60;
    uint16_t idx = 0;
    int16_t temp[6];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipJoinMoveInc;
    for(int i=0;i<6;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameBaseMoveAbs(double tab[6])
{
    globalSpeed = 30;
    uint16_t idx = 0;
    int16_t temp[6];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipBaseMoveAbs;
    for(int i=0;i<3;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 10.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    for(int i=3;i<6;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameBaseMoveInc(double tab[6])
{
    globalSpeed = 30;
    uint16_t idx = 0;
    int16_t temp[6];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipBaseMoveInc;
    for(int i=0;i<3;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 10.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    for(int i=3;i<6;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameToolMoveInc(double tab[6])
{
    globalSpeed = 30;
    uint16_t idx = 0;
    int16_t temp[6];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipToolMoveInc;
    for(int i=0;i<3;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 10.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    for(int i=3;i<6;i++)
    {
        temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameGripperMove(double speed, double time)
{
    uint16_t idx = 0;
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipGripperMove;
    bufsp[idx++] = static_cast<int8_t>(speed);
    bufsp[idx++] = static_cast<int8_t>(time);
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameBaseMoveAbsMat(double tab[])
{
    globalSpeed = 30;
    uint16_t idx = 0;
    int32_t temp[12];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipBaseMoveAbsMat;
    for(int i=0;i<12;i++)
    {
        if(i == 3 || i == 7 || i == 11)
            temp[i] = static_cast<int16_t>(tab[i] * 10.0);
        else
            temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameBaseMoveIncMat(double tab[])
{
    globalSpeed = 30;
    uint16_t idx = 0;
    int32_t temp[12];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipBaseMoveIncMat;
    for(int i=0;i<12;i++)
    {
        if(i == 3 || i == 7 || i == 11)
            temp[i] = static_cast<int16_t>(tab[i] * 10.0);
        else
            temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
uint16_t Manip::PrepareFrameToolMoveIncMat(double tab[])
{
    globalSpeed = 30;
    uint16_t idx = 0;
    int16_t temp[12];
    bufsp[idx++] = Frametype_Header;
    bufsp[idx++] = FrameType_ManipToolMoveIncMat;
    for(int i=0;i<12;i++)
    {
        if(i == 3 || i == 7 || i == 11)
            temp[i] = static_cast<int16_t>(tab[i] * 10.0);
        else
            temp[i] = static_cast<int16_t>(tab[i] * 100.0);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 8);
        bufsp[idx++] = static_cast<uint8_t>(static_cast<uint16_t>(temp[i]) >> 0);
    }
    bufsp[idx++] = globalSpeed;
    uint16_t crc = crc16(bufsp, idx);
    bufsp[idx++] = static_cast<uint8_t>(crc>>8);
    bufsp[idx++] = static_cast<uint8_t>(crc>>0);
    return idx;
}
