#ifndef DRIVE_H
#define DRIVE_H

#include <QObject>
enum eCmdDrive
{
    cmdDrive_null = 0,
    cmdDrive_satel = 1,
    cmdDrive_wifi = 2,
    cmdDrive_AutoERCRel = 3,
    cmdDrive_AutoERCAbs = 4,
    cmdDrive_cam1inc = 5,
    cmdDrive_cam1dec = 6,
    cmdDrive_cam2inc = 7,
    cmdDrive_cam2dec = 8,
    cmdDrive_autopause = 9,
    cmdDrive_autocontinue = 10,
    cmdDrive_autonext = 11,
    cmdDrive_autostage1 = 12,
    cmdDrive_autostage2 = 13,
    cmdDrive_autostage3 = 14,
    cmdDrive_autostage4 = 15,
    cmdDrive_resetdev1 = 16,
    cmdDrive_resetdev2 = 17,
    cmdDrive_gimdigiton = 18,
    cmdDrive_gimdigitoff = 19,
    cmdDrive_TelemABSEn = 20,
    cmdDrive_TelemABSDis = 21,
    cmdDrive_TelemArtagRELEn = 23,
    cmdDrive_TelemArtagRELDis = 24,
    cmdDrive_TelemErrorsEn = 25,
    cmdDrive_TelemErrorsDis = 26,
    cmdDrive_TelemAllEn = 27,
    cmdDrive_TelemAllDis = 28,
    cmdDrive_EmerSoftEn = 29,
    cmdDrive_EmerSoftDis = 30,
    cmdDrive_TelemRELEn = 31,
    cmdDrive_TelemRELDis = 32,
    cmdDrive_ClearArtagsTable = 33,
    cmdDrive_AutoURCRel = 34,
    cmdDrive_AutoURCAbs = 35,
    cmdDrive_clearyawoffset = 243,
    cmdDrive_setyawoffset = 244,
};
enum eSelectedHost
{
    SelectedHost_Satel = 0,
    SelectedHost_Wifi = 1,
    SelectedHost_Auto = 2,
};
enum eNaviType
{
    NaviType_URCRel = 0,
    NaviType_URCAbs = 1,
    NaviType_ERCAbs = 2,
    NaviType_ERCRel = 3,
};
enum eRoverStatus
{
    rs_Null = 0,
    rs_Manual,
    rs_Waiting,
    rs_DrivingToWaypoint,
    rs_LookingMarkers,
    rs_DrivingToDestpoint,
    rs_AvoidingObstacle,
    rs_AchievedDestpoint,
};
class Drive : public QObject
{
    Q_OBJECT
public:
    explicit Drive(QObject *parent = nullptr);
    bool emergencyHardwareEmergencySwitch;
    bool emergencySoftwareEmergencySwitch;
    eSelectedHost SelectedHost;
    eNaviType NaviType;
    int8_t setspeedfront;
    int8_t setspeeddir;
    int8_t setserwopos[4];
    bool error[4];
    eCmdDrive cmdout;
    eCmdDrive cmdin;
    uint8_t buf[100];
    uint8_t bufoc[100];
    uint8_t bufnp[100];
    double lon, lat, yaw, pitch, roll;
    eRoverStatus    roverStatus;
    double speed;
    uint8_t nrp;
    bool nvCom;
    bool newPointsRec;

signals:

public slots:
    uint16_t crc16(uint8_t* packet, uint32_t nBytes);
    uint16_t PrepareFrameToSend(void);
    uint16_t PrepareFrameOnlyCmd(void);
    void ReadRoverPosAbs(uint8_t* buf);
    void ReadRoverPosRel(uint8_t* buf);
    uint32_t PrepareFrameNewPoints(void);
    void ReadTelemetry(uint8_t* buf);
};

#endif // DRIVE_H
