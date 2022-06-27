#ifndef MANIP_H
#define MANIP_H

#include <QObject>

enum eCmdManip
{
    cmdManip_null = 0,
    cmdManip_enable = 1,
    cmdManip_disable,
    cmdManip_calibrate,
    cmdManip_join,
    cmdManip_base,
    cmdManip_tool,
    cmdManip_laseron,
    cmdManip_laseroff,
    cmdManip_solenoidon,
    cmdManip_solenoidoff,
    cmdManip_seqmove,
    cmdManip_seqclear,
    Hostcmd_telemerrorsen = 13,
    Hostcmd_telemerrorsdis = 14,
    Hostcmd_telemposen = 15,
    Hostcmd_telemposdis = 16,
    Hostcmd_telemallen = 17,
    Hostcmd_telemalldis = 18,
};
enum eManipCoordinate
{
    ManipCoordinate_JoinJog = 0,
    ManipCoordinate_BaseJog,
    ManipCoordinate_ToolJog,
    ManipCoordinate_AutoSeq,
    ManipCoordinate_JoinMoveAbs,
    ManipCoordinate_JoinMoveInc,
    ManipCoordinate_BaseMoveAbs,
    ManipCoordinate_BaseMoveInc,
    ManipCoordinate_ToolMoveInc,
    ManipCoordinate_GripperMove,
};

class Manip : public QObject
{
    Q_OBJECT
public:
    explicit Manip(QObject *parent = nullptr);
    eManipCoordinate Coordinate;
    int8_t setspeed[7];
    double axesPosRPY[7];
    double axesPosMat[4][4];
    double motspos[7];
    bool motsErrors[7];
    bool motsPid[7];
    bool calibrated;
    bool posReached;
    bool startError;
    bool moveInterrupted;
    uint8_t globalSpeed;

    eCmdManip cmdout;
    uint8_t cmdoutvalue;
    eCmdManip cmdin;
    uint8_t buf[100];
    uint8_t bufoc[100];
    uint8_t bufsp[100];

signals:

public slots:
    uint16_t crc16(uint8_t* packet, uint32_t nBytes);
    uint16_t PrepareFrameToSend(void);
    uint16_t PrepareFrameOnlyCmd(void);
    uint16_t PrepareFrameSavePoint(uint8_t seq, uint8_t point, uint8_t armspeed, uint8_t type, int8_t gripperspeed, uint8_t grippertime);
    void ReadMotorPos(uint8_t* buf);
    void ReadAxesPosRPY(uint8_t* buf);
    void ReadAxesPosMat(uint8_t* buf);
    void ReadTelemetry(uint8_t* buf);
    uint16_t PrepareFrameJoinMoveAbs(double tab[]);
    uint16_t PrepareFrameJoinMoveInc(double tab[]);
    uint16_t PrepareFrameBaseMoveAbs(double tab[]);
    uint16_t PrepareFrameBaseMoveInc(double tab[]);
    uint16_t PrepareFrameToolMoveInc(double tab[]);
    uint16_t PrepareFrameGripperMove(double speed, double time);
    uint16_t PrepareFrameBaseMoveAbsMat(double tab[]);
    uint16_t PrepareFrameBaseMoveIncMat(double tab[]);
    uint16_t PrepareFrameToolMoveIncMat(double tab[]);
};

#endif // MANIP_H
