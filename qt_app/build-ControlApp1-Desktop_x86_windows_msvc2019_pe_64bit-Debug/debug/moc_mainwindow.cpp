/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ControlApp1/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[176];
    char stringdata0[5498];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "redrawLabel"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "saveRoverPos"
QT_MOC_LITERAL(4, 37, 10), // "serialSend"
QT_MOC_LITERAL(5, 48, 10), // "serialRead"
QT_MOC_LITERAL(6, 59, 8), // "wifiSend"
QT_MOC_LITERAL(7, 68, 8), // "wifiRead"
QT_MOC_LITERAL(8, 77, 28), // "on_ComPortOpenButton_clicked"
QT_MOC_LITERAL(9, 106, 29), // "on_ComPortCloseButton_clicked"
QT_MOC_LITERAL(10, 136, 28), // "on_WifiConnectButton_clicked"
QT_MOC_LITERAL(11, 165, 31), // "on_WifiDisconnectButton_clicked"
QT_MOC_LITERAL(12, 197, 36), // "on_SerialTimeoutSpinBox_value..."
QT_MOC_LITERAL(13, 234, 4), // "arg1"
QT_MOC_LITERAL(14, 239, 34), // "on_WifiTimeoutSpinBox_valueCh..."
QT_MOC_LITERAL(15, 274, 32), // "on_FrontValueSlider_valueChanged"
QT_MOC_LITERAL(16, 307, 5), // "value"
QT_MOC_LITERAL(17, 313, 34), // "on_FrontValueSlider_sliderRel..."
QT_MOC_LITERAL(18, 348, 30), // "on_DirValueSlider_valueChanged"
QT_MOC_LITERAL(19, 379, 32), // "on_DirValueSlider_sliderReleased"
QT_MOC_LITERAL(20, 412, 29), // "on_Serwo0_Slider_valueChanged"
QT_MOC_LITERAL(21, 442, 29), // "on_Serwo1_Slider_valueChanged"
QT_MOC_LITERAL(22, 472, 29), // "on_Serwo2_Slider_valueChanged"
QT_MOC_LITERAL(23, 502, 29), // "on_Serwo3_Slider_valueChanged"
QT_MOC_LITERAL(24, 532, 22), // "on_SelectSatel_clicked"
QT_MOC_LITERAL(25, 555, 21), // "on_SelectWifi_clicked"
QT_MOC_LITERAL(26, 577, 35), // "on_SelectAutoNaviTypeUrcAbs_c..."
QT_MOC_LITERAL(27, 613, 35), // "on_SelectAutoNaviTypeUrcRel_c..."
QT_MOC_LITERAL(28, 649, 35), // "on_SelectAutoNaviTypeErcAbs_c..."
QT_MOC_LITERAL(29, 685, 35), // "on_SelectAutoNaviTypeErcRel_c..."
QT_MOC_LITERAL(30, 721, 24), // "on_Cam1IncButton_clicked"
QT_MOC_LITERAL(31, 746, 24), // "on_Cam1DecButton_clicked"
QT_MOC_LITERAL(32, 771, 24), // "on_Cam2IncButton_clicked"
QT_MOC_LITERAL(33, 796, 24), // "on_Cam2DecButton_clicked"
QT_MOC_LITERAL(34, 821, 26), // "on_AutoPauseButton_clicked"
QT_MOC_LITERAL(35, 848, 29), // "on_AutoContinueButton_clicked"
QT_MOC_LITERAL(36, 878, 25), // "on_AutoNextButton_clicked"
QT_MOC_LITERAL(37, 904, 33), // "on_ManipSpeed0Slider_valueCha..."
QT_MOC_LITERAL(38, 938, 35), // "on_ManipSpeed0Slider_sliderRe..."
QT_MOC_LITERAL(39, 974, 33), // "on_ManipSpeed1Slider_valueCha..."
QT_MOC_LITERAL(40, 1008, 35), // "on_ManipSpeed1Slider_sliderRe..."
QT_MOC_LITERAL(41, 1044, 33), // "on_ManipSpeed2Slider_valueCha..."
QT_MOC_LITERAL(42, 1078, 35), // "on_ManipSpeed2Slider_sliderRe..."
QT_MOC_LITERAL(43, 1114, 33), // "on_ManipSpeed3Slider_valueCha..."
QT_MOC_LITERAL(44, 1148, 35), // "on_ManipSpeed3Slider_sliderRe..."
QT_MOC_LITERAL(45, 1184, 33), // "on_ManipSpeed4Slider_valueCha..."
QT_MOC_LITERAL(46, 1218, 35), // "on_ManipSpeed4Slider_sliderRe..."
QT_MOC_LITERAL(47, 1254, 33), // "on_ManipSpeed5Slider_valueCha..."
QT_MOC_LITERAL(48, 1288, 35), // "on_ManipSpeed5Slider_sliderRe..."
QT_MOC_LITERAL(49, 1324, 33), // "on_ManipSpeed6Slider_valueCha..."
QT_MOC_LITERAL(50, 1358, 35), // "on_ManipSpeed6Slider_sliderRe..."
QT_MOC_LITERAL(51, 1394, 28), // "on_ManipEnableButton_clicked"
QT_MOC_LITERAL(52, 1423, 29), // "on_ManipDisableButton_clicked"
QT_MOC_LITERAL(53, 1453, 31), // "on_ManipCalibrateButton_clicked"
QT_MOC_LITERAL(54, 1485, 26), // "on_ManipJoinButton_clicked"
QT_MOC_LITERAL(55, 1512, 26), // "on_ManipBaseButton_clicked"
QT_MOC_LITERAL(56, 1539, 26), // "on_ManipToolButton_clicked"
QT_MOC_LITERAL(57, 1566, 29), // "on_ManipLaserOnButton_clicked"
QT_MOC_LITERAL(58, 1596, 30), // "on_ManipLaserOffButton_clicked"
QT_MOC_LITERAL(59, 1627, 32), // "on_ManipSolenoidOnButton_clicked"
QT_MOC_LITERAL(60, 1660, 33), // "on_ManipSolenoidOffButton_cli..."
QT_MOC_LITERAL(61, 1694, 22), // "setSeqButtonsColorGray"
QT_MOC_LITERAL(62, 1717, 26), // "showMessageBoxForSeqPoints"
QT_MOC_LITERAL(63, 1744, 3), // "num"
QT_MOC_LITERAL(64, 1748, 26), // "on_ManipSeq0Button_clicked"
QT_MOC_LITERAL(65, 1775, 26), // "on_ManipSeq1Button_clicked"
QT_MOC_LITERAL(66, 1802, 26), // "on_ManipSeq2Button_clicked"
QT_MOC_LITERAL(67, 1829, 26), // "on_ManipSeq3Button_clicked"
QT_MOC_LITERAL(68, 1856, 26), // "on_ManipSeq4Button_clicked"
QT_MOC_LITERAL(69, 1883, 26), // "on_ManipSeq5Button_clicked"
QT_MOC_LITERAL(70, 1910, 26), // "on_ManipSeq6Button_clicked"
QT_MOC_LITERAL(71, 1937, 26), // "on_ManipSeq7Button_clicked"
QT_MOC_LITERAL(72, 1964, 31), // "on_ManipSavePointButton_clicked"
QT_MOC_LITERAL(73, 1996, 35), // "on_ManipClearSequenceButton_c..."
QT_MOC_LITERAL(74, 2032, 31), // "on_LabSpeed0Slider_valueChanged"
QT_MOC_LITERAL(75, 2064, 33), // "on_LabSpeed0Slider_sliderRele..."
QT_MOC_LITERAL(76, 2098, 31), // "on_LabSpeed1Slider_valueChanged"
QT_MOC_LITERAL(77, 2130, 33), // "on_LabSpeed1Slider_sliderRele..."
QT_MOC_LITERAL(78, 2164, 31), // "on_LabSpeed2Slider_valueChanged"
QT_MOC_LITERAL(79, 2196, 33), // "on_LabSpeed2Slider_sliderRele..."
QT_MOC_LITERAL(80, 2230, 31), // "on_LabSpeed3Slider_valueChanged"
QT_MOC_LITERAL(81, 2262, 33), // "on_LabSpeed3Slider_sliderRele..."
QT_MOC_LITERAL(82, 2296, 29), // "on_LabSpeed0IncButton_clicked"
QT_MOC_LITERAL(83, 2326, 29), // "on_LabSpeed0DecButton_clicked"
QT_MOC_LITERAL(84, 2356, 30), // "on_LabSpeed0ZeroButton_clicked"
QT_MOC_LITERAL(85, 2387, 29), // "on_LabSpeed1IncButton_clicked"
QT_MOC_LITERAL(86, 2417, 29), // "on_LabSpeed1DecButton_clicked"
QT_MOC_LITERAL(87, 2447, 30), // "on_LabSpeed1ZeroButton_clicked"
QT_MOC_LITERAL(88, 2478, 29), // "on_LabSpeed2IncButton_clicked"
QT_MOC_LITERAL(89, 2508, 29), // "on_LabSpeed2DecButton_clicked"
QT_MOC_LITERAL(90, 2538, 30), // "on_LabSpeed2ZeroButton_clicked"
QT_MOC_LITERAL(91, 2569, 29), // "on_LabSpeed3IncButton_clicked"
QT_MOC_LITERAL(92, 2599, 29), // "on_LabSpeed3DecButton_clicked"
QT_MOC_LITERAL(93, 2629, 30), // "on_LabSpeed3ZeroButton_clicked"
QT_MOC_LITERAL(94, 2660, 20), // "showMessageBoxForLab"
QT_MOC_LITERAL(95, 2681, 3), // "str"
QT_MOC_LITERAL(96, 2685, 31), // "on_Lab0SetHomePosButton_clicked"
QT_MOC_LITERAL(97, 2717, 31), // "on_Lab1SetHomePosButton_clicked"
QT_MOC_LITERAL(98, 2749, 31), // "on_Lab2SetHomePosButton_clicked"
QT_MOC_LITERAL(99, 2781, 31), // "on_Lab3SetHomePosButton_clicked"
QT_MOC_LITERAL(100, 2813, 33), // "on_Lab0EnableLimitsButton_cli..."
QT_MOC_LITERAL(101, 2847, 33), // "on_Lab1EnableLimitsButton_cli..."
QT_MOC_LITERAL(102, 2881, 33), // "on_Lab2EnableLimitsButton_cli..."
QT_MOC_LITERAL(103, 2915, 33), // "on_Lab3EnableLimitsButton_cli..."
QT_MOC_LITERAL(104, 2949, 33), // "on_Lab0DisableimitsButton_cli..."
QT_MOC_LITERAL(105, 2983, 33), // "on_Lab1DisableimitsButton_cli..."
QT_MOC_LITERAL(106, 3017, 33), // "on_Lab2DisableimitsButton_cli..."
QT_MOC_LITERAL(107, 3051, 33), // "on_Lab3DisableimitsButton_cli..."
QT_MOC_LITERAL(108, 3085, 33), // "on_LabRemoteControlButton_cli..."
QT_MOC_LITERAL(109, 3119, 31), // "on_LabGripperOpenButton_clicked"
QT_MOC_LITERAL(110, 3151, 34), // "on_LabGripperCloseButton_2_cl..."
QT_MOC_LITERAL(111, 3186, 34), // "on_LabLuminometrOpenButton_cl..."
QT_MOC_LITERAL(112, 3221, 35), // "on_LabLuminometrCloseButton_c..."
QT_MOC_LITERAL(113, 3257, 36), // "on_LabStartMeasurementButton_..."
QT_MOC_LITERAL(114, 3294, 35), // "on_LabNeutralPositionButton_c..."
QT_MOC_LITERAL(115, 3330, 40), // "on_LabTurnOnOffLuminometerBut..."
QT_MOC_LITERAL(116, 3371, 30), // "on_LabGoToSwabXYButton_clicked"
QT_MOC_LITERAL(117, 3402, 31), // "on_AutoSendPointsButton_clicked"
QT_MOC_LITERAL(118, 3434, 33), // "on_AutoSetYawOffsetButton_cli..."
QT_MOC_LITERAL(119, 3468, 35), // "on_AutoClearYawOffsetButton_c..."
QT_MOC_LITERAL(120, 3504, 33), // "on_LabStartSequenceButton_cli..."
QT_MOC_LITERAL(121, 3538, 32), // "on_LabSequenceNextButton_clicked"
QT_MOC_LITERAL(122, 3571, 36), // "on_LabSequencePreviousButton_..."
QT_MOC_LITERAL(123, 3608, 35), // "on_AutoTelemGpsEnableButton_c..."
QT_MOC_LITERAL(124, 3644, 36), // "on_AutoTelemGpsDisableButton_..."
QT_MOC_LITERAL(125, 3681, 44), // "on_ManipTelemetryMotposDisabl..."
QT_MOC_LITERAL(126, 3726, 40), // "on_ManipTelemetryAllEnableBut..."
QT_MOC_LITERAL(127, 3767, 41), // "on_ManipTelemetryAllDisableBu..."
QT_MOC_LITERAL(128, 3809, 43), // "on_ManipTelemetryErrorsEnable..."
QT_MOC_LITERAL(129, 3853, 44), // "on_ManipTelemetryErrorsDisabl..."
QT_MOC_LITERAL(130, 3898, 43), // "on_ManipTelemetryMotposEnable..."
QT_MOC_LITERAL(131, 3942, 35), // "on_AutoTelemAllEnableButton_c..."
QT_MOC_LITERAL(132, 3978, 37), // "on_AutoTelemAllEnableButton_2..."
QT_MOC_LITERAL(133, 4016, 38), // "on_AutoTelemErrorsEnableButto..."
QT_MOC_LITERAL(134, 4055, 40), // "on_AutoTelemErrorsEnableButto..."
QT_MOC_LITERAL(135, 4096, 36), // "on_AutoTelemBallEnableButton_..."
QT_MOC_LITERAL(136, 4133, 37), // "on_AutoTelemBallDisableButton..."
QT_MOC_LITERAL(137, 4171, 35), // "on_LabLumiDiscardSwabButton_c..."
QT_MOC_LITERAL(138, 4207, 35), // "on_LabLumiVerticalPosButton_c..."
QT_MOC_LITERAL(139, 4243, 27), // "on_LabMoveZUpButton_clicked"
QT_MOC_LITERAL(140, 4271, 29), // "on_LabMoveZSwabButton_clicked"
QT_MOC_LITERAL(141, 4301, 29), // "on_LabMoveZLumiButton_clicked"
QT_MOC_LITERAL(142, 4331, 29), // "on_LabMoveZMeasButton_clicked"
QT_MOC_LITERAL(143, 4361, 30), // "on_LabMoveXYLumiButton_clicked"
QT_MOC_LITERAL(144, 4392, 30), // "on_LabMoveXYMeasButton_clicked"
QT_MOC_LITERAL(145, 4423, 29), // "on_LabEnablePIDButton_clicked"
QT_MOC_LITERAL(146, 4453, 30), // "on_LabDisablePIDButton_clicked"
QT_MOC_LITERAL(147, 4484, 30), // "on_LabMoveZSwab2Button_clicked"
QT_MOC_LITERAL(148, 4515, 40), // "on_ManipSetPosQGetCurrentPosB..."
QT_MOC_LITERAL(149, 4556, 47), // "on_ManipSetPosBaseToolGetCurr..."
QT_MOC_LITERAL(150, 4604, 35), // "on_ManipSetPosQClearPosButt_c..."
QT_MOC_LITERAL(151, 4640, 42), // "on_ManipSetPosBaseToolClearPo..."
QT_MOC_LITERAL(152, 4683, 34), // "on_ManipSetPosQMoveAbsButt_cl..."
QT_MOC_LITERAL(153, 4718, 34), // "on_ManipSetPosQMoveIncButt_cl..."
QT_MOC_LITERAL(154, 4753, 37), // "on_ManipSetPosBaseMoveAbsButt..."
QT_MOC_LITERAL(155, 4791, 37), // "on_ManipSetPosBaseMoveIncButt..."
QT_MOC_LITERAL(156, 4829, 37), // "on_ManipSetPosToolMoveIncButt..."
QT_MOC_LITERAL(157, 4867, 37), // "on_ManipSetPosGripperMoveButt..."
QT_MOC_LITERAL(158, 4905, 36), // "on_DriveSoftwareEmergencyLed_..."
QT_MOC_LITERAL(159, 4942, 47), // "on_ManipSetPosBaseToolGetCurr..."
QT_MOC_LITERAL(160, 4990, 42), // "on_ManipSetPosBaseToolClearMa..."
QT_MOC_LITERAL(161, 5033, 37), // "on_ManipSetMatBaseMoveAbsButt..."
QT_MOC_LITERAL(162, 5071, 37), // "on_ManipSetMatBaseMoveIncButt..."
QT_MOC_LITERAL(163, 5109, 37), // "on_ManipSetMatToolMoveIncButt..."
QT_MOC_LITERAL(164, 5147, 41), // "on_ManipSetPosBaseToolFindMat..."
QT_MOC_LITERAL(165, 5189, 26), // "on_ManipSeq8Button_clicked"
QT_MOC_LITERAL(166, 5216, 26), // "on_ManipSeq9Button_clicked"
QT_MOC_LITERAL(167, 5243, 27), // "on_ManipSeq10Button_clicked"
QT_MOC_LITERAL(168, 5271, 27), // "on_ManipSeq11Button_clicked"
QT_MOC_LITERAL(169, 5299, 27), // "on_ManipSeq12Button_clicked"
QT_MOC_LITERAL(170, 5327, 27), // "on_ManipSeq13Button_clicked"
QT_MOC_LITERAL(171, 5355, 27), // "on_ManipSeq14Button_clicked"
QT_MOC_LITERAL(172, 5383, 27), // "on_ManipSeq15Button_clicked"
QT_MOC_LITERAL(173, 5411, 27), // "on_RoverPosLogStart_clicked"
QT_MOC_LITERAL(174, 5439, 26), // "on_RoverPosLogStop_clicked"
QT_MOC_LITERAL(175, 5466, 31) // "on_RoverPosClearTextBox_clicked"

    },
    "MainWindow\0redrawLabel\0\0saveRoverPos\0"
    "serialSend\0serialRead\0wifiSend\0wifiRead\0"
    "on_ComPortOpenButton_clicked\0"
    "on_ComPortCloseButton_clicked\0"
    "on_WifiConnectButton_clicked\0"
    "on_WifiDisconnectButton_clicked\0"
    "on_SerialTimeoutSpinBox_valueChanged\0"
    "arg1\0on_WifiTimeoutSpinBox_valueChanged\0"
    "on_FrontValueSlider_valueChanged\0value\0"
    "on_FrontValueSlider_sliderReleased\0"
    "on_DirValueSlider_valueChanged\0"
    "on_DirValueSlider_sliderReleased\0"
    "on_Serwo0_Slider_valueChanged\0"
    "on_Serwo1_Slider_valueChanged\0"
    "on_Serwo2_Slider_valueChanged\0"
    "on_Serwo3_Slider_valueChanged\0"
    "on_SelectSatel_clicked\0on_SelectWifi_clicked\0"
    "on_SelectAutoNaviTypeUrcAbs_clicked\0"
    "on_SelectAutoNaviTypeUrcRel_clicked\0"
    "on_SelectAutoNaviTypeErcAbs_clicked\0"
    "on_SelectAutoNaviTypeErcRel_clicked\0"
    "on_Cam1IncButton_clicked\0"
    "on_Cam1DecButton_clicked\0"
    "on_Cam2IncButton_clicked\0"
    "on_Cam2DecButton_clicked\0"
    "on_AutoPauseButton_clicked\0"
    "on_AutoContinueButton_clicked\0"
    "on_AutoNextButton_clicked\0"
    "on_ManipSpeed0Slider_valueChanged\0"
    "on_ManipSpeed0Slider_sliderReleased\0"
    "on_ManipSpeed1Slider_valueChanged\0"
    "on_ManipSpeed1Slider_sliderReleased\0"
    "on_ManipSpeed2Slider_valueChanged\0"
    "on_ManipSpeed2Slider_sliderReleased\0"
    "on_ManipSpeed3Slider_valueChanged\0"
    "on_ManipSpeed3Slider_sliderReleased\0"
    "on_ManipSpeed4Slider_valueChanged\0"
    "on_ManipSpeed4Slider_sliderReleased\0"
    "on_ManipSpeed5Slider_valueChanged\0"
    "on_ManipSpeed5Slider_sliderReleased\0"
    "on_ManipSpeed6Slider_valueChanged\0"
    "on_ManipSpeed6Slider_sliderReleased\0"
    "on_ManipEnableButton_clicked\0"
    "on_ManipDisableButton_clicked\0"
    "on_ManipCalibrateButton_clicked\0"
    "on_ManipJoinButton_clicked\0"
    "on_ManipBaseButton_clicked\0"
    "on_ManipToolButton_clicked\0"
    "on_ManipLaserOnButton_clicked\0"
    "on_ManipLaserOffButton_clicked\0"
    "on_ManipSolenoidOnButton_clicked\0"
    "on_ManipSolenoidOffButton_clicked\0"
    "setSeqButtonsColorGray\0"
    "showMessageBoxForSeqPoints\0num\0"
    "on_ManipSeq0Button_clicked\0"
    "on_ManipSeq1Button_clicked\0"
    "on_ManipSeq2Button_clicked\0"
    "on_ManipSeq3Button_clicked\0"
    "on_ManipSeq4Button_clicked\0"
    "on_ManipSeq5Button_clicked\0"
    "on_ManipSeq6Button_clicked\0"
    "on_ManipSeq7Button_clicked\0"
    "on_ManipSavePointButton_clicked\0"
    "on_ManipClearSequenceButton_clicked\0"
    "on_LabSpeed0Slider_valueChanged\0"
    "on_LabSpeed0Slider_sliderReleased\0"
    "on_LabSpeed1Slider_valueChanged\0"
    "on_LabSpeed1Slider_sliderReleased\0"
    "on_LabSpeed2Slider_valueChanged\0"
    "on_LabSpeed2Slider_sliderReleased\0"
    "on_LabSpeed3Slider_valueChanged\0"
    "on_LabSpeed3Slider_sliderReleased\0"
    "on_LabSpeed0IncButton_clicked\0"
    "on_LabSpeed0DecButton_clicked\0"
    "on_LabSpeed0ZeroButton_clicked\0"
    "on_LabSpeed1IncButton_clicked\0"
    "on_LabSpeed1DecButton_clicked\0"
    "on_LabSpeed1ZeroButton_clicked\0"
    "on_LabSpeed2IncButton_clicked\0"
    "on_LabSpeed2DecButton_clicked\0"
    "on_LabSpeed2ZeroButton_clicked\0"
    "on_LabSpeed3IncButton_clicked\0"
    "on_LabSpeed3DecButton_clicked\0"
    "on_LabSpeed3ZeroButton_clicked\0"
    "showMessageBoxForLab\0str\0"
    "on_Lab0SetHomePosButton_clicked\0"
    "on_Lab1SetHomePosButton_clicked\0"
    "on_Lab2SetHomePosButton_clicked\0"
    "on_Lab3SetHomePosButton_clicked\0"
    "on_Lab0EnableLimitsButton_clicked\0"
    "on_Lab1EnableLimitsButton_clicked\0"
    "on_Lab2EnableLimitsButton_clicked\0"
    "on_Lab3EnableLimitsButton_clicked\0"
    "on_Lab0DisableimitsButton_clicked\0"
    "on_Lab1DisableimitsButton_clicked\0"
    "on_Lab2DisableimitsButton_clicked\0"
    "on_Lab3DisableimitsButton_clicked\0"
    "on_LabRemoteControlButton_clicked\0"
    "on_LabGripperOpenButton_clicked\0"
    "on_LabGripperCloseButton_2_clicked\0"
    "on_LabLuminometrOpenButton_clicked\0"
    "on_LabLuminometrCloseButton_clicked\0"
    "on_LabStartMeasurementButton_clicked\0"
    "on_LabNeutralPositionButton_clicked\0"
    "on_LabTurnOnOffLuminometerButton_clicked\0"
    "on_LabGoToSwabXYButton_clicked\0"
    "on_AutoSendPointsButton_clicked\0"
    "on_AutoSetYawOffsetButton_clicked\0"
    "on_AutoClearYawOffsetButton_clicked\0"
    "on_LabStartSequenceButton_clicked\0"
    "on_LabSequenceNextButton_clicked\0"
    "on_LabSequencePreviousButton_clicked\0"
    "on_AutoTelemGpsEnableButton_clicked\0"
    "on_AutoTelemGpsDisableButton_clicked\0"
    "on_ManipTelemetryMotposDisableButton_clicked\0"
    "on_ManipTelemetryAllEnableButton_clicked\0"
    "on_ManipTelemetryAllDisableButton_clicked\0"
    "on_ManipTelemetryErrorsEnableButton_clicked\0"
    "on_ManipTelemetryErrorsDisableButton_clicked\0"
    "on_ManipTelemetryMotposEnableButton_clicked\0"
    "on_AutoTelemAllEnableButton_clicked\0"
    "on_AutoTelemAllEnableButton_2_clicked\0"
    "on_AutoTelemErrorsEnableButton_clicked\0"
    "on_AutoTelemErrorsEnableButton_2_clicked\0"
    "on_AutoTelemBallEnableButton_clicked\0"
    "on_AutoTelemBallDisableButton_clicked\0"
    "on_LabLumiDiscardSwabButton_clicked\0"
    "on_LabLumiVerticalPosButton_clicked\0"
    "on_LabMoveZUpButton_clicked\0"
    "on_LabMoveZSwabButton_clicked\0"
    "on_LabMoveZLumiButton_clicked\0"
    "on_LabMoveZMeasButton_clicked\0"
    "on_LabMoveXYLumiButton_clicked\0"
    "on_LabMoveXYMeasButton_clicked\0"
    "on_LabEnablePIDButton_clicked\0"
    "on_LabDisablePIDButton_clicked\0"
    "on_LabMoveZSwab2Button_clicked\0"
    "on_ManipSetPosQGetCurrentPosButt_clicked\0"
    "on_ManipSetPosBaseToolGetCurrentPosButt_clicked\0"
    "on_ManipSetPosQClearPosButt_clicked\0"
    "on_ManipSetPosBaseToolClearPosButt_clicked\0"
    "on_ManipSetPosQMoveAbsButt_clicked\0"
    "on_ManipSetPosQMoveIncButt_clicked\0"
    "on_ManipSetPosBaseMoveAbsButt_clicked\0"
    "on_ManipSetPosBaseMoveIncButt_clicked\0"
    "on_ManipSetPosToolMoveIncButt_clicked\0"
    "on_ManipSetPosGripperMoveButt_clicked\0"
    "on_DriveSoftwareEmergencyLed_clicked\0"
    "on_ManipSetPosBaseToolGetCurrentMatButt_clicked\0"
    "on_ManipSetPosBaseToolClearMatButt_clicked\0"
    "on_ManipSetMatBaseMoveAbsButt_clicked\0"
    "on_ManipSetMatBaseMoveIncButt_clicked\0"
    "on_ManipSetMatToolMoveIncButt_clicked\0"
    "on_ManipSetPosBaseToolFindMatButt_clicked\0"
    "on_ManipSeq8Button_clicked\0"
    "on_ManipSeq9Button_clicked\0"
    "on_ManipSeq10Button_clicked\0"
    "on_ManipSeq11Button_clicked\0"
    "on_ManipSeq12Button_clicked\0"
    "on_ManipSeq13Button_clicked\0"
    "on_ManipSeq14Button_clicked\0"
    "on_ManipSeq15Button_clicked\0"
    "on_RoverPosLogStart_clicked\0"
    "on_RoverPosLogStop_clicked\0"
    "on_RoverPosClearTextBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     170,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  864,    2, 0x08 /* Private */,
       3,    0,  865,    2, 0x08 /* Private */,
       4,    0,  866,    2, 0x08 /* Private */,
       5,    0,  867,    2, 0x08 /* Private */,
       6,    0,  868,    2, 0x08 /* Private */,
       7,    0,  869,    2, 0x08 /* Private */,
       8,    0,  870,    2, 0x08 /* Private */,
       9,    0,  871,    2, 0x08 /* Private */,
      10,    0,  872,    2, 0x08 /* Private */,
      11,    0,  873,    2, 0x08 /* Private */,
      12,    1,  874,    2, 0x08 /* Private */,
      14,    1,  877,    2, 0x08 /* Private */,
      15,    1,  880,    2, 0x08 /* Private */,
      17,    0,  883,    2, 0x08 /* Private */,
      18,    1,  884,    2, 0x08 /* Private */,
      19,    0,  887,    2, 0x08 /* Private */,
      20,    1,  888,    2, 0x08 /* Private */,
      21,    1,  891,    2, 0x08 /* Private */,
      22,    1,  894,    2, 0x08 /* Private */,
      23,    1,  897,    2, 0x08 /* Private */,
      24,    0,  900,    2, 0x08 /* Private */,
      25,    0,  901,    2, 0x08 /* Private */,
      26,    0,  902,    2, 0x08 /* Private */,
      27,    0,  903,    2, 0x08 /* Private */,
      28,    0,  904,    2, 0x08 /* Private */,
      29,    0,  905,    2, 0x08 /* Private */,
      30,    0,  906,    2, 0x08 /* Private */,
      31,    0,  907,    2, 0x08 /* Private */,
      32,    0,  908,    2, 0x08 /* Private */,
      33,    0,  909,    2, 0x08 /* Private */,
      34,    0,  910,    2, 0x08 /* Private */,
      35,    0,  911,    2, 0x08 /* Private */,
      36,    0,  912,    2, 0x08 /* Private */,
      37,    1,  913,    2, 0x08 /* Private */,
      38,    0,  916,    2, 0x08 /* Private */,
      39,    1,  917,    2, 0x08 /* Private */,
      40,    0,  920,    2, 0x08 /* Private */,
      41,    1,  921,    2, 0x08 /* Private */,
      42,    0,  924,    2, 0x08 /* Private */,
      43,    1,  925,    2, 0x08 /* Private */,
      44,    0,  928,    2, 0x08 /* Private */,
      45,    1,  929,    2, 0x08 /* Private */,
      46,    0,  932,    2, 0x08 /* Private */,
      47,    1,  933,    2, 0x08 /* Private */,
      48,    0,  936,    2, 0x08 /* Private */,
      49,    1,  937,    2, 0x08 /* Private */,
      50,    0,  940,    2, 0x08 /* Private */,
      51,    0,  941,    2, 0x08 /* Private */,
      52,    0,  942,    2, 0x08 /* Private */,
      53,    0,  943,    2, 0x08 /* Private */,
      54,    0,  944,    2, 0x08 /* Private */,
      55,    0,  945,    2, 0x08 /* Private */,
      56,    0,  946,    2, 0x08 /* Private */,
      57,    0,  947,    2, 0x08 /* Private */,
      58,    0,  948,    2, 0x08 /* Private */,
      59,    0,  949,    2, 0x08 /* Private */,
      60,    0,  950,    2, 0x08 /* Private */,
      61,    0,  951,    2, 0x08 /* Private */,
      62,    1,  952,    2, 0x08 /* Private */,
      64,    0,  955,    2, 0x08 /* Private */,
      65,    0,  956,    2, 0x08 /* Private */,
      66,    0,  957,    2, 0x08 /* Private */,
      67,    0,  958,    2, 0x08 /* Private */,
      68,    0,  959,    2, 0x08 /* Private */,
      69,    0,  960,    2, 0x08 /* Private */,
      70,    0,  961,    2, 0x08 /* Private */,
      71,    0,  962,    2, 0x08 /* Private */,
      72,    0,  963,    2, 0x08 /* Private */,
      73,    0,  964,    2, 0x08 /* Private */,
      74,    1,  965,    2, 0x08 /* Private */,
      75,    0,  968,    2, 0x08 /* Private */,
      76,    1,  969,    2, 0x08 /* Private */,
      77,    0,  972,    2, 0x08 /* Private */,
      78,    1,  973,    2, 0x08 /* Private */,
      79,    0,  976,    2, 0x08 /* Private */,
      80,    1,  977,    2, 0x08 /* Private */,
      81,    0,  980,    2, 0x08 /* Private */,
      82,    0,  981,    2, 0x08 /* Private */,
      83,    0,  982,    2, 0x08 /* Private */,
      84,    0,  983,    2, 0x08 /* Private */,
      85,    0,  984,    2, 0x08 /* Private */,
      86,    0,  985,    2, 0x08 /* Private */,
      87,    0,  986,    2, 0x08 /* Private */,
      88,    0,  987,    2, 0x08 /* Private */,
      89,    0,  988,    2, 0x08 /* Private */,
      90,    0,  989,    2, 0x08 /* Private */,
      91,    0,  990,    2, 0x08 /* Private */,
      92,    0,  991,    2, 0x08 /* Private */,
      93,    0,  992,    2, 0x08 /* Private */,
      94,    1,  993,    2, 0x08 /* Private */,
      96,    0,  996,    2, 0x08 /* Private */,
      97,    0,  997,    2, 0x08 /* Private */,
      98,    0,  998,    2, 0x08 /* Private */,
      99,    0,  999,    2, 0x08 /* Private */,
     100,    0, 1000,    2, 0x08 /* Private */,
     101,    0, 1001,    2, 0x08 /* Private */,
     102,    0, 1002,    2, 0x08 /* Private */,
     103,    0, 1003,    2, 0x08 /* Private */,
     104,    0, 1004,    2, 0x08 /* Private */,
     105,    0, 1005,    2, 0x08 /* Private */,
     106,    0, 1006,    2, 0x08 /* Private */,
     107,    0, 1007,    2, 0x08 /* Private */,
     108,    0, 1008,    2, 0x08 /* Private */,
     109,    0, 1009,    2, 0x08 /* Private */,
     110,    0, 1010,    2, 0x08 /* Private */,
     111,    0, 1011,    2, 0x08 /* Private */,
     112,    0, 1012,    2, 0x08 /* Private */,
     113,    0, 1013,    2, 0x08 /* Private */,
     114,    0, 1014,    2, 0x08 /* Private */,
     115,    0, 1015,    2, 0x08 /* Private */,
     116,    0, 1016,    2, 0x08 /* Private */,
     117,    0, 1017,    2, 0x08 /* Private */,
     118,    0, 1018,    2, 0x08 /* Private */,
     119,    0, 1019,    2, 0x08 /* Private */,
     120,    0, 1020,    2, 0x08 /* Private */,
     121,    0, 1021,    2, 0x08 /* Private */,
     122,    0, 1022,    2, 0x08 /* Private */,
     123,    0, 1023,    2, 0x08 /* Private */,
     124,    0, 1024,    2, 0x08 /* Private */,
     125,    0, 1025,    2, 0x08 /* Private */,
     126,    0, 1026,    2, 0x08 /* Private */,
     127,    0, 1027,    2, 0x08 /* Private */,
     128,    0, 1028,    2, 0x08 /* Private */,
     129,    0, 1029,    2, 0x08 /* Private */,
     130,    0, 1030,    2, 0x08 /* Private */,
     131,    0, 1031,    2, 0x08 /* Private */,
     132,    0, 1032,    2, 0x08 /* Private */,
     133,    0, 1033,    2, 0x08 /* Private */,
     134,    0, 1034,    2, 0x08 /* Private */,
     135,    0, 1035,    2, 0x08 /* Private */,
     136,    0, 1036,    2, 0x08 /* Private */,
     137,    0, 1037,    2, 0x08 /* Private */,
     138,    0, 1038,    2, 0x08 /* Private */,
     139,    0, 1039,    2, 0x08 /* Private */,
     140,    0, 1040,    2, 0x08 /* Private */,
     141,    0, 1041,    2, 0x08 /* Private */,
     142,    0, 1042,    2, 0x08 /* Private */,
     143,    0, 1043,    2, 0x08 /* Private */,
     144,    0, 1044,    2, 0x08 /* Private */,
     145,    0, 1045,    2, 0x08 /* Private */,
     146,    0, 1046,    2, 0x08 /* Private */,
     147,    0, 1047,    2, 0x08 /* Private */,
     148,    0, 1048,    2, 0x08 /* Private */,
     149,    0, 1049,    2, 0x08 /* Private */,
     150,    0, 1050,    2, 0x08 /* Private */,
     151,    0, 1051,    2, 0x08 /* Private */,
     152,    0, 1052,    2, 0x08 /* Private */,
     153,    0, 1053,    2, 0x08 /* Private */,
     154,    0, 1054,    2, 0x08 /* Private */,
     155,    0, 1055,    2, 0x08 /* Private */,
     156,    0, 1056,    2, 0x08 /* Private */,
     157,    0, 1057,    2, 0x08 /* Private */,
     158,    0, 1058,    2, 0x08 /* Private */,
     159,    0, 1059,    2, 0x08 /* Private */,
     160,    0, 1060,    2, 0x08 /* Private */,
     161,    0, 1061,    2, 0x08 /* Private */,
     162,    0, 1062,    2, 0x08 /* Private */,
     163,    0, 1063,    2, 0x08 /* Private */,
     164,    0, 1064,    2, 0x08 /* Private */,
     165,    0, 1065,    2, 0x08 /* Private */,
     166,    0, 1066,    2, 0x08 /* Private */,
     167,    0, 1067,    2, 0x08 /* Private */,
     168,    0, 1068,    2, 0x08 /* Private */,
     169,    0, 1069,    2, 0x08 /* Private */,
     170,    0, 1070,    2, 0x08 /* Private */,
     171,    0, 1071,    2, 0x08 /* Private */,
     172,    0, 1072,    2, 0x08 /* Private */,
     173,    0, 1073,    2, 0x08 /* Private */,
     174,    0, 1074,    2, 0x08 /* Private */,
     175,    0, 1075,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   95,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redrawLabel(); break;
        case 1: _t->saveRoverPos(); break;
        case 2: _t->serialSend(); break;
        case 3: _t->serialRead(); break;
        case 4: _t->wifiSend(); break;
        case 5: _t->wifiRead(); break;
        case 6: _t->on_ComPortOpenButton_clicked(); break;
        case 7: _t->on_ComPortCloseButton_clicked(); break;
        case 8: _t->on_WifiConnectButton_clicked(); break;
        case 9: _t->on_WifiDisconnectButton_clicked(); break;
        case 10: _t->on_SerialTimeoutSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_WifiTimeoutSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_FrontValueSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_FrontValueSlider_sliderReleased(); break;
        case 14: _t->on_DirValueSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_DirValueSlider_sliderReleased(); break;
        case 16: _t->on_Serwo0_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_Serwo1_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_Serwo2_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_Serwo3_Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_SelectSatel_clicked(); break;
        case 21: _t->on_SelectWifi_clicked(); break;
        case 22: _t->on_SelectAutoNaviTypeUrcAbs_clicked(); break;
        case 23: _t->on_SelectAutoNaviTypeUrcRel_clicked(); break;
        case 24: _t->on_SelectAutoNaviTypeErcAbs_clicked(); break;
        case 25: _t->on_SelectAutoNaviTypeErcRel_clicked(); break;
        case 26: _t->on_Cam1IncButton_clicked(); break;
        case 27: _t->on_Cam1DecButton_clicked(); break;
        case 28: _t->on_Cam2IncButton_clicked(); break;
        case 29: _t->on_Cam2DecButton_clicked(); break;
        case 30: _t->on_AutoPauseButton_clicked(); break;
        case 31: _t->on_AutoContinueButton_clicked(); break;
        case 32: _t->on_AutoNextButton_clicked(); break;
        case 33: _t->on_ManipSpeed0Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_ManipSpeed0Slider_sliderReleased(); break;
        case 35: _t->on_ManipSpeed1Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_ManipSpeed1Slider_sliderReleased(); break;
        case 37: _t->on_ManipSpeed2Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_ManipSpeed2Slider_sliderReleased(); break;
        case 39: _t->on_ManipSpeed3Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_ManipSpeed3Slider_sliderReleased(); break;
        case 41: _t->on_ManipSpeed4Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_ManipSpeed4Slider_sliderReleased(); break;
        case 43: _t->on_ManipSpeed5Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_ManipSpeed5Slider_sliderReleased(); break;
        case 45: _t->on_ManipSpeed6Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->on_ManipSpeed6Slider_sliderReleased(); break;
        case 47: _t->on_ManipEnableButton_clicked(); break;
        case 48: _t->on_ManipDisableButton_clicked(); break;
        case 49: _t->on_ManipCalibrateButton_clicked(); break;
        case 50: _t->on_ManipJoinButton_clicked(); break;
        case 51: _t->on_ManipBaseButton_clicked(); break;
        case 52: _t->on_ManipToolButton_clicked(); break;
        case 53: _t->on_ManipLaserOnButton_clicked(); break;
        case 54: _t->on_ManipLaserOffButton_clicked(); break;
        case 55: _t->on_ManipSolenoidOnButton_clicked(); break;
        case 56: _t->on_ManipSolenoidOffButton_clicked(); break;
        case 57: _t->setSeqButtonsColorGray(); break;
        case 58: { int _r = _t->showMessageBoxForSeqPoints((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->on_ManipSeq0Button_clicked(); break;
        case 60: _t->on_ManipSeq1Button_clicked(); break;
        case 61: _t->on_ManipSeq2Button_clicked(); break;
        case 62: _t->on_ManipSeq3Button_clicked(); break;
        case 63: _t->on_ManipSeq4Button_clicked(); break;
        case 64: _t->on_ManipSeq5Button_clicked(); break;
        case 65: _t->on_ManipSeq6Button_clicked(); break;
        case 66: _t->on_ManipSeq7Button_clicked(); break;
        case 67: _t->on_ManipSavePointButton_clicked(); break;
        case 68: _t->on_ManipClearSequenceButton_clicked(); break;
        case 69: _t->on_LabSpeed0Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->on_LabSpeed0Slider_sliderReleased(); break;
        case 71: _t->on_LabSpeed1Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->on_LabSpeed1Slider_sliderReleased(); break;
        case 73: _t->on_LabSpeed2Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->on_LabSpeed2Slider_sliderReleased(); break;
        case 75: _t->on_LabSpeed3Slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->on_LabSpeed3Slider_sliderReleased(); break;
        case 77: _t->on_LabSpeed0IncButton_clicked(); break;
        case 78: _t->on_LabSpeed0DecButton_clicked(); break;
        case 79: _t->on_LabSpeed0ZeroButton_clicked(); break;
        case 80: _t->on_LabSpeed1IncButton_clicked(); break;
        case 81: _t->on_LabSpeed1DecButton_clicked(); break;
        case 82: _t->on_LabSpeed1ZeroButton_clicked(); break;
        case 83: _t->on_LabSpeed2IncButton_clicked(); break;
        case 84: _t->on_LabSpeed2DecButton_clicked(); break;
        case 85: _t->on_LabSpeed2ZeroButton_clicked(); break;
        case 86: _t->on_LabSpeed3IncButton_clicked(); break;
        case 87: _t->on_LabSpeed3DecButton_clicked(); break;
        case 88: _t->on_LabSpeed3ZeroButton_clicked(); break;
        case 89: { int _r = _t->showMessageBoxForLab((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 90: _t->on_Lab0SetHomePosButton_clicked(); break;
        case 91: _t->on_Lab1SetHomePosButton_clicked(); break;
        case 92: _t->on_Lab2SetHomePosButton_clicked(); break;
        case 93: _t->on_Lab3SetHomePosButton_clicked(); break;
        case 94: _t->on_Lab0EnableLimitsButton_clicked(); break;
        case 95: _t->on_Lab1EnableLimitsButton_clicked(); break;
        case 96: _t->on_Lab2EnableLimitsButton_clicked(); break;
        case 97: _t->on_Lab3EnableLimitsButton_clicked(); break;
        case 98: _t->on_Lab0DisableimitsButton_clicked(); break;
        case 99: _t->on_Lab1DisableimitsButton_clicked(); break;
        case 100: _t->on_Lab2DisableimitsButton_clicked(); break;
        case 101: _t->on_Lab3DisableimitsButton_clicked(); break;
        case 102: _t->on_LabRemoteControlButton_clicked(); break;
        case 103: _t->on_LabGripperOpenButton_clicked(); break;
        case 104: _t->on_LabGripperCloseButton_2_clicked(); break;
        case 105: _t->on_LabLuminometrOpenButton_clicked(); break;
        case 106: _t->on_LabLuminometrCloseButton_clicked(); break;
        case 107: _t->on_LabStartMeasurementButton_clicked(); break;
        case 108: _t->on_LabNeutralPositionButton_clicked(); break;
        case 109: _t->on_LabTurnOnOffLuminometerButton_clicked(); break;
        case 110: _t->on_LabGoToSwabXYButton_clicked(); break;
        case 111: _t->on_AutoSendPointsButton_clicked(); break;
        case 112: _t->on_AutoSetYawOffsetButton_clicked(); break;
        case 113: _t->on_AutoClearYawOffsetButton_clicked(); break;
        case 114: _t->on_LabStartSequenceButton_clicked(); break;
        case 115: _t->on_LabSequenceNextButton_clicked(); break;
        case 116: _t->on_LabSequencePreviousButton_clicked(); break;
        case 117: _t->on_AutoTelemGpsEnableButton_clicked(); break;
        case 118: _t->on_AutoTelemGpsDisableButton_clicked(); break;
        case 119: _t->on_ManipTelemetryMotposDisableButton_clicked(); break;
        case 120: _t->on_ManipTelemetryAllEnableButton_clicked(); break;
        case 121: _t->on_ManipTelemetryAllDisableButton_clicked(); break;
        case 122: _t->on_ManipTelemetryErrorsEnableButton_clicked(); break;
        case 123: _t->on_ManipTelemetryErrorsDisableButton_clicked(); break;
        case 124: _t->on_ManipTelemetryMotposEnableButton_clicked(); break;
        case 125: _t->on_AutoTelemAllEnableButton_clicked(); break;
        case 126: _t->on_AutoTelemAllEnableButton_2_clicked(); break;
        case 127: _t->on_AutoTelemErrorsEnableButton_clicked(); break;
        case 128: _t->on_AutoTelemErrorsEnableButton_2_clicked(); break;
        case 129: _t->on_AutoTelemBallEnableButton_clicked(); break;
        case 130: _t->on_AutoTelemBallDisableButton_clicked(); break;
        case 131: _t->on_LabLumiDiscardSwabButton_clicked(); break;
        case 132: _t->on_LabLumiVerticalPosButton_clicked(); break;
        case 133: _t->on_LabMoveZUpButton_clicked(); break;
        case 134: _t->on_LabMoveZSwabButton_clicked(); break;
        case 135: _t->on_LabMoveZLumiButton_clicked(); break;
        case 136: _t->on_LabMoveZMeasButton_clicked(); break;
        case 137: _t->on_LabMoveXYLumiButton_clicked(); break;
        case 138: _t->on_LabMoveXYMeasButton_clicked(); break;
        case 139: _t->on_LabEnablePIDButton_clicked(); break;
        case 140: _t->on_LabDisablePIDButton_clicked(); break;
        case 141: _t->on_LabMoveZSwab2Button_clicked(); break;
        case 142: _t->on_ManipSetPosQGetCurrentPosButt_clicked(); break;
        case 143: _t->on_ManipSetPosBaseToolGetCurrentPosButt_clicked(); break;
        case 144: _t->on_ManipSetPosQClearPosButt_clicked(); break;
        case 145: _t->on_ManipSetPosBaseToolClearPosButt_clicked(); break;
        case 146: _t->on_ManipSetPosQMoveAbsButt_clicked(); break;
        case 147: _t->on_ManipSetPosQMoveIncButt_clicked(); break;
        case 148: _t->on_ManipSetPosBaseMoveAbsButt_clicked(); break;
        case 149: _t->on_ManipSetPosBaseMoveIncButt_clicked(); break;
        case 150: _t->on_ManipSetPosToolMoveIncButt_clicked(); break;
        case 151: _t->on_ManipSetPosGripperMoveButt_clicked(); break;
        case 152: _t->on_DriveSoftwareEmergencyLed_clicked(); break;
        case 153: _t->on_ManipSetPosBaseToolGetCurrentMatButt_clicked(); break;
        case 154: _t->on_ManipSetPosBaseToolClearMatButt_clicked(); break;
        case 155: _t->on_ManipSetMatBaseMoveAbsButt_clicked(); break;
        case 156: _t->on_ManipSetMatBaseMoveIncButt_clicked(); break;
        case 157: _t->on_ManipSetMatToolMoveIncButt_clicked(); break;
        case 158: _t->on_ManipSetPosBaseToolFindMatButt_clicked(); break;
        case 159: _t->on_ManipSeq8Button_clicked(); break;
        case 160: _t->on_ManipSeq9Button_clicked(); break;
        case 161: _t->on_ManipSeq10Button_clicked(); break;
        case 162: _t->on_ManipSeq11Button_clicked(); break;
        case 163: _t->on_ManipSeq12Button_clicked(); break;
        case 164: _t->on_ManipSeq13Button_clicked(); break;
        case 165: _t->on_ManipSeq14Button_clicked(); break;
        case 166: _t->on_ManipSeq15Button_clicked(); break;
        case 167: _t->on_RoverPosLogStart_clicked(); break;
        case 168: _t->on_RoverPosLogStop_clicked(); break;
        case 169: _t->on_RoverPosClearTextBox_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 170)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 170;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 170)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 170;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
