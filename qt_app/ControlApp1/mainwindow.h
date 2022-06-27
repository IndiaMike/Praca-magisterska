#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QHostAddress>
#include <QFile>
#include <math.h>
#include "drive.h"
#include "manip.h"
#include "lab.h"

namespace Ui {
class MainWindow;
}
enum eFrameType
{
    Frametype_Header = 155,
    Frametype_null = 0,
    Frametype_DriveGeneral = 1,
    Frametype_ManipGeneral = 2,
    Frametype_LabGeneral = 3,
    Frametype_ManipCmd = 4,
    Frametype_ManipSave = 5,
    Frametype_LabCmd = 6,
    Frametype_ServodriveTelemetry = 9,
    Frametype_DriveCmd = 10,
    Frametype_MainboardToDriveGenerallSpeed = 11,
    FrameType_ManipFeedbackMotpos = 12,
    Frametype_LabFeedbackMotPos = 13,
    FrameType_DriveStatusTelemetry = 14,
    FrameType_ManipStatusTelemetry = 15,
    FrameType_LabStatusTelemetry = 16,
    Frametype_RoverPosABS = 20,
    Frametype_NvidiaURC = 21,
    Frametype_NewpointsABS = 22,
    Frametype_NewpointsREL = 23,
    Frametype_ArtagPosABS = 24,
    Frametype_ArtagPosREL = 25,
    Frametype_RoverPosREL = 30,
    Frametype_NvidiaERC = 31,
    Frametype_NewpointsERC = 32,
    FrameType_SetYawAndPos = 33,
    FrameType_ManipFeedbackAxesposMat = 34,
    FrameType_ManipFeedbackAxesposRPY = 35,
    FrameType_ManipJoinMoveAbs = 36,
    FrameType_ManipJoinMoveInc = 37,
    FrameType_ManipBaseMoveAbs = 38,
    FrameType_ManipBaseMoveInc = 39,
    FrameType_ManipToolMoveInc = 40,
    FrameType_ManipGripperMove = 41,
    FrameType_ManipBaseMoveAbsMat = 42,
    FrameType_ManipBaseMoveIncMat = 43,
    FrameType_ManipToolMoveIncMat = 44,
    Frametype_EmergencyHardStop = 201,
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void redrawLabel(void);
    void saveRoverPos(void);
    void serialSend(void);
    void serialRead(void);
    void wifiSend(void);
    void wifiRead(void);
    void on_ComPortOpenButton_clicked();
    void on_ComPortCloseButton_clicked();
    void on_WifiConnectButton_clicked();
    void on_WifiDisconnectButton_clicked();
    void on_SerialTimeoutSpinBox_valueChanged(int arg1);
    void on_WifiTimeoutSpinBox_valueChanged(int arg1);
    void on_FrontValueSlider_valueChanged(int value);
    void on_FrontValueSlider_sliderReleased();
    void on_DirValueSlider_valueChanged(int value);
    void on_DirValueSlider_sliderReleased();
    void on_Serwo0_Slider_valueChanged(int value);
    void on_Serwo1_Slider_valueChanged(int value);
    void on_Serwo2_Slider_valueChanged(int value);
    void on_Serwo3_Slider_valueChanged(int value);
    void on_SelectSatel_clicked();
    void on_SelectWifi_clicked();
    void on_SelectAutoNaviTypeUrcAbs_clicked();
    void on_SelectAutoNaviTypeUrcRel_clicked();
    void on_SelectAutoNaviTypeErcAbs_clicked();
    void on_SelectAutoNaviTypeErcRel_clicked();
    void on_Cam1IncButton_clicked();
    void on_Cam1DecButton_clicked();
    void on_Cam2IncButton_clicked();
    void on_Cam2DecButton_clicked();
    void on_AutoPauseButton_clicked();
    void on_AutoContinueButton_clicked();
    void on_AutoNextButton_clicked();
    void on_ManipSpeed0Slider_valueChanged(int value);
    void on_ManipSpeed0Slider_sliderReleased();
    void on_ManipSpeed1Slider_valueChanged(int value);
    void on_ManipSpeed1Slider_sliderReleased();
    void on_ManipSpeed2Slider_valueChanged(int value);
    void on_ManipSpeed2Slider_sliderReleased();
    void on_ManipSpeed3Slider_valueChanged(int value);
    void on_ManipSpeed3Slider_sliderReleased();
    void on_ManipSpeed4Slider_valueChanged(int value);
    void on_ManipSpeed4Slider_sliderReleased();
    void on_ManipSpeed5Slider_valueChanged(int value);
    void on_ManipSpeed5Slider_sliderReleased();
    void on_ManipSpeed6Slider_valueChanged(int value);
    void on_ManipSpeed6Slider_sliderReleased();
    void on_ManipEnableButton_clicked();
    void on_ManipDisableButton_clicked();
    void on_ManipCalibrateButton_clicked();
    void on_ManipJoinButton_clicked();
    void on_ManipBaseButton_clicked();
    void on_ManipToolButton_clicked();
    void on_ManipLaserOnButton_clicked();
    void on_ManipLaserOffButton_clicked();
    void on_ManipSolenoidOnButton_clicked();
    void on_ManipSolenoidOffButton_clicked();
    void setSeqButtonsColorGray();
    int showMessageBoxForSeqPoints(int num);
    void on_ManipSeq0Button_clicked();
    void on_ManipSeq1Button_clicked();
    void on_ManipSeq2Button_clicked();
    void on_ManipSeq3Button_clicked();
    void on_ManipSeq4Button_clicked();
    void on_ManipSeq5Button_clicked();
    void on_ManipSeq6Button_clicked();
    void on_ManipSeq7Button_clicked();
    void on_ManipSavePointButton_clicked();
    void on_ManipClearSequenceButton_clicked();
    void on_LabSpeed0Slider_valueChanged(int value);
    void on_LabSpeed0Slider_sliderReleased();
    void on_LabSpeed1Slider_valueChanged(int value);
    void on_LabSpeed1Slider_sliderReleased();
    void on_LabSpeed2Slider_valueChanged(int value);
    void on_LabSpeed2Slider_sliderReleased();
    void on_LabSpeed3Slider_valueChanged(int value);
    void on_LabSpeed3Slider_sliderReleased();
    void on_LabSpeed0IncButton_clicked();
    void on_LabSpeed0DecButton_clicked();
    void on_LabSpeed0ZeroButton_clicked();
    void on_LabSpeed1IncButton_clicked();
    void on_LabSpeed1DecButton_clicked();
    void on_LabSpeed1ZeroButton_clicked();
    void on_LabSpeed2IncButton_clicked();
    void on_LabSpeed2DecButton_clicked();
    void on_LabSpeed2ZeroButton_clicked();
    void on_LabSpeed3IncButton_clicked();
    void on_LabSpeed3DecButton_clicked();
    void on_LabSpeed3ZeroButton_clicked();
    int showMessageBoxForLab(QString str);
    void on_Lab0SetHomePosButton_clicked();
    void on_Lab1SetHomePosButton_clicked();
    void on_Lab2SetHomePosButton_clicked();
    void on_Lab3SetHomePosButton_clicked();
    void on_Lab0EnableLimitsButton_clicked();
    void on_Lab1EnableLimitsButton_clicked();
    void on_Lab2EnableLimitsButton_clicked();
    void on_Lab3EnableLimitsButton_clicked();
    void on_Lab0DisableimitsButton_clicked();
    void on_Lab1DisableimitsButton_clicked();
    void on_Lab2DisableimitsButton_clicked();
    void on_Lab3DisableimitsButton_clicked();
    void on_LabRemoteControlButton_clicked();
    void on_LabGripperOpenButton_clicked();
    void on_LabGripperCloseButton_2_clicked();
    void on_LabLuminometrOpenButton_clicked();
    void on_LabLuminometrCloseButton_clicked();
    void on_LabStartMeasurementButton_clicked();
    void on_LabNeutralPositionButton_clicked();
    void on_LabTurnOnOffLuminometerButton_clicked();
    void on_LabGoToSwabXYButton_clicked();
    void on_AutoSendPointsButton_clicked();
    void on_AutoSetYawOffsetButton_clicked();
    void on_AutoClearYawOffsetButton_clicked();
    void on_LabStartSequenceButton_clicked();
    void on_LabSequenceNextButton_clicked();
    void on_LabSequencePreviousButton_clicked();
    void on_AutoTelemGpsEnableButton_clicked();
    void on_AutoTelemGpsDisableButton_clicked();
    void on_ManipTelemetryMotposDisableButton_clicked();
    void on_ManipTelemetryAllEnableButton_clicked();
    void on_ManipTelemetryAllDisableButton_clicked();
    void on_ManipTelemetryErrorsEnableButton_clicked();
    void on_ManipTelemetryErrorsDisableButton_clicked();
    void on_ManipTelemetryMotposEnableButton_clicked();
    void on_AutoTelemAllEnableButton_clicked();
    void on_AutoTelemAllEnableButton_2_clicked();
    void on_AutoTelemErrorsEnableButton_clicked();
    void on_AutoTelemErrorsEnableButton_2_clicked();
    void on_AutoTelemBallEnableButton_clicked();
    void on_AutoTelemBallDisableButton_clicked();
    void on_LabLumiDiscardSwabButton_clicked();
    void on_LabLumiVerticalPosButton_clicked();
    void on_LabMoveZUpButton_clicked();
    void on_LabMoveZSwabButton_clicked();
    void on_LabMoveZLumiButton_clicked();
    void on_LabMoveZMeasButton_clicked();
    void on_LabMoveXYLumiButton_clicked();
    void on_LabMoveXYMeasButton_clicked();
    void on_LabEnablePIDButton_clicked();
    void on_LabDisablePIDButton_clicked();
    void on_LabMoveZSwab2Button_clicked();
    void on_ManipSetPosQGetCurrentPosButt_clicked();
    void on_ManipSetPosBaseToolGetCurrentPosButt_clicked();
    void on_ManipSetPosQClearPosButt_clicked();
    void on_ManipSetPosBaseToolClearPosButt_clicked();
    void on_ManipSetPosQMoveAbsButt_clicked();
    void on_ManipSetPosQMoveIncButt_clicked();
    void on_ManipSetPosBaseMoveAbsButt_clicked();
    void on_ManipSetPosBaseMoveIncButt_clicked();
    void on_ManipSetPosToolMoveIncButt_clicked();
    void on_ManipSetPosGripperMoveButt_clicked();
    void on_DriveSoftwareEmergencyLed_clicked();
    void on_ManipSetPosBaseToolGetCurrentMatButt_clicked();
    void on_ManipSetPosBaseToolClearMatButt_clicked();
    void on_ManipSetMatBaseMoveAbsButt_clicked();
    void on_ManipSetMatBaseMoveIncButt_clicked();
    void on_ManipSetMatToolMoveIncButt_clicked();
    void on_ManipSetPosBaseToolFindMatButt_clicked();
    void on_ManipSeq8Button_clicked();
    void on_ManipSeq9Button_clicked();
    void on_ManipSeq10Button_clicked();
    void on_ManipSeq11Button_clicked();
    void on_ManipSeq12Button_clicked();
    void on_ManipSeq13Button_clicked();
    void on_ManipSeq14Button_clicked();
    void on_ManipSeq15Button_clicked();
    void on_RoverPosLogStart_clicked();
    void on_RoverPosLogStop_clicked();
    void on_RoverPosClearTextBox_clicked();

private:
    Ui::MainWindow *ui;
    eFrameType frameToSendBySerial;
    eFrameType frameToSendByWifi;
    QTcpSocket *socket;
    QSerialPort serial;
    QTimer *timerSerial;
    QTimer *timerWifi;
    QTimer *timerLabel;
    QTimer *timerSaveRoverPos;
    Drive *drive;
    Manip *manip;
    Lab *lab;
    QFile* file;
    QString fileName;
    QString roverPosTextEditStr;

};

#endif // MAINWINDOW_H
