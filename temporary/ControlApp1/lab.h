#ifndef LAB_H
#define LAB_H

#include <QObject>

enum eCmdLab
{
    cmdLab_null = 0,
    cmdLab_Remote = 1,
    cmdLab_MotSetHomePos = 2,
    cmdLab_MotEnableLimits = 3,
    cmdLab_MotDisableLimits = 4,
    cmdLab_MotEnablePID = 5,
    cmdLab_MotDisablePID = 6,
    cmdLab_GripperOpen = 7,
    cmdLab_GripperClose = 8,
    cmdLab_LumiOpen = 9,
    cmdLab_LumiClose = 10,
    cmdLab_LumiStartMeas = 11,
    cmdLab_LumiNeutralPos = 12,
    cmdLab_LumiTurnOnOff = 13,
    cmdLab_LumiHorizontal = 14,
    cmdLab_LumiVertical = 15,
    cmdLab_MoveZPosUp = 16,
    cmdLab_MoveZPosMeas = 17,
    cmdLab_MoveZPosSwab = 18,
    cmdLab_MoveZPosLumi = 19,
    cmdLab_MoveXYPosSwab = 20,
    cmdLab_MoveXYPosLumi = 21,
    cmdLab_MoveXYPosMeas = 22,
    cmdLab_AutoRunSeq = 23,
    cmdLab_AutoNextPoint = 24,
    cmdLab_AutoPrevPoint = 25,
    cmdLab_MoveZPosSwab2 = 26,
};

class Lab : public QObject
{
    Q_OBJECT
public:
    explicit Lab(QObject *parent = nullptr);
    int8_t setspeed[4];
    double motspos[4];
    double motscurrent[4];

    eCmdLab cmdout;
    uint8_t cmdoutvalue;
    uint8_t buf[100];
    uint8_t bufoc[100];

signals:

public slots:
    uint16_t crc16(uint8_t* packet, uint32_t nBytes);
    uint16_t PrepareFrameToSend(void);
    void ReadMotorPos(uint8_t* buf);
    void ReadTelemetry(uint8_t* buf);
    uint16_t PrepareFrameOnlyCmd(void);
};

#endif // LAB_H
