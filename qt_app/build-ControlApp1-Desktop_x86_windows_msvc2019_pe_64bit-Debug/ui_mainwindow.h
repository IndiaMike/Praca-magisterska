/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_11;
    QPushButton *WifiConnectButton;
    QSpinBox *WifiTimeoutSpinBox;
    QPushButton *WifiDisconnectButton;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *WifiDriveFrameCHeckBox;
    QCheckBox *WifiManipFrameCHeckBox;
    QCheckBox *WifiLabFrameCHeckBox;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_12;
    QComboBox *comboBox;
    QPushButton *ComPortCloseButton;
    QSpinBox *SerialTimeoutSpinBox;
    QPushButton *ComPortOpenButton;
    QVBoxLayout *verticalLayout;
    QCheckBox *SerialDriveFrameCHeckBox;
    QCheckBox *SerialManipFrameCHeckBox;
    QCheckBox *SerialLabFrameCHeckBox;
    QWidget *gridLayoutWidget_13;
    QGridLayout *gridLayout_13;
    QPushButton *ManipTelemetryMotposEnableButton;
    QPushButton *ManipTelemetryMotposDisableButton;
    QPushButton *ManipTelemetryErrorsEnableButton;
    QPushButton *ManipTelemetryErrorsDisableButton;
    QPushButton *ManipTelemetryAllEnableButton;
    QPushButton *ManipTelemetryAllDisableButton;
    QWidget *gridLayoutWidget_14;
    QGridLayout *gridLayout_14;
    QPushButton *AutoTelemAllEnableButton;
    QPushButton *AutoTelemGpsEnableButton;
    QPushButton *AutoTelemAllEnableButton_2;
    QPushButton *AutoTelemGpsDisableButton;
    QPushButton *AutoTelemBallDisableButton;
    QPushButton *AutoTelemBallEnableButton;
    QPushButton *AutoTelemErrorsEnableButton;
    QPushButton *AutoTelemErrorsEnableButton_2;
    QWidget *TabDrive;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_9;
    QLineEdit *DrivePitchLineEdit;
    QLineEdit *DriveLonLineEdit;
    QLineEdit *DriveRollLineEdit;
    QLineEdit *DriveYawLineEdit;
    QLineEdit *DriveLatLineEdit;
    QLineEdit *DriveCmdLineEdit;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_8;
    QPushButton *Cam2IncButton;
    QPushButton *SelectWifi;
    QPushButton *Cam1DecButton;
    QPushButton *Cam2DecButton;
    QPushButton *AutoSetYawOffsetButton;
    QPushButton *DriveMot1Error;
    QPushButton *DriveSoftwareEmergencyLed;
    QPushButton *AutoContinueButton;
    QPushButton *AutoNextButton;
    QPushButton *AutoPauseButton;
    QPushButton *SelectSatel;
    QPushButton *Cam1IncButton;
    QPushButton *DriveMot3Error;
    QPushButton *DriveMot2Error;
    QPushButton *AutoSendPointsButton;
    QPushButton *DriveHardwareEmergencyLed;
    QPushButton *DriveMot0Error;
    QPushButton *AutoClearYawOffsetButton;
    QPushButton *SelectAutoNaviTypeErcRel;
    QPushButton *SelectAutoNaviTypeErcAbs;
    QPushButton *SelectAutoNaviTypeUrcRel;
    QPushButton *SelectAutoNaviTypeUrcAbs;
    QSlider *FrontValueSlider;
    QSlider *DirValueSlider;
    QSlider *Serwo0_Slider;
    QSlider *Serwo1_Slider;
    QSlider *Serwo2_Slider;
    QSlider *Serwo3_Slider;
    QLineEdit *FVLineEdit;
    QLineEdit *DVLineEdit;
    QLineEdit *S0LineEdit;
    QLineEdit *S1LineEdit;
    QLineEdit *S2LineEdit;
    QLineEdit *S3LineEdit;
    QWidget *gridLayoutWidget_16;
    QGridLayout *gridLayout_23;
    QTextEdit *RoverPosLogTextEdit;
    QPushButton *RoverPosLogStop;
    QPushButton *RoverPosLogStart;
    QPushButton *RoverPosClearTextBox;
    QWidget *TabManip;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ManipSpeed0LineEdit;
    QLineEdit *ManipSpeed1LineEdit;
    QLineEdit *ManipSpeed2LineEdit;
    QLineEdit *ManipSpeed3LineEdit;
    QLineEdit *ManipSpeed4LineEdit;
    QLineEdit *ManipSpeed5LineEdit;
    QLineEdit *ManipSpeed6LineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *ManipSpeed0Slider;
    QSlider *ManipSpeed1Slider;
    QSlider *ManipSpeed2Slider;
    QSlider *ManipSpeed3Slider;
    QSlider *ManipSpeed4Slider;
    QSlider *ManipSpeed5Slider;
    QSlider *ManipSpeed6Slider;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *ManipSeq1Button;
    QPushButton *ManipSeq10Button;
    QPushButton *ManipSeq11Button;
    QPushButton *ManipSeq2Button;
    QPushButton *ManipSeq6Button;
    QPushButton *ManipSeq0Button;
    QPushButton *ManipLaserOnButton;
    QPushButton *ManipSeq3Button;
    QPushButton *ManipSolenoidOffButton;
    QPushButton *ManipSeq4Button;
    QPushButton *ManipSeq7Button;
    QPushButton *ManipLaserOffButton;
    QPushButton *ManipSeq8Button;
    QPushButton *ManipSeq9Button;
    QPushButton *ManipSolenoidOnButton;
    QPushButton *ManipSeq5Button;
    QPushButton *ManipSeq12Button;
    QPushButton *ManipSeq13Button;
    QPushButton *ManipSeq14Button;
    QPushButton *ManipSeq15Button;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *ManipToolButton;
    QPushButton *ManipJoinButton;
    QPushButton *ManipCalibrateButton;
    QPushButton *ManipBaseButton;
    QPushButton *ManipDisableButton;
    QPushButton *ManipEnableButton;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *ManipClearSequenceButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpinBox *ManipSeqSpinBox;
    QPushButton *ManipSavePointButton;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QSpinBox *ManipSpeedArmSpinBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QSpinBox *ManipGripperTimeSpinBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QSpinBox *ManipGripperSpeedSpinBox;
    QComboBox *ManipPointTypeComboBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QSpinBox *ManipPointSpinBox;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_16;
    QLineEdit *ManipPosYLineEdit;
    QLineEdit *ManipPosPitchLineEdit;
    QLineEdit *ManipPosMot3LineEdit;
    QLineEdit *ManipPosYawLineEdit;
    QLineEdit *ManipPosMot1LineEdit;
    QPushButton *ManipMot0ErrorInd;
    QLineEdit *ManipPosMot4LineEdit;
    QLineEdit *ManipPosXLineEdit;
    QPushButton *ManipMot4ErrorInd;
    QLineEdit *ManipPosZLineEdit;
    QLineEdit *ManipPosMot0LineEdit;
    QPushButton *ManipMot5ErrorInd;
    QLineEdit *ManipPosMot2LineEdit;
    QLineEdit *ManipPosRollLineEdit;
    QPushButton *ManipMot3ErrorInd;
    QLineEdit *ManipPosMot5LineEdit;
    QPushButton *ManipMot1ErrorInd;
    QPushButton *ManipMot2ErrorInd;
    QPushButton *ManipPosReachedInd;
    QLineEdit *ManipCoordinateSystemLineEdit;
    QPushButton *ManipStartErrorInd;
    QPushButton *ManipMoveInterruptedInd;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_15;
    QLineEdit *ManipPosMat23_LineEdit;
    QLineEdit *ManipPosMat30_LineEdit;
    QLineEdit *ManipPosMat10_LineEdit;
    QLineEdit *ManipPosMat33_LineEdit;
    QLineEdit *ManipPosMat02_LineEdit;
    QLineEdit *ManipPosMat03_LineEdit;
    QLineEdit *ManipPosMat31_LineEdit;
    QLineEdit *ManipPosMat20_LineEdit;
    QLineEdit *ManipPosMat12_LineEdit;
    QLineEdit *ManipPosMat21_LineEdit;
    QLineEdit *ManipPosMat11_LineEdit;
    QLineEdit *ManipPosMat13_LineEdit;
    QLineEdit *ManipPosMat22_LineEdit;
    QLineEdit *ManipPosMat32_LineEdit;
    QLineEdit *ManipPosMat01_LineEdit;
    QLineEdit *ManipPosMat00_LineEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ManipMot0PidInd;
    QPushButton *ManipMot1PidInd;
    QPushButton *ManipMot2PidInd;
    QPushButton *ManipMot3PidInd;
    QPushButton *ManipMot4PidInd;
    QPushButton *ManipMot5PidInd;
    QPushButton *ManipMot6PidInd;
    QWidget *gridLayoutWidget_15;
    QGridLayout *gridLayout_21;
    QDoubleSpinBox *ManipSetPosMat03DoubleSpinBox;
    QPushButton *ManipSetPosBaseToolGetCurrentMatButt;
    QDoubleSpinBox *ManipSetPosMat23DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat22DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat33DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat01DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat10DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat12DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat20DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat32DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat13DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat11DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat21DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat00DoubleSpinBox;
    QPushButton *ManipSetPosBaseToolClearMatButt;
    QDoubleSpinBox *ManipSetPosMat30DoubleSpinBox_2;
    QDoubleSpinBox *ManipSetPosMat02DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosMat31DoubleSpinBox;
    QPushButton *ManipSetMatBaseMoveAbsButt;
    QPushButton *ManipSetMatBaseMoveIncButt;
    QPushButton *ManipSetMatToolMoveIncButt;
    QPushButton *ManipSetPosBaseToolFindMatButt;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_19;
    QDoubleSpinBox *ManipSetPosRollDoubleSpinBox;
    QDoubleSpinBox *ManipSetPosZDoubleSpinBox;
    QDoubleSpinBox *ManipSetPosPitchDoubleSpinBox;
    QDoubleSpinBox *ManipSetPosXDoubleSpinBox;
    QDoubleSpinBox *ManipSetPosYawDoubleSpinBox;
    QDoubleSpinBox *ManipSetPosYDoubleSpinBox;
    QGridLayout *gridLayout_18;
    QPushButton *ManipSetPosBaseMoveIncButt;
    QPushButton *ManipSetPosBaseMoveAbsButt;
    QPushButton *ManipSetPosBaseToolGetCurrentPosButt;
    QPushButton *ManipSetPosBaseToolClearPosButt;
    QPushButton *ManipSetPosToolMoveIncButt;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_17;
    QPushButton *ManipSetPosQGetCurrentPosButt;
    QPushButton *ManipSetPosQMoveAbsButt;
    QGridLayout *gridLayout_20;
    QDoubleSpinBox *ManipSetPosGripTimeDoubleSpinBox;
    QDoubleSpinBox *ManipSetPosGripSpeedDoubleSpinBox;
    QPushButton *ManipSetPosGripperMoveButt;
    QPushButton *ManipSetPosQClearPosButt;
    QDoubleSpinBox *ManipSetPosQ3DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosQ2DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosQ0DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosQ1DoubleSpinBox;
    QDoubleSpinBox *ManipSetPosQ5DoubleSpinBox;
    QPushButton *ManipSetPosQMoveIncButt;
    QDoubleSpinBox *ManipSetPosQ4DoubleSpinBox;
    QWidget *tabLaboratory;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSlider *LabSpeed1Slider;
    QSlider *LabSpeed0Slider;
    QPushButton *LabSpeed2IncButton;
    QLineEdit *Lab2LineEdit;
    QSlider *LabSpeed2Slider;
    QProgressBar *LabCur0ProgressBar;
    QPushButton *LabSpeed3DecButton;
    QProgressBar *LabCur3ProgressBar;
    QLineEdit *LabSpeed1LineEdit;
    QLineEdit *LabSpeed3LineEdit;
    QProgressBar *LabCur1ProgressBar;
    QPushButton *LabSpeed1IncButton;
    QPushButton *LabSpeed1DecButton;
    QPushButton *LabSpeed2ZeroButton;
    QPushButton *LabSpeed1ZeroButton;
    QPushButton *LabSpeed0DecButton;
    QPushButton *LabSpeed3IncButton;
    QLineEdit *LabSpeed0LineEdit;
    QPushButton *LabSpeed3ZeroButton;
    QLineEdit *LabSpeed2LineEdit;
    QLineEdit *Lab1LineEdit;
    QPushButton *LabSpeed0ZeroButton;
    QPushButton *LabSpeed2DecButton;
    QPushButton *LabSpeed0IncButton;
    QLineEdit *Lab3LineEdit;
    QProgressBar *LabCur2ProgressBar;
    QSlider *LabSpeed3Slider;
    QLineEdit *Lab0LineEdit;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *Lab3EnableLimitsButton;
    QPushButton *Lab2DisableimitsButton;
    QPushButton *Lab0DisableimitsButton;
    QPushButton *Lab3DisableimitsButton;
    QPushButton *Lab2EnableLimitsButton;
    QPushButton *Lab3SetHomePosButton;
    QPushButton *Lab0EnableLimitsButton;
    QPushButton *Lab1EnableLimitsButton;
    QPushButton *Lab1DisableimitsButton;
    QPushButton *Lab1SetHomePosButton;
    QPushButton *Lab2SetHomePosButton;
    QPushButton *Lab0SetHomePosButton;
    QPushButton *LabDisablePIDButton;
    QPushButton *LabEnablePIDButton;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QPushButton *LabNeutralPositionButton;
    QPushButton *LabLuminometrCloseButton;
    QPushButton *LabSequencePreviousButton;
    QPushButton *LabGripperCloseButton_2;
    QPushButton *LabSequenceNextButton;
    QPushButton *LabTurnOnOffLuminometerButton;
    QPushButton *LabStartSequenceButton;
    QPushButton *LabGripperOpenButton;
    QGridLayout *gridLayout_7;
    QLabel *label_7;
    QSpinBox *LabNumberOfSequenceSpinBox;
    QPushButton *LabLuminometrOpenButton;
    QPushButton *LabGoToSwabXYButton;
    QPushButton *LabStartMeasurementButton;
    QGridLayout *gridLayout_10;
    QLabel *label_6;
    QSpinBox *LabNumberOfSwabSpinBox;
    QPushButton *LabMoveZLumiButton;
    QPushButton *LabMoveXYLumiButton;
    QPushButton *LabMoveZMeasButton;
    QPushButton *LabMoveXYMeasButton;
    QPushButton *LabRemoteControlButton;
    QPushButton *LabLumiVerticalPosButton;
    QPushButton *LabLumiDiscardSwabButton;
    QPushButton *LabMoveZSwab2Button;
    QPushButton *LabMoveZSwabButton;
    QPushButton *LabMoveZUpButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1000);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1920, 950));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        tabWidget->setFont(font);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget_11 = new QWidget(tab);
        gridLayoutWidget_11->setObjectName(QString::fromUtf8("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(440, 10, 403, 128));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(3, 3, 3, 3);
        WifiConnectButton = new QPushButton(gridLayoutWidget_11);
        WifiConnectButton->setObjectName(QString::fromUtf8("WifiConnectButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(WifiConnectButton->sizePolicy().hasHeightForWidth());
        WifiConnectButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        WifiConnectButton->setFont(font1);

        gridLayout_11->addWidget(WifiConnectButton, 1, 0, 1, 1);

        WifiTimeoutSpinBox = new QSpinBox(gridLayoutWidget_11);
        WifiTimeoutSpinBox->setObjectName(QString::fromUtf8("WifiTimeoutSpinBox"));
        WifiTimeoutSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(WifiTimeoutSpinBox->sizePolicy().hasHeightForWidth());
        WifiTimeoutSpinBox->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        WifiTimeoutSpinBox->setFont(font2);
        WifiTimeoutSpinBox->setMinimum(30);
        WifiTimeoutSpinBox->setMaximum(2000);
        WifiTimeoutSpinBox->setSingleStep(50);
        WifiTimeoutSpinBox->setValue(30);

        gridLayout_11->addWidget(WifiTimeoutSpinBox, 0, 0, 1, 2);

        WifiDisconnectButton = new QPushButton(gridLayoutWidget_11);
        WifiDisconnectButton->setObjectName(QString::fromUtf8("WifiDisconnectButton"));
        WifiDisconnectButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(WifiDisconnectButton->sizePolicy().hasHeightForWidth());
        WifiDisconnectButton->setSizePolicy(sizePolicy1);
        WifiDisconnectButton->setFont(font1);

        gridLayout_11->addWidget(WifiDisconnectButton, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        WifiDriveFrameCHeckBox = new QCheckBox(gridLayoutWidget_11);
        WifiDriveFrameCHeckBox->setObjectName(QString::fromUtf8("WifiDriveFrameCHeckBox"));
        WifiDriveFrameCHeckBox->setChecked(false);

        verticalLayout_2->addWidget(WifiDriveFrameCHeckBox);

        WifiManipFrameCHeckBox = new QCheckBox(gridLayoutWidget_11);
        WifiManipFrameCHeckBox->setObjectName(QString::fromUtf8("WifiManipFrameCHeckBox"));
        WifiManipFrameCHeckBox->setChecked(false);

        verticalLayout_2->addWidget(WifiManipFrameCHeckBox);

        WifiLabFrameCHeckBox = new QCheckBox(gridLayoutWidget_11);
        WifiLabFrameCHeckBox->setObjectName(QString::fromUtf8("WifiLabFrameCHeckBox"));
        WifiLabFrameCHeckBox->setChecked(false);

        verticalLayout_2->addWidget(WifiLabFrameCHeckBox);


        gridLayout_11->addLayout(verticalLayout_2, 0, 2, 2, 1);

        gridLayoutWidget_12 = new QWidget(tab);
        gridLayoutWidget_12->setObjectName(QString::fromUtf8("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(0, 10, 422, 128));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(3, 3, 3, 3);
        comboBox = new QComboBox(gridLayoutWidget_12);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setFont(font2);

        gridLayout_12->addWidget(comboBox, 0, 0, 1, 1);

        ComPortCloseButton = new QPushButton(gridLayoutWidget_12);
        ComPortCloseButton->setObjectName(QString::fromUtf8("ComPortCloseButton"));
        ComPortCloseButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(ComPortCloseButton->sizePolicy().hasHeightForWidth());
        ComPortCloseButton->setSizePolicy(sizePolicy1);
        ComPortCloseButton->setFont(font1);

        gridLayout_12->addWidget(ComPortCloseButton, 1, 1, 1, 1);

        SerialTimeoutSpinBox = new QSpinBox(gridLayoutWidget_12);
        SerialTimeoutSpinBox->setObjectName(QString::fromUtf8("SerialTimeoutSpinBox"));
        SerialTimeoutSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(SerialTimeoutSpinBox->sizePolicy().hasHeightForWidth());
        SerialTimeoutSpinBox->setSizePolicy(sizePolicy1);
        SerialTimeoutSpinBox->setFont(font2);
        SerialTimeoutSpinBox->setMinimum(30);
        SerialTimeoutSpinBox->setMaximum(1000);
        SerialTimeoutSpinBox->setSingleStep(50);
        SerialTimeoutSpinBox->setValue(30);

        gridLayout_12->addWidget(SerialTimeoutSpinBox, 0, 1, 1, 1);

        ComPortOpenButton = new QPushButton(gridLayoutWidget_12);
        ComPortOpenButton->setObjectName(QString::fromUtf8("ComPortOpenButton"));
        sizePolicy1.setHeightForWidth(ComPortOpenButton->sizePolicy().hasHeightForWidth());
        ComPortOpenButton->setSizePolicy(sizePolicy1);
        ComPortOpenButton->setFont(font1);

        gridLayout_12->addWidget(ComPortOpenButton, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SerialDriveFrameCHeckBox = new QCheckBox(gridLayoutWidget_12);
        SerialDriveFrameCHeckBox->setObjectName(QString::fromUtf8("SerialDriveFrameCHeckBox"));
        SerialDriveFrameCHeckBox->setChecked(false);

        verticalLayout->addWidget(SerialDriveFrameCHeckBox);

        SerialManipFrameCHeckBox = new QCheckBox(gridLayoutWidget_12);
        SerialManipFrameCHeckBox->setObjectName(QString::fromUtf8("SerialManipFrameCHeckBox"));
        SerialManipFrameCHeckBox->setChecked(false);

        verticalLayout->addWidget(SerialManipFrameCHeckBox);

        SerialLabFrameCHeckBox = new QCheckBox(gridLayoutWidget_12);
        SerialLabFrameCHeckBox->setObjectName(QString::fromUtf8("SerialLabFrameCHeckBox"));
        SerialLabFrameCHeckBox->setChecked(false);

        verticalLayout->addWidget(SerialLabFrameCHeckBox);


        gridLayout_12->addLayout(verticalLayout, 0, 2, 2, 1);

        gridLayoutWidget_13 = new QWidget(tab);
        gridLayoutWidget_13->setObjectName(QString::fromUtf8("gridLayoutWidget_13"));
        gridLayoutWidget_13->setGeometry(QRect(440, 150, 435, 195));
        gridLayout_13 = new QGridLayout(gridLayoutWidget_13);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(3, 3, 3, 3);
        ManipTelemetryMotposEnableButton = new QPushButton(gridLayoutWidget_13);
        ManipTelemetryMotposEnableButton->setObjectName(QString::fromUtf8("ManipTelemetryMotposEnableButton"));
        sizePolicy1.setHeightForWidth(ManipTelemetryMotposEnableButton->sizePolicy().hasHeightForWidth());
        ManipTelemetryMotposEnableButton->setSizePolicy(sizePolicy1);
        ManipTelemetryMotposEnableButton->setFont(font2);

        gridLayout_13->addWidget(ManipTelemetryMotposEnableButton, 3, 1, 1, 1);

        ManipTelemetryMotposDisableButton = new QPushButton(gridLayoutWidget_13);
        ManipTelemetryMotposDisableButton->setObjectName(QString::fromUtf8("ManipTelemetryMotposDisableButton"));
        sizePolicy1.setHeightForWidth(ManipTelemetryMotposDisableButton->sizePolicy().hasHeightForWidth());
        ManipTelemetryMotposDisableButton->setSizePolicy(sizePolicy1);
        ManipTelemetryMotposDisableButton->setFont(font2);

        gridLayout_13->addWidget(ManipTelemetryMotposDisableButton, 3, 2, 1, 1);

        ManipTelemetryErrorsEnableButton = new QPushButton(gridLayoutWidget_13);
        ManipTelemetryErrorsEnableButton->setObjectName(QString::fromUtf8("ManipTelemetryErrorsEnableButton"));
        sizePolicy1.setHeightForWidth(ManipTelemetryErrorsEnableButton->sizePolicy().hasHeightForWidth());
        ManipTelemetryErrorsEnableButton->setSizePolicy(sizePolicy1);
        ManipTelemetryErrorsEnableButton->setFont(font2);

        gridLayout_13->addWidget(ManipTelemetryErrorsEnableButton, 2, 1, 1, 1);

        ManipTelemetryErrorsDisableButton = new QPushButton(gridLayoutWidget_13);
        ManipTelemetryErrorsDisableButton->setObjectName(QString::fromUtf8("ManipTelemetryErrorsDisableButton"));
        sizePolicy1.setHeightForWidth(ManipTelemetryErrorsDisableButton->sizePolicy().hasHeightForWidth());
        ManipTelemetryErrorsDisableButton->setSizePolicy(sizePolicy1);
        ManipTelemetryErrorsDisableButton->setFont(font2);

        gridLayout_13->addWidget(ManipTelemetryErrorsDisableButton, 2, 2, 1, 1);

        ManipTelemetryAllEnableButton = new QPushButton(gridLayoutWidget_13);
        ManipTelemetryAllEnableButton->setObjectName(QString::fromUtf8("ManipTelemetryAllEnableButton"));
        sizePolicy1.setHeightForWidth(ManipTelemetryAllEnableButton->sizePolicy().hasHeightForWidth());
        ManipTelemetryAllEnableButton->setSizePolicy(sizePolicy1);
        ManipTelemetryAllEnableButton->setFont(font2);

        gridLayout_13->addWidget(ManipTelemetryAllEnableButton, 0, 1, 1, 1);

        ManipTelemetryAllDisableButton = new QPushButton(gridLayoutWidget_13);
        ManipTelemetryAllDisableButton->setObjectName(QString::fromUtf8("ManipTelemetryAllDisableButton"));
        sizePolicy1.setHeightForWidth(ManipTelemetryAllDisableButton->sizePolicy().hasHeightForWidth());
        ManipTelemetryAllDisableButton->setSizePolicy(sizePolicy1);
        ManipTelemetryAllDisableButton->setFont(font2);

        gridLayout_13->addWidget(ManipTelemetryAllDisableButton, 0, 2, 1, 1);

        gridLayoutWidget_14 = new QWidget(tab);
        gridLayoutWidget_14->setObjectName(QString::fromUtf8("gridLayoutWidget_14"));
        gridLayoutWidget_14->setGeometry(QRect(0, 150, 421, 260));
        gridLayout_14 = new QGridLayout(gridLayoutWidget_14);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(3, 3, 3, 3);
        AutoTelemAllEnableButton = new QPushButton(gridLayoutWidget_14);
        AutoTelemAllEnableButton->setObjectName(QString::fromUtf8("AutoTelemAllEnableButton"));
        sizePolicy1.setHeightForWidth(AutoTelemAllEnableButton->sizePolicy().hasHeightForWidth());
        AutoTelemAllEnableButton->setSizePolicy(sizePolicy1);
        AutoTelemAllEnableButton->setFont(font2);

        gridLayout_14->addWidget(AutoTelemAllEnableButton, 0, 0, 1, 1);

        AutoTelemGpsEnableButton = new QPushButton(gridLayoutWidget_14);
        AutoTelemGpsEnableButton->setObjectName(QString::fromUtf8("AutoTelemGpsEnableButton"));
        sizePolicy1.setHeightForWidth(AutoTelemGpsEnableButton->sizePolicy().hasHeightForWidth());
        AutoTelemGpsEnableButton->setSizePolicy(sizePolicy1);
        AutoTelemGpsEnableButton->setFont(font2);

        gridLayout_14->addWidget(AutoTelemGpsEnableButton, 2, 0, 1, 1);

        AutoTelemAllEnableButton_2 = new QPushButton(gridLayoutWidget_14);
        AutoTelemAllEnableButton_2->setObjectName(QString::fromUtf8("AutoTelemAllEnableButton_2"));
        sizePolicy1.setHeightForWidth(AutoTelemAllEnableButton_2->sizePolicy().hasHeightForWidth());
        AutoTelemAllEnableButton_2->setSizePolicy(sizePolicy1);
        AutoTelemAllEnableButton_2->setFont(font2);

        gridLayout_14->addWidget(AutoTelemAllEnableButton_2, 0, 1, 1, 1);

        AutoTelemGpsDisableButton = new QPushButton(gridLayoutWidget_14);
        AutoTelemGpsDisableButton->setObjectName(QString::fromUtf8("AutoTelemGpsDisableButton"));
        sizePolicy1.setHeightForWidth(AutoTelemGpsDisableButton->sizePolicy().hasHeightForWidth());
        AutoTelemGpsDisableButton->setSizePolicy(sizePolicy1);
        AutoTelemGpsDisableButton->setFont(font2);

        gridLayout_14->addWidget(AutoTelemGpsDisableButton, 2, 1, 1, 1);

        AutoTelemBallDisableButton = new QPushButton(gridLayoutWidget_14);
        AutoTelemBallDisableButton->setObjectName(QString::fromUtf8("AutoTelemBallDisableButton"));
        sizePolicy1.setHeightForWidth(AutoTelemBallDisableButton->sizePolicy().hasHeightForWidth());
        AutoTelemBallDisableButton->setSizePolicy(sizePolicy1);
        AutoTelemBallDisableButton->setFont(font2);

        gridLayout_14->addWidget(AutoTelemBallDisableButton, 3, 1, 1, 1);

        AutoTelemBallEnableButton = new QPushButton(gridLayoutWidget_14);
        AutoTelemBallEnableButton->setObjectName(QString::fromUtf8("AutoTelemBallEnableButton"));
        sizePolicy1.setHeightForWidth(AutoTelemBallEnableButton->sizePolicy().hasHeightForWidth());
        AutoTelemBallEnableButton->setSizePolicy(sizePolicy1);
        AutoTelemBallEnableButton->setFont(font2);

        gridLayout_14->addWidget(AutoTelemBallEnableButton, 3, 0, 1, 1);

        AutoTelemErrorsEnableButton = new QPushButton(gridLayoutWidget_14);
        AutoTelemErrorsEnableButton->setObjectName(QString::fromUtf8("AutoTelemErrorsEnableButton"));
        sizePolicy1.setHeightForWidth(AutoTelemErrorsEnableButton->sizePolicy().hasHeightForWidth());
        AutoTelemErrorsEnableButton->setSizePolicy(sizePolicy1);
        AutoTelemErrorsEnableButton->setFont(font2);

        gridLayout_14->addWidget(AutoTelemErrorsEnableButton, 1, 0, 1, 1);

        AutoTelemErrorsEnableButton_2 = new QPushButton(gridLayoutWidget_14);
        AutoTelemErrorsEnableButton_2->setObjectName(QString::fromUtf8("AutoTelemErrorsEnableButton_2"));
        sizePolicy1.setHeightForWidth(AutoTelemErrorsEnableButton_2->sizePolicy().hasHeightForWidth());
        AutoTelemErrorsEnableButton_2->setSizePolicy(sizePolicy1);
        AutoTelemErrorsEnableButton_2->setFont(font2);

        gridLayout_14->addWidget(AutoTelemErrorsEnableButton_2, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        TabDrive = new QWidget();
        TabDrive->setObjectName(QString::fromUtf8("TabDrive"));
        gridLayoutWidget_8 = new QWidget(TabDrive);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(0, 370, 601, 221));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(3, 3, 3, 3);
        DrivePitchLineEdit = new QLineEdit(gridLayoutWidget_8);
        DrivePitchLineEdit->setObjectName(QString::fromUtf8("DrivePitchLineEdit"));
        sizePolicy1.setHeightForWidth(DrivePitchLineEdit->sizePolicy().hasHeightForWidth());
        DrivePitchLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(DrivePitchLineEdit, 2, 0, 1, 1);

        DriveLonLineEdit = new QLineEdit(gridLayoutWidget_8);
        DriveLonLineEdit->setObjectName(QString::fromUtf8("DriveLonLineEdit"));
        sizePolicy1.setHeightForWidth(DriveLonLineEdit->sizePolicy().hasHeightForWidth());
        DriveLonLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(DriveLonLineEdit, 3, 0, 1, 1);

        DriveRollLineEdit = new QLineEdit(gridLayoutWidget_8);
        DriveRollLineEdit->setObjectName(QString::fromUtf8("DriveRollLineEdit"));
        sizePolicy1.setHeightForWidth(DriveRollLineEdit->sizePolicy().hasHeightForWidth());
        DriveRollLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(DriveRollLineEdit, 2, 1, 1, 1);

        DriveYawLineEdit = new QLineEdit(gridLayoutWidget_8);
        DriveYawLineEdit->setObjectName(QString::fromUtf8("DriveYawLineEdit"));
        sizePolicy1.setHeightForWidth(DriveYawLineEdit->sizePolicy().hasHeightForWidth());
        DriveYawLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(DriveYawLineEdit, 1, 0, 1, 2);

        DriveLatLineEdit = new QLineEdit(gridLayoutWidget_8);
        DriveLatLineEdit->setObjectName(QString::fromUtf8("DriveLatLineEdit"));
        sizePolicy1.setHeightForWidth(DriveLatLineEdit->sizePolicy().hasHeightForWidth());
        DriveLatLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(DriveLatLineEdit, 3, 1, 1, 1);

        DriveCmdLineEdit = new QLineEdit(gridLayoutWidget_8);
        DriveCmdLineEdit->setObjectName(QString::fromUtf8("DriveCmdLineEdit"));
        sizePolicy1.setHeightForWidth(DriveCmdLineEdit->sizePolicy().hasHeightForWidth());
        DriveCmdLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_9->addWidget(DriveCmdLineEdit, 0, 0, 1, 2);

        gridLayoutWidget_9 = new QWidget(TabDrive);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(610, 10, 961, 349));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(3, 3, 3, 3);
        Cam2IncButton = new QPushButton(gridLayoutWidget_9);
        Cam2IncButton->setObjectName(QString::fromUtf8("Cam2IncButton"));
        sizePolicy1.setHeightForWidth(Cam2IncButton->sizePolicy().hasHeightForWidth());
        Cam2IncButton->setSizePolicy(sizePolicy1);
        Cam2IncButton->setFont(font2);

        gridLayout_8->addWidget(Cam2IncButton, 2, 2, 1, 1);

        SelectWifi = new QPushButton(gridLayoutWidget_9);
        SelectWifi->setObjectName(QString::fromUtf8("SelectWifi"));
        sizePolicy1.setHeightForWidth(SelectWifi->sizePolicy().hasHeightForWidth());
        SelectWifi->setSizePolicy(sizePolicy1);
        SelectWifi->setFont(font2);

        gridLayout_8->addWidget(SelectWifi, 0, 2, 1, 2);

        Cam1DecButton = new QPushButton(gridLayoutWidget_9);
        Cam1DecButton->setObjectName(QString::fromUtf8("Cam1DecButton"));
        sizePolicy1.setHeightForWidth(Cam1DecButton->sizePolicy().hasHeightForWidth());
        Cam1DecButton->setSizePolicy(sizePolicy1);
        Cam1DecButton->setFont(font2);

        gridLayout_8->addWidget(Cam1DecButton, 2, 1, 1, 1);

        Cam2DecButton = new QPushButton(gridLayoutWidget_9);
        Cam2DecButton->setObjectName(QString::fromUtf8("Cam2DecButton"));
        sizePolicy1.setHeightForWidth(Cam2DecButton->sizePolicy().hasHeightForWidth());
        Cam2DecButton->setSizePolicy(sizePolicy1);
        Cam2DecButton->setFont(font2);

        gridLayout_8->addWidget(Cam2DecButton, 2, 3, 1, 1);

        AutoSetYawOffsetButton = new QPushButton(gridLayoutWidget_9);
        AutoSetYawOffsetButton->setObjectName(QString::fromUtf8("AutoSetYawOffsetButton"));
        sizePolicy1.setHeightForWidth(AutoSetYawOffsetButton->sizePolicy().hasHeightForWidth());
        AutoSetYawOffsetButton->setSizePolicy(sizePolicy1);
        AutoSetYawOffsetButton->setFont(font2);

        gridLayout_8->addWidget(AutoSetYawOffsetButton, 4, 1, 1, 1);

        DriveMot1Error = new QPushButton(gridLayoutWidget_9);
        DriveMot1Error->setObjectName(QString::fromUtf8("DriveMot1Error"));
        DriveMot1Error->setEnabled(false);
        sizePolicy1.setHeightForWidth(DriveMot1Error->sizePolicy().hasHeightForWidth());
        DriveMot1Error->setSizePolicy(sizePolicy1);
        DriveMot1Error->setFont(font2);

        gridLayout_8->addWidget(DriveMot1Error, 5, 1, 1, 1);

        DriveSoftwareEmergencyLed = new QPushButton(gridLayoutWidget_9);
        DriveSoftwareEmergencyLed->setObjectName(QString::fromUtf8("DriveSoftwareEmergencyLed"));
        DriveSoftwareEmergencyLed->setEnabled(true);
        sizePolicy1.setHeightForWidth(DriveSoftwareEmergencyLed->sizePolicy().hasHeightForWidth());
        DriveSoftwareEmergencyLed->setSizePolicy(sizePolicy1);
        DriveSoftwareEmergencyLed->setFont(font2);

        gridLayout_8->addWidget(DriveSoftwareEmergencyLed, 6, 2, 1, 2);

        AutoContinueButton = new QPushButton(gridLayoutWidget_9);
        AutoContinueButton->setObjectName(QString::fromUtf8("AutoContinueButton"));
        sizePolicy1.setHeightForWidth(AutoContinueButton->sizePolicy().hasHeightForWidth());
        AutoContinueButton->setSizePolicy(sizePolicy1);
        AutoContinueButton->setFont(font2);

        gridLayout_8->addWidget(AutoContinueButton, 3, 1, 1, 1);

        AutoNextButton = new QPushButton(gridLayoutWidget_9);
        AutoNextButton->setObjectName(QString::fromUtf8("AutoNextButton"));
        sizePolicy1.setHeightForWidth(AutoNextButton->sizePolicy().hasHeightForWidth());
        AutoNextButton->setSizePolicy(sizePolicy1);
        AutoNextButton->setFont(font2);

        gridLayout_8->addWidget(AutoNextButton, 3, 2, 1, 1);

        AutoPauseButton = new QPushButton(gridLayoutWidget_9);
        AutoPauseButton->setObjectName(QString::fromUtf8("AutoPauseButton"));
        sizePolicy1.setHeightForWidth(AutoPauseButton->sizePolicy().hasHeightForWidth());
        AutoPauseButton->setSizePolicy(sizePolicy1);
        AutoPauseButton->setFont(font2);

        gridLayout_8->addWidget(AutoPauseButton, 3, 0, 1, 1);

        SelectSatel = new QPushButton(gridLayoutWidget_9);
        SelectSatel->setObjectName(QString::fromUtf8("SelectSatel"));
        sizePolicy1.setHeightForWidth(SelectSatel->sizePolicy().hasHeightForWidth());
        SelectSatel->setSizePolicy(sizePolicy1);
        SelectSatel->setFont(font2);

        gridLayout_8->addWidget(SelectSatel, 0, 0, 1, 2);

        Cam1IncButton = new QPushButton(gridLayoutWidget_9);
        Cam1IncButton->setObjectName(QString::fromUtf8("Cam1IncButton"));
        sizePolicy1.setHeightForWidth(Cam1IncButton->sizePolicy().hasHeightForWidth());
        Cam1IncButton->setSizePolicy(sizePolicy1);
        Cam1IncButton->setFont(font2);

        gridLayout_8->addWidget(Cam1IncButton, 2, 0, 1, 1);

        DriveMot3Error = new QPushButton(gridLayoutWidget_9);
        DriveMot3Error->setObjectName(QString::fromUtf8("DriveMot3Error"));
        DriveMot3Error->setEnabled(false);
        sizePolicy1.setHeightForWidth(DriveMot3Error->sizePolicy().hasHeightForWidth());
        DriveMot3Error->setSizePolicy(sizePolicy1);
        DriveMot3Error->setFont(font2);

        gridLayout_8->addWidget(DriveMot3Error, 5, 3, 1, 1);

        DriveMot2Error = new QPushButton(gridLayoutWidget_9);
        DriveMot2Error->setObjectName(QString::fromUtf8("DriveMot2Error"));
        DriveMot2Error->setEnabled(false);
        sizePolicy1.setHeightForWidth(DriveMot2Error->sizePolicy().hasHeightForWidth());
        DriveMot2Error->setSizePolicy(sizePolicy1);
        DriveMot2Error->setFont(font2);

        gridLayout_8->addWidget(DriveMot2Error, 5, 2, 1, 1);

        AutoSendPointsButton = new QPushButton(gridLayoutWidget_9);
        AutoSendPointsButton->setObjectName(QString::fromUtf8("AutoSendPointsButton"));
        sizePolicy1.setHeightForWidth(AutoSendPointsButton->sizePolicy().hasHeightForWidth());
        AutoSendPointsButton->setSizePolicy(sizePolicy1);
        AutoSendPointsButton->setFont(font2);

        gridLayout_8->addWidget(AutoSendPointsButton, 3, 3, 1, 1);

        DriveHardwareEmergencyLed = new QPushButton(gridLayoutWidget_9);
        DriveHardwareEmergencyLed->setObjectName(QString::fromUtf8("DriveHardwareEmergencyLed"));
        DriveHardwareEmergencyLed->setEnabled(false);
        sizePolicy1.setHeightForWidth(DriveHardwareEmergencyLed->sizePolicy().hasHeightForWidth());
        DriveHardwareEmergencyLed->setSizePolicy(sizePolicy1);
        DriveHardwareEmergencyLed->setFont(font2);

        gridLayout_8->addWidget(DriveHardwareEmergencyLed, 6, 0, 1, 2);

        DriveMot0Error = new QPushButton(gridLayoutWidget_9);
        DriveMot0Error->setObjectName(QString::fromUtf8("DriveMot0Error"));
        DriveMot0Error->setEnabled(false);
        sizePolicy1.setHeightForWidth(DriveMot0Error->sizePolicy().hasHeightForWidth());
        DriveMot0Error->setSizePolicy(sizePolicy1);
        DriveMot0Error->setFont(font2);

        gridLayout_8->addWidget(DriveMot0Error, 5, 0, 1, 1);

        AutoClearYawOffsetButton = new QPushButton(gridLayoutWidget_9);
        AutoClearYawOffsetButton->setObjectName(QString::fromUtf8("AutoClearYawOffsetButton"));
        sizePolicy1.setHeightForWidth(AutoClearYawOffsetButton->sizePolicy().hasHeightForWidth());
        AutoClearYawOffsetButton->setSizePolicy(sizePolicy1);
        AutoClearYawOffsetButton->setFont(font2);

        gridLayout_8->addWidget(AutoClearYawOffsetButton, 4, 0, 1, 1);

        SelectAutoNaviTypeErcRel = new QPushButton(gridLayoutWidget_9);
        SelectAutoNaviTypeErcRel->setObjectName(QString::fromUtf8("SelectAutoNaviTypeErcRel"));
        sizePolicy1.setHeightForWidth(SelectAutoNaviTypeErcRel->sizePolicy().hasHeightForWidth());
        SelectAutoNaviTypeErcRel->setSizePolicy(sizePolicy1);
        SelectAutoNaviTypeErcRel->setFont(font2);

        gridLayout_8->addWidget(SelectAutoNaviTypeErcRel, 1, 0, 1, 1);

        SelectAutoNaviTypeErcAbs = new QPushButton(gridLayoutWidget_9);
        SelectAutoNaviTypeErcAbs->setObjectName(QString::fromUtf8("SelectAutoNaviTypeErcAbs"));
        sizePolicy1.setHeightForWidth(SelectAutoNaviTypeErcAbs->sizePolicy().hasHeightForWidth());
        SelectAutoNaviTypeErcAbs->setSizePolicy(sizePolicy1);
        SelectAutoNaviTypeErcAbs->setFont(font2);

        gridLayout_8->addWidget(SelectAutoNaviTypeErcAbs, 1, 1, 1, 1);

        SelectAutoNaviTypeUrcRel = new QPushButton(gridLayoutWidget_9);
        SelectAutoNaviTypeUrcRel->setObjectName(QString::fromUtf8("SelectAutoNaviTypeUrcRel"));
        sizePolicy1.setHeightForWidth(SelectAutoNaviTypeUrcRel->sizePolicy().hasHeightForWidth());
        SelectAutoNaviTypeUrcRel->setSizePolicy(sizePolicy1);
        SelectAutoNaviTypeUrcRel->setFont(font2);

        gridLayout_8->addWidget(SelectAutoNaviTypeUrcRel, 1, 2, 1, 1);

        SelectAutoNaviTypeUrcAbs = new QPushButton(gridLayoutWidget_9);
        SelectAutoNaviTypeUrcAbs->setObjectName(QString::fromUtf8("SelectAutoNaviTypeUrcAbs"));
        sizePolicy1.setHeightForWidth(SelectAutoNaviTypeUrcAbs->sizePolicy().hasHeightForWidth());
        SelectAutoNaviTypeUrcAbs->setSizePolicy(sizePolicy1);
        SelectAutoNaviTypeUrcAbs->setFont(font2);

        gridLayout_8->addWidget(SelectAutoNaviTypeUrcAbs, 1, 3, 1, 1);

        FrontValueSlider = new QSlider(TabDrive);
        FrontValueSlider->setObjectName(QString::fromUtf8("FrontValueSlider"));
        FrontValueSlider->setGeometry(QRect(10, 40, 71, 320));
        sizePolicy1.setHeightForWidth(FrontValueSlider->sizePolicy().hasHeightForWidth());
        FrontValueSlider->setSizePolicy(sizePolicy1);
        FrontValueSlider->setMinimum(-100);
        FrontValueSlider->setMaximum(100);
        FrontValueSlider->setOrientation(Qt::Vertical);
        FrontValueSlider->setTickPosition(QSlider::TicksBothSides);
        DirValueSlider = new QSlider(TabDrive);
        DirValueSlider->setObjectName(QString::fromUtf8("DirValueSlider"));
        DirValueSlider->setGeometry(QRect(100, 40, 81, 320));
        sizePolicy1.setHeightForWidth(DirValueSlider->sizePolicy().hasHeightForWidth());
        DirValueSlider->setSizePolicy(sizePolicy1);
        DirValueSlider->setMinimum(-100);
        DirValueSlider->setMaximum(100);
        DirValueSlider->setOrientation(Qt::Vertical);
        DirValueSlider->setTickPosition(QSlider::TicksBothSides);
        Serwo0_Slider = new QSlider(TabDrive);
        Serwo0_Slider->setObjectName(QString::fromUtf8("Serwo0_Slider"));
        Serwo0_Slider->setGeometry(QRect(190, 40, 81, 320));
        sizePolicy1.setHeightForWidth(Serwo0_Slider->sizePolicy().hasHeightForWidth());
        Serwo0_Slider->setSizePolicy(sizePolicy1);
        Serwo0_Slider->setMinimum(-100);
        Serwo0_Slider->setMaximum(100);
        Serwo0_Slider->setOrientation(Qt::Vertical);
        Serwo0_Slider->setTickPosition(QSlider::TicksBothSides);
        Serwo1_Slider = new QSlider(TabDrive);
        Serwo1_Slider->setObjectName(QString::fromUtf8("Serwo1_Slider"));
        Serwo1_Slider->setGeometry(QRect(280, 40, 81, 320));
        sizePolicy1.setHeightForWidth(Serwo1_Slider->sizePolicy().hasHeightForWidth());
        Serwo1_Slider->setSizePolicy(sizePolicy1);
        Serwo1_Slider->setMinimum(-100);
        Serwo1_Slider->setMaximum(100);
        Serwo1_Slider->setOrientation(Qt::Vertical);
        Serwo1_Slider->setTickPosition(QSlider::TicksBothSides);
        Serwo2_Slider = new QSlider(TabDrive);
        Serwo2_Slider->setObjectName(QString::fromUtf8("Serwo2_Slider"));
        Serwo2_Slider->setGeometry(QRect(370, 40, 81, 320));
        sizePolicy1.setHeightForWidth(Serwo2_Slider->sizePolicy().hasHeightForWidth());
        Serwo2_Slider->setSizePolicy(sizePolicy1);
        Serwo2_Slider->setMinimum(-100);
        Serwo2_Slider->setMaximum(100);
        Serwo2_Slider->setOrientation(Qt::Vertical);
        Serwo2_Slider->setTickPosition(QSlider::TicksBothSides);
        Serwo3_Slider = new QSlider(TabDrive);
        Serwo3_Slider->setObjectName(QString::fromUtf8("Serwo3_Slider"));
        Serwo3_Slider->setGeometry(QRect(460, 40, 81, 320));
        sizePolicy1.setHeightForWidth(Serwo3_Slider->sizePolicy().hasHeightForWidth());
        Serwo3_Slider->setSizePolicy(sizePolicy1);
        Serwo3_Slider->setMinimum(-100);
        Serwo3_Slider->setMaximum(100);
        Serwo3_Slider->setOrientation(Qt::Vertical);
        Serwo3_Slider->setTickPosition(QSlider::TicksBothSides);
        FVLineEdit = new QLineEdit(TabDrive);
        FVLineEdit->setObjectName(QString::fromUtf8("FVLineEdit"));
        FVLineEdit->setGeometry(QRect(10, 10, 81, 29));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(FVLineEdit->sizePolicy().hasHeightForWidth());
        FVLineEdit->setSizePolicy(sizePolicy3);
        DVLineEdit = new QLineEdit(TabDrive);
        DVLineEdit->setObjectName(QString::fromUtf8("DVLineEdit"));
        DVLineEdit->setGeometry(QRect(100, 10, 81, 29));
        sizePolicy3.setHeightForWidth(DVLineEdit->sizePolicy().hasHeightForWidth());
        DVLineEdit->setSizePolicy(sizePolicy3);
        S0LineEdit = new QLineEdit(TabDrive);
        S0LineEdit->setObjectName(QString::fromUtf8("S0LineEdit"));
        S0LineEdit->setGeometry(QRect(190, 10, 81, 29));
        sizePolicy3.setHeightForWidth(S0LineEdit->sizePolicy().hasHeightForWidth());
        S0LineEdit->setSizePolicy(sizePolicy3);
        S1LineEdit = new QLineEdit(TabDrive);
        S1LineEdit->setObjectName(QString::fromUtf8("S1LineEdit"));
        S1LineEdit->setGeometry(QRect(280, 10, 81, 29));
        sizePolicy3.setHeightForWidth(S1LineEdit->sizePolicy().hasHeightForWidth());
        S1LineEdit->setSizePolicy(sizePolicy3);
        S2LineEdit = new QLineEdit(TabDrive);
        S2LineEdit->setObjectName(QString::fromUtf8("S2LineEdit"));
        S2LineEdit->setGeometry(QRect(370, 10, 81, 29));
        sizePolicy3.setHeightForWidth(S2LineEdit->sizePolicy().hasHeightForWidth());
        S2LineEdit->setSizePolicy(sizePolicy3);
        S3LineEdit = new QLineEdit(TabDrive);
        S3LineEdit->setObjectName(QString::fromUtf8("S3LineEdit"));
        S3LineEdit->setGeometry(QRect(460, 10, 81, 29));
        sizePolicy3.setHeightForWidth(S3LineEdit->sizePolicy().hasHeightForWidth());
        S3LineEdit->setSizePolicy(sizePolicy3);
        gridLayoutWidget_16 = new QWidget(TabDrive);
        gridLayoutWidget_16->setObjectName(QString::fromUtf8("gridLayoutWidget_16"));
        gridLayoutWidget_16->setGeometry(QRect(610, 370, 961, 491));
        gridLayout_23 = new QGridLayout(gridLayoutWidget_16);
        gridLayout_23->setSpacing(10);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(5, 5, 5, 5);
        RoverPosLogTextEdit = new QTextEdit(gridLayoutWidget_16);
        RoverPosLogTextEdit->setObjectName(QString::fromUtf8("RoverPosLogTextEdit"));

        gridLayout_23->addWidget(RoverPosLogTextEdit, 1, 0, 1, 3);

        RoverPosLogStop = new QPushButton(gridLayoutWidget_16);
        RoverPosLogStop->setObjectName(QString::fromUtf8("RoverPosLogStop"));
        sizePolicy.setHeightForWidth(RoverPosLogStop->sizePolicy().hasHeightForWidth());
        RoverPosLogStop->setSizePolicy(sizePolicy);
        RoverPosLogStop->setFont(font2);

        gridLayout_23->addWidget(RoverPosLogStop, 0, 2, 1, 1);

        RoverPosLogStart = new QPushButton(gridLayoutWidget_16);
        RoverPosLogStart->setObjectName(QString::fromUtf8("RoverPosLogStart"));
        sizePolicy.setHeightForWidth(RoverPosLogStart->sizePolicy().hasHeightForWidth());
        RoverPosLogStart->setSizePolicy(sizePolicy);
        RoverPosLogStart->setFont(font2);

        gridLayout_23->addWidget(RoverPosLogStart, 0, 0, 1, 1);

        RoverPosClearTextBox = new QPushButton(gridLayoutWidget_16);
        RoverPosClearTextBox->setObjectName(QString::fromUtf8("RoverPosClearTextBox"));
        sizePolicy.setHeightForWidth(RoverPosClearTextBox->sizePolicy().hasHeightForWidth());
        RoverPosClearTextBox->setSizePolicy(sizePolicy);
        RoverPosClearTextBox->setFont(font2);

        gridLayout_23->addWidget(RoverPosClearTextBox, 0, 1, 1, 1);

        tabWidget->addTab(TabDrive, QString());
        TabManip = new QWidget();
        TabManip->setObjectName(QString::fromUtf8("TabManip"));
        horizontalLayoutWidget = new QWidget(TabManip);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 60, 891, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ManipSpeed0LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed0LineEdit->setObjectName(QString::fromUtf8("ManipSpeed0LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed0LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed0LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed0LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed0LineEdit);

        ManipSpeed1LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed1LineEdit->setObjectName(QString::fromUtf8("ManipSpeed1LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed1LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed1LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed1LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed1LineEdit);

        ManipSpeed2LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed2LineEdit->setObjectName(QString::fromUtf8("ManipSpeed2LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed2LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed2LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed2LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed2LineEdit);

        ManipSpeed3LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed3LineEdit->setObjectName(QString::fromUtf8("ManipSpeed3LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed3LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed3LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed3LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed3LineEdit);

        ManipSpeed4LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed4LineEdit->setObjectName(QString::fromUtf8("ManipSpeed4LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed4LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed4LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed4LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed4LineEdit);

        ManipSpeed5LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed5LineEdit->setObjectName(QString::fromUtf8("ManipSpeed5LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed5LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed5LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed5LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed5LineEdit);

        ManipSpeed6LineEdit = new QLineEdit(horizontalLayoutWidget);
        ManipSpeed6LineEdit->setObjectName(QString::fromUtf8("ManipSpeed6LineEdit"));
        sizePolicy.setHeightForWidth(ManipSpeed6LineEdit->sizePolicy().hasHeightForWidth());
        ManipSpeed6LineEdit->setSizePolicy(sizePolicy);
        ManipSpeed6LineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ManipSpeed6LineEdit);

        horizontalLayoutWidget_2 = new QWidget(TabManip);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 110, 891, 341));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ManipSpeed0Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed0Slider->setObjectName(QString::fromUtf8("ManipSpeed0Slider"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ManipSpeed0Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed0Slider->setSizePolicy(sizePolicy4);
        ManipSpeed0Slider->setMinimum(-100);
        ManipSpeed0Slider->setMaximum(100);
        ManipSpeed0Slider->setOrientation(Qt::Vertical);
        ManipSpeed0Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed0Slider);

        ManipSpeed1Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed1Slider->setObjectName(QString::fromUtf8("ManipSpeed1Slider"));
        sizePolicy4.setHeightForWidth(ManipSpeed1Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed1Slider->setSizePolicy(sizePolicy4);
        ManipSpeed1Slider->setMinimum(-100);
        ManipSpeed1Slider->setMaximum(100);
        ManipSpeed1Slider->setOrientation(Qt::Vertical);
        ManipSpeed1Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed1Slider);

        ManipSpeed2Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed2Slider->setObjectName(QString::fromUtf8("ManipSpeed2Slider"));
        sizePolicy4.setHeightForWidth(ManipSpeed2Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed2Slider->setSizePolicy(sizePolicy4);
        ManipSpeed2Slider->setMinimum(-100);
        ManipSpeed2Slider->setMaximum(100);
        ManipSpeed2Slider->setOrientation(Qt::Vertical);
        ManipSpeed2Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed2Slider);

        ManipSpeed3Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed3Slider->setObjectName(QString::fromUtf8("ManipSpeed3Slider"));
        sizePolicy4.setHeightForWidth(ManipSpeed3Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed3Slider->setSizePolicy(sizePolicy4);
        ManipSpeed3Slider->setMinimum(-100);
        ManipSpeed3Slider->setMaximum(100);
        ManipSpeed3Slider->setOrientation(Qt::Vertical);
        ManipSpeed3Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed3Slider);

        ManipSpeed4Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed4Slider->setObjectName(QString::fromUtf8("ManipSpeed4Slider"));
        sizePolicy4.setHeightForWidth(ManipSpeed4Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed4Slider->setSizePolicy(sizePolicy4);
        ManipSpeed4Slider->setMinimum(-100);
        ManipSpeed4Slider->setMaximum(100);
        ManipSpeed4Slider->setOrientation(Qt::Vertical);
        ManipSpeed4Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed4Slider);

        ManipSpeed5Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed5Slider->setObjectName(QString::fromUtf8("ManipSpeed5Slider"));
        sizePolicy4.setHeightForWidth(ManipSpeed5Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed5Slider->setSizePolicy(sizePolicy4);
        ManipSpeed5Slider->setMinimum(-100);
        ManipSpeed5Slider->setMaximum(100);
        ManipSpeed5Slider->setOrientation(Qt::Vertical);
        ManipSpeed5Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed5Slider);

        ManipSpeed6Slider = new QSlider(horizontalLayoutWidget_2);
        ManipSpeed6Slider->setObjectName(QString::fromUtf8("ManipSpeed6Slider"));
        sizePolicy4.setHeightForWidth(ManipSpeed6Slider->sizePolicy().hasHeightForWidth());
        ManipSpeed6Slider->setSizePolicy(sizePolicy4);
        ManipSpeed6Slider->setMinimum(-100);
        ManipSpeed6Slider->setMaximum(100);
        ManipSpeed6Slider->setOrientation(Qt::Vertical);
        ManipSpeed6Slider->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_2->addWidget(ManipSpeed6Slider);

        gridLayoutWidget = new QWidget(TabManip);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(910, 120, 991, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        ManipSeq1Button = new QPushButton(gridLayoutWidget);
        ManipSeq1Button->setObjectName(QString::fromUtf8("ManipSeq1Button"));
        sizePolicy1.setHeightForWidth(ManipSeq1Button->sizePolicy().hasHeightForWidth());
        ManipSeq1Button->setSizePolicy(sizePolicy1);
        ManipSeq1Button->setFont(font1);

        gridLayout->addWidget(ManipSeq1Button, 1, 1, 1, 1);

        ManipSeq10Button = new QPushButton(gridLayoutWidget);
        ManipSeq10Button->setObjectName(QString::fromUtf8("ManipSeq10Button"));
        sizePolicy1.setHeightForWidth(ManipSeq10Button->sizePolicy().hasHeightForWidth());
        ManipSeq10Button->setSizePolicy(sizePolicy1);
        ManipSeq10Button->setFont(font1);

        gridLayout->addWidget(ManipSeq10Button, 3, 2, 1, 1);

        ManipSeq11Button = new QPushButton(gridLayoutWidget);
        ManipSeq11Button->setObjectName(QString::fromUtf8("ManipSeq11Button"));
        sizePolicy1.setHeightForWidth(ManipSeq11Button->sizePolicy().hasHeightForWidth());
        ManipSeq11Button->setSizePolicy(sizePolicy1);
        ManipSeq11Button->setFont(font1);

        gridLayout->addWidget(ManipSeq11Button, 3, 3, 1, 1);

        ManipSeq2Button = new QPushButton(gridLayoutWidget);
        ManipSeq2Button->setObjectName(QString::fromUtf8("ManipSeq2Button"));
        sizePolicy1.setHeightForWidth(ManipSeq2Button->sizePolicy().hasHeightForWidth());
        ManipSeq2Button->setSizePolicy(sizePolicy1);
        ManipSeq2Button->setFont(font1);

        gridLayout->addWidget(ManipSeq2Button, 1, 2, 1, 1);

        ManipSeq6Button = new QPushButton(gridLayoutWidget);
        ManipSeq6Button->setObjectName(QString::fromUtf8("ManipSeq6Button"));
        sizePolicy1.setHeightForWidth(ManipSeq6Button->sizePolicy().hasHeightForWidth());
        ManipSeq6Button->setSizePolicy(sizePolicy1);
        ManipSeq6Button->setFont(font1);

        gridLayout->addWidget(ManipSeq6Button, 2, 2, 1, 1);

        ManipSeq0Button = new QPushButton(gridLayoutWidget);
        ManipSeq0Button->setObjectName(QString::fromUtf8("ManipSeq0Button"));
        sizePolicy1.setHeightForWidth(ManipSeq0Button->sizePolicy().hasHeightForWidth());
        ManipSeq0Button->setSizePolicy(sizePolicy1);
        ManipSeq0Button->setFont(font1);

        gridLayout->addWidget(ManipSeq0Button, 1, 0, 1, 1);

        ManipLaserOnButton = new QPushButton(gridLayoutWidget);
        ManipLaserOnButton->setObjectName(QString::fromUtf8("ManipLaserOnButton"));
        sizePolicy1.setHeightForWidth(ManipLaserOnButton->sizePolicy().hasHeightForWidth());
        ManipLaserOnButton->setSizePolicy(sizePolicy1);
        ManipLaserOnButton->setFont(font1);

        gridLayout->addWidget(ManipLaserOnButton, 0, 0, 1, 1);

        ManipSeq3Button = new QPushButton(gridLayoutWidget);
        ManipSeq3Button->setObjectName(QString::fromUtf8("ManipSeq3Button"));
        sizePolicy1.setHeightForWidth(ManipSeq3Button->sizePolicy().hasHeightForWidth());
        ManipSeq3Button->setSizePolicy(sizePolicy1);
        ManipSeq3Button->setFont(font1);

        gridLayout->addWidget(ManipSeq3Button, 1, 3, 1, 1);

        ManipSolenoidOffButton = new QPushButton(gridLayoutWidget);
        ManipSolenoidOffButton->setObjectName(QString::fromUtf8("ManipSolenoidOffButton"));
        sizePolicy1.setHeightForWidth(ManipSolenoidOffButton->sizePolicy().hasHeightForWidth());
        ManipSolenoidOffButton->setSizePolicy(sizePolicy1);
        ManipSolenoidOffButton->setFont(font1);

        gridLayout->addWidget(ManipSolenoidOffButton, 0, 3, 1, 1);

        ManipSeq4Button = new QPushButton(gridLayoutWidget);
        ManipSeq4Button->setObjectName(QString::fromUtf8("ManipSeq4Button"));
        sizePolicy1.setHeightForWidth(ManipSeq4Button->sizePolicy().hasHeightForWidth());
        ManipSeq4Button->setSizePolicy(sizePolicy1);
        ManipSeq4Button->setFont(font1);

        gridLayout->addWidget(ManipSeq4Button, 2, 0, 1, 1);

        ManipSeq7Button = new QPushButton(gridLayoutWidget);
        ManipSeq7Button->setObjectName(QString::fromUtf8("ManipSeq7Button"));
        sizePolicy1.setHeightForWidth(ManipSeq7Button->sizePolicy().hasHeightForWidth());
        ManipSeq7Button->setSizePolicy(sizePolicy1);
        ManipSeq7Button->setFont(font1);

        gridLayout->addWidget(ManipSeq7Button, 2, 3, 1, 1);

        ManipLaserOffButton = new QPushButton(gridLayoutWidget);
        ManipLaserOffButton->setObjectName(QString::fromUtf8("ManipLaserOffButton"));
        sizePolicy1.setHeightForWidth(ManipLaserOffButton->sizePolicy().hasHeightForWidth());
        ManipLaserOffButton->setSizePolicy(sizePolicy1);
        ManipLaserOffButton->setFont(font1);

        gridLayout->addWidget(ManipLaserOffButton, 0, 1, 1, 1);

        ManipSeq8Button = new QPushButton(gridLayoutWidget);
        ManipSeq8Button->setObjectName(QString::fromUtf8("ManipSeq8Button"));
        sizePolicy1.setHeightForWidth(ManipSeq8Button->sizePolicy().hasHeightForWidth());
        ManipSeq8Button->setSizePolicy(sizePolicy1);
        ManipSeq8Button->setFont(font1);

        gridLayout->addWidget(ManipSeq8Button, 3, 0, 1, 1);

        ManipSeq9Button = new QPushButton(gridLayoutWidget);
        ManipSeq9Button->setObjectName(QString::fromUtf8("ManipSeq9Button"));
        sizePolicy1.setHeightForWidth(ManipSeq9Button->sizePolicy().hasHeightForWidth());
        ManipSeq9Button->setSizePolicy(sizePolicy1);
        ManipSeq9Button->setFont(font1);

        gridLayout->addWidget(ManipSeq9Button, 3, 1, 1, 1);

        ManipSolenoidOnButton = new QPushButton(gridLayoutWidget);
        ManipSolenoidOnButton->setObjectName(QString::fromUtf8("ManipSolenoidOnButton"));
        sizePolicy1.setHeightForWidth(ManipSolenoidOnButton->sizePolicy().hasHeightForWidth());
        ManipSolenoidOnButton->setSizePolicy(sizePolicy1);
        ManipSolenoidOnButton->setFont(font1);

        gridLayout->addWidget(ManipSolenoidOnButton, 0, 2, 1, 1);

        ManipSeq5Button = new QPushButton(gridLayoutWidget);
        ManipSeq5Button->setObjectName(QString::fromUtf8("ManipSeq5Button"));
        sizePolicy1.setHeightForWidth(ManipSeq5Button->sizePolicy().hasHeightForWidth());
        ManipSeq5Button->setSizePolicy(sizePolicy1);
        ManipSeq5Button->setFont(font1);

        gridLayout->addWidget(ManipSeq5Button, 2, 1, 1, 1);

        ManipSeq12Button = new QPushButton(gridLayoutWidget);
        ManipSeq12Button->setObjectName(QString::fromUtf8("ManipSeq12Button"));
        sizePolicy1.setHeightForWidth(ManipSeq12Button->sizePolicy().hasHeightForWidth());
        ManipSeq12Button->setSizePolicy(sizePolicy1);
        ManipSeq12Button->setFont(font1);

        gridLayout->addWidget(ManipSeq12Button, 4, 0, 1, 1);

        ManipSeq13Button = new QPushButton(gridLayoutWidget);
        ManipSeq13Button->setObjectName(QString::fromUtf8("ManipSeq13Button"));
        sizePolicy1.setHeightForWidth(ManipSeq13Button->sizePolicy().hasHeightForWidth());
        ManipSeq13Button->setSizePolicy(sizePolicy1);
        ManipSeq13Button->setFont(font1);

        gridLayout->addWidget(ManipSeq13Button, 4, 1, 1, 1);

        ManipSeq14Button = new QPushButton(gridLayoutWidget);
        ManipSeq14Button->setObjectName(QString::fromUtf8("ManipSeq14Button"));
        sizePolicy1.setHeightForWidth(ManipSeq14Button->sizePolicy().hasHeightForWidth());
        ManipSeq14Button->setSizePolicy(sizePolicy1);
        ManipSeq14Button->setFont(font1);

        gridLayout->addWidget(ManipSeq14Button, 4, 2, 1, 1);

        ManipSeq15Button = new QPushButton(gridLayoutWidget);
        ManipSeq15Button->setObjectName(QString::fromUtf8("ManipSeq15Button"));
        sizePolicy1.setHeightForWidth(ManipSeq15Button->sizePolicy().hasHeightForWidth());
        ManipSeq15Button->setSizePolicy(sizePolicy1);
        ManipSeq15Button->setFont(font1);

        gridLayout->addWidget(ManipSeq15Button, 4, 3, 1, 1);

        gridLayoutWidget_2 = new QWidget(TabManip);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(910, 10, 991, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        ManipToolButton = new QPushButton(gridLayoutWidget_2);
        ManipToolButton->setObjectName(QString::fromUtf8("ManipToolButton"));
        sizePolicy1.setHeightForWidth(ManipToolButton->sizePolicy().hasHeightForWidth());
        ManipToolButton->setSizePolicy(sizePolicy1);
        ManipToolButton->setFont(font1);

        gridLayout_2->addWidget(ManipToolButton, 3, 2, 1, 1);

        ManipJoinButton = new QPushButton(gridLayoutWidget_2);
        ManipJoinButton->setObjectName(QString::fromUtf8("ManipJoinButton"));
        sizePolicy1.setHeightForWidth(ManipJoinButton->sizePolicy().hasHeightForWidth());
        ManipJoinButton->setSizePolicy(sizePolicy1);
        ManipJoinButton->setFont(font1);

        gridLayout_2->addWidget(ManipJoinButton, 3, 0, 1, 1);

        ManipCalibrateButton = new QPushButton(gridLayoutWidget_2);
        ManipCalibrateButton->setObjectName(QString::fromUtf8("ManipCalibrateButton"));
        sizePolicy1.setHeightForWidth(ManipCalibrateButton->sizePolicy().hasHeightForWidth());
        ManipCalibrateButton->setSizePolicy(sizePolicy1);
        ManipCalibrateButton->setFont(font1);

        gridLayout_2->addWidget(ManipCalibrateButton, 0, 2, 1, 1);

        ManipBaseButton = new QPushButton(gridLayoutWidget_2);
        ManipBaseButton->setObjectName(QString::fromUtf8("ManipBaseButton"));
        sizePolicy1.setHeightForWidth(ManipBaseButton->sizePolicy().hasHeightForWidth());
        ManipBaseButton->setSizePolicy(sizePolicy1);
        ManipBaseButton->setFont(font1);

        gridLayout_2->addWidget(ManipBaseButton, 3, 1, 1, 1);

        ManipDisableButton = new QPushButton(gridLayoutWidget_2);
        ManipDisableButton->setObjectName(QString::fromUtf8("ManipDisableButton"));
        sizePolicy1.setHeightForWidth(ManipDisableButton->sizePolicy().hasHeightForWidth());
        ManipDisableButton->setSizePolicy(sizePolicy1);
        ManipDisableButton->setFont(font1);

        gridLayout_2->addWidget(ManipDisableButton, 0, 1, 1, 1);

        ManipEnableButton = new QPushButton(gridLayoutWidget_2);
        ManipEnableButton->setObjectName(QString::fromUtf8("ManipEnableButton"));
        sizePolicy1.setHeightForWidth(ManipEnableButton->sizePolicy().hasHeightForWidth());
        ManipEnableButton->setSizePolicy(sizePolicy1);
        ManipEnableButton->setFont(font1);

        gridLayout_2->addWidget(ManipEnableButton, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(TabManip);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 810, 891, 198));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        ManipClearSequenceButton = new QPushButton(gridLayoutWidget_3);
        ManipClearSequenceButton->setObjectName(QString::fromUtf8("ManipClearSequenceButton"));
        sizePolicy1.setHeightForWidth(ManipClearSequenceButton->sizePolicy().hasHeightForWidth());
        ManipClearSequenceButton->setSizePolicy(sizePolicy1);
        ManipClearSequenceButton->setFont(font1);

        gridLayout_3->addWidget(ManipClearSequenceButton, 3, 0, 1, 3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);

        ManipSeqSpinBox = new QSpinBox(gridLayoutWidget_3);
        ManipSeqSpinBox->setObjectName(QString::fromUtf8("ManipSeqSpinBox"));
        ManipSeqSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(ManipSeqSpinBox->sizePolicy().hasHeightForWidth());
        ManipSeqSpinBox->setSizePolicy(sizePolicy1);
        ManipSeqSpinBox->setFont(font1);
        ManipSeqSpinBox->setMinimum(0);
        ManipSeqSpinBox->setMaximum(7);
        ManipSeqSpinBox->setSingleStep(1);
        ManipSeqSpinBox->setValue(0);

        verticalLayout_3->addWidget(ManipSeqSpinBox);


        gridLayout_3->addLayout(verticalLayout_3, 1, 0, 1, 1);

        ManipSavePointButton = new QPushButton(gridLayoutWidget_3);
        ManipSavePointButton->setObjectName(QString::fromUtf8("ManipSavePointButton"));
        sizePolicy1.setHeightForWidth(ManipSavePointButton->sizePolicy().hasHeightForWidth());
        ManipSavePointButton->setSizePolicy(sizePolicy1);
        ManipSavePointButton->setFont(font1);

        gridLayout_3->addWidget(ManipSavePointButton, 0, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 2, 2, 2);
        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setFont(font1);

        verticalLayout_8->addWidget(label_5);

        ManipSpeedArmSpinBox = new QSpinBox(gridLayoutWidget_3);
        ManipSpeedArmSpinBox->setObjectName(QString::fromUtf8("ManipSpeedArmSpinBox"));
        ManipSpeedArmSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(ManipSpeedArmSpinBox->sizePolicy().hasHeightForWidth());
        ManipSpeedArmSpinBox->setSizePolicy(sizePolicy1);
        ManipSpeedArmSpinBox->setFont(font1);
        ManipSpeedArmSpinBox->setMinimum(10);
        ManipSpeedArmSpinBox->setMaximum(100);
        ManipSpeedArmSpinBox->setSingleStep(10);
        ManipSpeedArmSpinBox->setValue(80);

        verticalLayout_8->addWidget(ManipSpeedArmSpinBox);


        gridLayout_3->addLayout(verticalLayout_8, 2, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font1);

        verticalLayout_7->addWidget(label_4);

        ManipGripperTimeSpinBox = new QSpinBox(gridLayoutWidget_3);
        ManipGripperTimeSpinBox->setObjectName(QString::fromUtf8("ManipGripperTimeSpinBox"));
        ManipGripperTimeSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(ManipGripperTimeSpinBox->sizePolicy().hasHeightForWidth());
        ManipGripperTimeSpinBox->setSizePolicy(sizePolicy1);
        ManipGripperTimeSpinBox->setFont(font1);
        ManipGripperTimeSpinBox->setMinimum(0);
        ManipGripperTimeSpinBox->setMaximum(20);
        ManipGripperTimeSpinBox->setSingleStep(1);
        ManipGripperTimeSpinBox->setValue(0);

        verticalLayout_7->addWidget(ManipGripperTimeSpinBox);


        gridLayout_3->addLayout(verticalLayout_7, 2, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font1);

        verticalLayout_6->addWidget(label_3);

        ManipGripperSpeedSpinBox = new QSpinBox(gridLayoutWidget_3);
        ManipGripperSpeedSpinBox->setObjectName(QString::fromUtf8("ManipGripperSpeedSpinBox"));
        ManipGripperSpeedSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(ManipGripperSpeedSpinBox->sizePolicy().hasHeightForWidth());
        ManipGripperSpeedSpinBox->setSizePolicy(sizePolicy1);
        ManipGripperSpeedSpinBox->setFont(font1);
        ManipGripperSpeedSpinBox->setMinimum(-50);
        ManipGripperSpeedSpinBox->setMaximum(50);
        ManipGripperSpeedSpinBox->setSingleStep(50);
        ManipGripperSpeedSpinBox->setValue(0);

        verticalLayout_6->addWidget(ManipGripperSpeedSpinBox);


        gridLayout_3->addLayout(verticalLayout_6, 2, 1, 1, 1);

        ManipPointTypeComboBox = new QComboBox(gridLayoutWidget_3);
        ManipPointTypeComboBox->addItem(QString());
        ManipPointTypeComboBox->addItem(QString());
        ManipPointTypeComboBox->setObjectName(QString::fromUtf8("ManipPointTypeComboBox"));
        sizePolicy2.setHeightForWidth(ManipPointTypeComboBox->sizePolicy().hasHeightForWidth());
        ManipPointTypeComboBox->setSizePolicy(sizePolicy2);
        ManipPointTypeComboBox->setFont(font1);
        ManipPointTypeComboBox->setEditable(false);

        gridLayout_3->addWidget(ManipPointTypeComboBox, 0, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font1);

        verticalLayout_5->addWidget(label_2);

        ManipPointSpinBox = new QSpinBox(gridLayoutWidget_3);
        ManipPointSpinBox->setObjectName(QString::fromUtf8("ManipPointSpinBox"));
        ManipPointSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(ManipPointSpinBox->sizePolicy().hasHeightForWidth());
        ManipPointSpinBox->setSizePolicy(sizePolicy1);
        ManipPointSpinBox->setFont(font1);
        ManipPointSpinBox->setMinimum(0);
        ManipPointSpinBox->setMaximum(7);
        ManipPointSpinBox->setSingleStep(1);
        ManipPointSpinBox->setValue(0);

        verticalLayout_5->addWidget(ManipPointSpinBox);


        gridLayout_3->addLayout(verticalLayout_5, 1, 2, 1, 1);

        gridLayoutWidget_10 = new QWidget(TabManip);
        gridLayoutWidget_10->setObjectName(QString::fromUtf8("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(10, 460, 891, 167));
        gridLayout_16 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        ManipPosYLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosYLineEdit->setObjectName(QString::fromUtf8("ManipPosYLineEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ManipPosYLineEdit->sizePolicy().hasHeightForWidth());
        ManipPosYLineEdit->setSizePolicy(sizePolicy5);
        ManipPosYLineEdit->setFont(font2);
        ManipPosYLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosYLineEdit, 3, 1, 1, 1);

        ManipPosPitchLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosPitchLineEdit->setObjectName(QString::fromUtf8("ManipPosPitchLineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosPitchLineEdit->sizePolicy().hasHeightForWidth());
        ManipPosPitchLineEdit->setSizePolicy(sizePolicy5);
        ManipPosPitchLineEdit->setFont(font2);
        ManipPosPitchLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosPitchLineEdit, 3, 4, 1, 1);

        ManipPosMot3LineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosMot3LineEdit->setObjectName(QString::fromUtf8("ManipPosMot3LineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosMot3LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMot3LineEdit->setSizePolicy(sizePolicy5);
        ManipPosMot3LineEdit->setFont(font2);
        ManipPosMot3LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosMot3LineEdit, 2, 3, 1, 1);

        ManipPosYawLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosYawLineEdit->setObjectName(QString::fromUtf8("ManipPosYawLineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosYawLineEdit->sizePolicy().hasHeightForWidth());
        ManipPosYawLineEdit->setSizePolicy(sizePolicy5);
        ManipPosYawLineEdit->setFont(font2);
        ManipPosYawLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosYawLineEdit, 3, 3, 1, 1);

        ManipPosMot1LineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosMot1LineEdit->setObjectName(QString::fromUtf8("ManipPosMot1LineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosMot1LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMot1LineEdit->setSizePolicy(sizePolicy5);
        ManipPosMot1LineEdit->setFont(font2);
        ManipPosMot1LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosMot1LineEdit, 2, 1, 1, 1);

        ManipMot0ErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipMot0ErrorInd->setObjectName(QString::fromUtf8("ManipMot0ErrorInd"));
        ManipMot0ErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot0ErrorInd->sizePolicy().hasHeightForWidth());
        ManipMot0ErrorInd->setSizePolicy(sizePolicy5);
        ManipMot0ErrorInd->setFont(font2);

        gridLayout_16->addWidget(ManipMot0ErrorInd, 1, 0, 1, 1);

        ManipPosMot4LineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosMot4LineEdit->setObjectName(QString::fromUtf8("ManipPosMot4LineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosMot4LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMot4LineEdit->setSizePolicy(sizePolicy5);
        ManipPosMot4LineEdit->setFont(font2);
        ManipPosMot4LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosMot4LineEdit, 2, 4, 1, 1);

        ManipPosXLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosXLineEdit->setObjectName(QString::fromUtf8("ManipPosXLineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosXLineEdit->sizePolicy().hasHeightForWidth());
        ManipPosXLineEdit->setSizePolicy(sizePolicy5);
        ManipPosXLineEdit->setFont(font2);
        ManipPosXLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosXLineEdit, 3, 0, 1, 1);

        ManipMot4ErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipMot4ErrorInd->setObjectName(QString::fromUtf8("ManipMot4ErrorInd"));
        ManipMot4ErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot4ErrorInd->sizePolicy().hasHeightForWidth());
        ManipMot4ErrorInd->setSizePolicy(sizePolicy5);
        ManipMot4ErrorInd->setFont(font2);

        gridLayout_16->addWidget(ManipMot4ErrorInd, 1, 4, 1, 1);

        ManipPosZLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosZLineEdit->setObjectName(QString::fromUtf8("ManipPosZLineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosZLineEdit->sizePolicy().hasHeightForWidth());
        ManipPosZLineEdit->setSizePolicy(sizePolicy5);
        ManipPosZLineEdit->setFont(font2);
        ManipPosZLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosZLineEdit, 3, 2, 1, 1);

        ManipPosMot0LineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosMot0LineEdit->setObjectName(QString::fromUtf8("ManipPosMot0LineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosMot0LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMot0LineEdit->setSizePolicy(sizePolicy5);
        ManipPosMot0LineEdit->setFont(font2);
        ManipPosMot0LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosMot0LineEdit, 2, 0, 1, 1);

        ManipMot5ErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipMot5ErrorInd->setObjectName(QString::fromUtf8("ManipMot5ErrorInd"));
        ManipMot5ErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot5ErrorInd->sizePolicy().hasHeightForWidth());
        ManipMot5ErrorInd->setSizePolicy(sizePolicy5);
        ManipMot5ErrorInd->setFont(font2);

        gridLayout_16->addWidget(ManipMot5ErrorInd, 1, 5, 1, 1);

        ManipPosMot2LineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosMot2LineEdit->setObjectName(QString::fromUtf8("ManipPosMot2LineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosMot2LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMot2LineEdit->setSizePolicy(sizePolicy5);
        ManipPosMot2LineEdit->setFont(font2);
        ManipPosMot2LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosMot2LineEdit, 2, 2, 1, 1);

        ManipPosRollLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosRollLineEdit->setObjectName(QString::fromUtf8("ManipPosRollLineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosRollLineEdit->sizePolicy().hasHeightForWidth());
        ManipPosRollLineEdit->setSizePolicy(sizePolicy5);
        ManipPosRollLineEdit->setFont(font2);
        ManipPosRollLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosRollLineEdit, 3, 5, 1, 1);

        ManipMot3ErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipMot3ErrorInd->setObjectName(QString::fromUtf8("ManipMot3ErrorInd"));
        ManipMot3ErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot3ErrorInd->sizePolicy().hasHeightForWidth());
        ManipMot3ErrorInd->setSizePolicy(sizePolicy5);
        ManipMot3ErrorInd->setFont(font2);

        gridLayout_16->addWidget(ManipMot3ErrorInd, 1, 3, 1, 1);

        ManipPosMot5LineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipPosMot5LineEdit->setObjectName(QString::fromUtf8("ManipPosMot5LineEdit"));
        sizePolicy5.setHeightForWidth(ManipPosMot5LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMot5LineEdit->setSizePolicy(sizePolicy5);
        ManipPosMot5LineEdit->setFont(font2);
        ManipPosMot5LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_16->addWidget(ManipPosMot5LineEdit, 2, 5, 1, 1);

        ManipMot1ErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipMot1ErrorInd->setObjectName(QString::fromUtf8("ManipMot1ErrorInd"));
        ManipMot1ErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot1ErrorInd->sizePolicy().hasHeightForWidth());
        ManipMot1ErrorInd->setSizePolicy(sizePolicy5);
        ManipMot1ErrorInd->setFont(font2);

        gridLayout_16->addWidget(ManipMot1ErrorInd, 1, 1, 1, 1);

        ManipMot2ErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipMot2ErrorInd->setObjectName(QString::fromUtf8("ManipMot2ErrorInd"));
        ManipMot2ErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot2ErrorInd->sizePolicy().hasHeightForWidth());
        ManipMot2ErrorInd->setSizePolicy(sizePolicy5);
        ManipMot2ErrorInd->setFont(font2);

        gridLayout_16->addWidget(ManipMot2ErrorInd, 1, 2, 1, 1);

        ManipPosReachedInd = new QPushButton(gridLayoutWidget_10);
        ManipPosReachedInd->setObjectName(QString::fromUtf8("ManipPosReachedInd"));
        ManipPosReachedInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipPosReachedInd->sizePolicy().hasHeightForWidth());
        ManipPosReachedInd->setSizePolicy(sizePolicy5);
        ManipPosReachedInd->setFont(font1);

        gridLayout_16->addWidget(ManipPosReachedInd, 0, 5, 1, 1);

        ManipCoordinateSystemLineEdit = new QLineEdit(gridLayoutWidget_10);
        ManipCoordinateSystemLineEdit->setObjectName(QString::fromUtf8("ManipCoordinateSystemLineEdit"));
        sizePolicy5.setHeightForWidth(ManipCoordinateSystemLineEdit->sizePolicy().hasHeightForWidth());
        ManipCoordinateSystemLineEdit->setSizePolicy(sizePolicy5);
        ManipCoordinateSystemLineEdit->setFont(font2);
        ManipCoordinateSystemLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(ManipCoordinateSystemLineEdit, 0, 0, 1, 3);

        ManipStartErrorInd = new QPushButton(gridLayoutWidget_10);
        ManipStartErrorInd->setObjectName(QString::fromUtf8("ManipStartErrorInd"));
        ManipStartErrorInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipStartErrorInd->sizePolicy().hasHeightForWidth());
        ManipStartErrorInd->setSizePolicy(sizePolicy5);
        ManipStartErrorInd->setFont(font1);

        gridLayout_16->addWidget(ManipStartErrorInd, 0, 3, 1, 1);

        ManipMoveInterruptedInd = new QPushButton(gridLayoutWidget_10);
        ManipMoveInterruptedInd->setObjectName(QString::fromUtf8("ManipMoveInterruptedInd"));
        ManipMoveInterruptedInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMoveInterruptedInd->sizePolicy().hasHeightForWidth());
        ManipMoveInterruptedInd->setSizePolicy(sizePolicy5);
        ManipMoveInterruptedInd->setFont(font1);

        gridLayout_16->addWidget(ManipMoveInterruptedInd, 0, 4, 1, 1);

        gridLayoutWidget_7 = new QWidget(TabManip);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 630, 891, 151));
        gridLayout_15 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        ManipPosMat23_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat23_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat23_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat23_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat23_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat23_LineEdit->setFont(font2);
        ManipPosMat23_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat23_LineEdit, 2, 3, 1, 1);

        ManipPosMat30_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat30_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat30_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat30_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat30_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat30_LineEdit->setFont(font2);
        ManipPosMat30_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat30_LineEdit, 3, 0, 1, 1);

        ManipPosMat10_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat10_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat10_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat10_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat10_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat10_LineEdit->setFont(font2);
        ManipPosMat10_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat10_LineEdit, 1, 0, 1, 1);

        ManipPosMat33_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat33_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat33_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat33_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat33_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat33_LineEdit->setFont(font2);
        ManipPosMat33_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat33_LineEdit, 3, 3, 1, 1);

        ManipPosMat02_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat02_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat02_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat02_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat02_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat02_LineEdit->setFont(font2);
        ManipPosMat02_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat02_LineEdit, 0, 2, 1, 1);

        ManipPosMat03_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat03_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat03_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat03_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat03_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat03_LineEdit->setFont(font2);
        ManipPosMat03_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat03_LineEdit, 0, 3, 1, 1);

        ManipPosMat31_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat31_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat31_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat31_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat31_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat31_LineEdit->setFont(font2);
        ManipPosMat31_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat31_LineEdit, 3, 1, 1, 1);

        ManipPosMat20_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat20_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat20_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat20_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat20_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat20_LineEdit->setFont(font2);
        ManipPosMat20_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat20_LineEdit, 2, 0, 1, 1);

        ManipPosMat12_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat12_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat12_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat12_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat12_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat12_LineEdit->setFont(font2);
        ManipPosMat12_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat12_LineEdit, 1, 2, 1, 1);

        ManipPosMat21_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat21_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat21_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat21_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat21_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat21_LineEdit->setFont(font2);
        ManipPosMat21_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat21_LineEdit, 2, 1, 1, 1);

        ManipPosMat11_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat11_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat11_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat11_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat11_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat11_LineEdit->setFont(font2);
        ManipPosMat11_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat11_LineEdit, 1, 1, 1, 1);

        ManipPosMat13_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat13_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat13_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat13_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat13_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat13_LineEdit->setFont(font2);
        ManipPosMat13_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat13_LineEdit, 1, 3, 1, 1);

        ManipPosMat22_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat22_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat22_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat22_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat22_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat22_LineEdit->setFont(font2);
        ManipPosMat22_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat22_LineEdit, 2, 2, 1, 1);

        ManipPosMat32_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat32_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat32_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat32_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat32_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat32_LineEdit->setFont(font2);
        ManipPosMat32_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat32_LineEdit, 3, 2, 1, 1);

        ManipPosMat01_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat01_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat01_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat01_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat01_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat01_LineEdit->setFont(font2);
        ManipPosMat01_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat01_LineEdit, 0, 1, 1, 1);

        ManipPosMat00_LineEdit = new QLineEdit(gridLayoutWidget_7);
        ManipPosMat00_LineEdit->setObjectName(QString::fromUtf8("ManipPosMat00_LineEdit"));
        sizePolicy.setHeightForWidth(ManipPosMat00_LineEdit->sizePolicy().hasHeightForWidth());
        ManipPosMat00_LineEdit->setSizePolicy(sizePolicy);
        ManipPosMat00_LineEdit->setFont(font2);
        ManipPosMat00_LineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_15->addWidget(ManipPosMat00_LineEdit, 0, 0, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(TabManip);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 10, 891, 44));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ManipMot0PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot0PidInd->setObjectName(QString::fromUtf8("ManipMot0PidInd"));
        ManipMot0PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot0PidInd->sizePolicy().hasHeightForWidth());
        ManipMot0PidInd->setSizePolicy(sizePolicy5);
        ManipMot0PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot0PidInd);

        ManipMot1PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot1PidInd->setObjectName(QString::fromUtf8("ManipMot1PidInd"));
        ManipMot1PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot1PidInd->sizePolicy().hasHeightForWidth());
        ManipMot1PidInd->setSizePolicy(sizePolicy5);
        ManipMot1PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot1PidInd);

        ManipMot2PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot2PidInd->setObjectName(QString::fromUtf8("ManipMot2PidInd"));
        ManipMot2PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot2PidInd->sizePolicy().hasHeightForWidth());
        ManipMot2PidInd->setSizePolicy(sizePolicy5);
        ManipMot2PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot2PidInd);

        ManipMot3PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot3PidInd->setObjectName(QString::fromUtf8("ManipMot3PidInd"));
        ManipMot3PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot3PidInd->sizePolicy().hasHeightForWidth());
        ManipMot3PidInd->setSizePolicy(sizePolicy5);
        ManipMot3PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot3PidInd);

        ManipMot4PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot4PidInd->setObjectName(QString::fromUtf8("ManipMot4PidInd"));
        ManipMot4PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot4PidInd->sizePolicy().hasHeightForWidth());
        ManipMot4PidInd->setSizePolicy(sizePolicy5);
        ManipMot4PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot4PidInd);

        ManipMot5PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot5PidInd->setObjectName(QString::fromUtf8("ManipMot5PidInd"));
        ManipMot5PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot5PidInd->sizePolicy().hasHeightForWidth());
        ManipMot5PidInd->setSizePolicy(sizePolicy5);
        ManipMot5PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot5PidInd);

        ManipMot6PidInd = new QPushButton(horizontalLayoutWidget_3);
        ManipMot6PidInd->setObjectName(QString::fromUtf8("ManipMot6PidInd"));
        ManipMot6PidInd->setEnabled(true);
        sizePolicy5.setHeightForWidth(ManipMot6PidInd->sizePolicy().hasHeightForWidth());
        ManipMot6PidInd->setSizePolicy(sizePolicy5);
        ManipMot6PidInd->setFont(font2);

        horizontalLayout_3->addWidget(ManipMot6PidInd);

        gridLayoutWidget_15 = new QWidget(TabManip);
        gridLayoutWidget_15->setObjectName(QString::fromUtf8("gridLayoutWidget_15"));
        gridLayoutWidget_15->setGeometry(QRect(910, 710, 991, 181));
        gridLayout_21 = new QGridLayout(gridLayoutWidget_15);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        ManipSetPosMat03DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat03DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat03DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat03DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat03DoubleSpinBox->setSizePolicy(sizePolicy5);
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        font3.setKerning(true);
        ManipSetPosMat03DoubleSpinBox->setFont(font3);
        ManipSetPosMat03DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat03DoubleSpinBox->setDecimals(6);
        ManipSetPosMat03DoubleSpinBox->setMinimum(-1500.000000000000000);
        ManipSetPosMat03DoubleSpinBox->setMaximum(1500.000000000000000);
        ManipSetPosMat03DoubleSpinBox->setSingleStep(10.000000000000000);
        ManipSetPosMat03DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat03DoubleSpinBox, 0, 3, 1, 1);

        ManipSetPosBaseToolGetCurrentMatButt = new QPushButton(gridLayoutWidget_15);
        ManipSetPosBaseToolGetCurrentMatButt->setObjectName(QString::fromUtf8("ManipSetPosBaseToolGetCurrentMatButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseToolGetCurrentMatButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseToolGetCurrentMatButt->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(true);
        ManipSetPosBaseToolGetCurrentMatButt->setFont(font4);

        gridLayout_21->addWidget(ManipSetPosBaseToolGetCurrentMatButt, 0, 4, 1, 1);

        ManipSetPosMat23DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat23DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat23DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat23DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat23DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat23DoubleSpinBox->setFont(font3);
        ManipSetPosMat23DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat23DoubleSpinBox->setDecimals(6);
        ManipSetPosMat23DoubleSpinBox->setMinimum(-1500.000000000000000);
        ManipSetPosMat23DoubleSpinBox->setMaximum(1500.000000000000000);
        ManipSetPosMat23DoubleSpinBox->setSingleStep(10.000000000000000);
        ManipSetPosMat23DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat23DoubleSpinBox, 3, 3, 1, 1);

        ManipSetPosMat22DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat22DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat22DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat22DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat22DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat22DoubleSpinBox->setFont(font3);
        ManipSetPosMat22DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat22DoubleSpinBox->setDecimals(6);
        ManipSetPosMat22DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat22DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat22DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat22DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat22DoubleSpinBox, 3, 2, 1, 1);

        ManipSetPosMat33DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat33DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat33DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat33DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat33DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat33DoubleSpinBox->setFont(font3);
        ManipSetPosMat33DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat33DoubleSpinBox->setDecimals(6);
        ManipSetPosMat33DoubleSpinBox->setMinimum(1.000000000000000);
        ManipSetPosMat33DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat33DoubleSpinBox->setSingleStep(1.000000000000000);
        ManipSetPosMat33DoubleSpinBox->setValue(1.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat33DoubleSpinBox, 4, 3, 1, 1);

        ManipSetPosMat01DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat01DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat01DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat01DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat01DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat01DoubleSpinBox->setFont(font3);
        ManipSetPosMat01DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat01DoubleSpinBox->setDecimals(6);
        ManipSetPosMat01DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat01DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat01DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat01DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat01DoubleSpinBox, 0, 1, 1, 1);

        ManipSetPosMat10DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat10DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat10DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat10DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat10DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat10DoubleSpinBox->setFont(font3);
        ManipSetPosMat10DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat10DoubleSpinBox->setDecimals(6);
        ManipSetPosMat10DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat10DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat10DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat10DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat10DoubleSpinBox, 2, 0, 1, 1);

        ManipSetPosMat12DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat12DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat12DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat12DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat12DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat12DoubleSpinBox->setFont(font3);
        ManipSetPosMat12DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat12DoubleSpinBox->setDecimals(6);
        ManipSetPosMat12DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat12DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat12DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat12DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat12DoubleSpinBox, 2, 2, 1, 1);

        ManipSetPosMat20DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat20DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat20DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat20DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat20DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat20DoubleSpinBox->setFont(font3);
        ManipSetPosMat20DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat20DoubleSpinBox->setDecimals(6);
        ManipSetPosMat20DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat20DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat20DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat20DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat20DoubleSpinBox, 3, 0, 1, 1);

        ManipSetPosMat32DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat32DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat32DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat32DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat32DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat32DoubleSpinBox->setFont(font3);
        ManipSetPosMat32DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat32DoubleSpinBox->setDecimals(6);
        ManipSetPosMat32DoubleSpinBox->setMinimum(0.000000000000000);
        ManipSetPosMat32DoubleSpinBox->setMaximum(0.000000000000000);
        ManipSetPosMat32DoubleSpinBox->setSingleStep(0.000000000000000);
        ManipSetPosMat32DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat32DoubleSpinBox, 4, 2, 1, 1);

        ManipSetPosMat13DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat13DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat13DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat13DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat13DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat13DoubleSpinBox->setFont(font3);
        ManipSetPosMat13DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat13DoubleSpinBox->setDecimals(6);
        ManipSetPosMat13DoubleSpinBox->setMinimum(-1500.000000000000000);
        ManipSetPosMat13DoubleSpinBox->setMaximum(1500.000000000000000);
        ManipSetPosMat13DoubleSpinBox->setSingleStep(10.000000000000000);
        ManipSetPosMat13DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat13DoubleSpinBox, 2, 3, 1, 1);

        ManipSetPosMat11DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat11DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat11DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat11DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat11DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat11DoubleSpinBox->setFont(font3);
        ManipSetPosMat11DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat11DoubleSpinBox->setDecimals(6);
        ManipSetPosMat11DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat11DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat11DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat11DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat11DoubleSpinBox, 2, 1, 1, 1);

        ManipSetPosMat21DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat21DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat21DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat21DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat21DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat21DoubleSpinBox->setFont(font3);
        ManipSetPosMat21DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat21DoubleSpinBox->setDecimals(6);
        ManipSetPosMat21DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat21DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat21DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat21DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat21DoubleSpinBox, 3, 1, 1, 1);

        ManipSetPosMat00DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat00DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat00DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat00DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat00DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat00DoubleSpinBox->setFont(font3);
        ManipSetPosMat00DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat00DoubleSpinBox->setDecimals(6);
        ManipSetPosMat00DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat00DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat00DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat00DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat00DoubleSpinBox, 0, 0, 1, 1);

        ManipSetPosBaseToolClearMatButt = new QPushButton(gridLayoutWidget_15);
        ManipSetPosBaseToolClearMatButt->setObjectName(QString::fromUtf8("ManipSetPosBaseToolClearMatButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseToolClearMatButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseToolClearMatButt->setSizePolicy(sizePolicy5);
        ManipSetPosBaseToolClearMatButt->setFont(font4);

        gridLayout_21->addWidget(ManipSetPosBaseToolClearMatButt, 2, 4, 1, 1);

        ManipSetPosMat30DoubleSpinBox_2 = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat30DoubleSpinBox_2->setObjectName(QString::fromUtf8("ManipSetPosMat30DoubleSpinBox_2"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat30DoubleSpinBox_2->sizePolicy().hasHeightForWidth());
        ManipSetPosMat30DoubleSpinBox_2->setSizePolicy(sizePolicy5);
        ManipSetPosMat30DoubleSpinBox_2->setFont(font3);
        ManipSetPosMat30DoubleSpinBox_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat30DoubleSpinBox_2->setDecimals(6);
        ManipSetPosMat30DoubleSpinBox_2->setMinimum(0.000000000000000);
        ManipSetPosMat30DoubleSpinBox_2->setMaximum(0.000000000000000);
        ManipSetPosMat30DoubleSpinBox_2->setSingleStep(0.000000000000000);
        ManipSetPosMat30DoubleSpinBox_2->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat30DoubleSpinBox_2, 4, 0, 1, 1);

        ManipSetPosMat02DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat02DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat02DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat02DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat02DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat02DoubleSpinBox->setFont(font3);
        ManipSetPosMat02DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat02DoubleSpinBox->setDecimals(6);
        ManipSetPosMat02DoubleSpinBox->setMinimum(-1.000000000000000);
        ManipSetPosMat02DoubleSpinBox->setMaximum(1.000000000000000);
        ManipSetPosMat02DoubleSpinBox->setSingleStep(0.010000000000000);
        ManipSetPosMat02DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat02DoubleSpinBox, 0, 2, 1, 1);

        ManipSetPosMat31DoubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_15);
        ManipSetPosMat31DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosMat31DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosMat31DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosMat31DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosMat31DoubleSpinBox->setFont(font3);
        ManipSetPosMat31DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosMat31DoubleSpinBox->setDecimals(6);
        ManipSetPosMat31DoubleSpinBox->setMinimum(0.000000000000000);
        ManipSetPosMat31DoubleSpinBox->setMaximum(0.000000000000000);
        ManipSetPosMat31DoubleSpinBox->setSingleStep(0.000000000000000);
        ManipSetPosMat31DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_21->addWidget(ManipSetPosMat31DoubleSpinBox, 4, 1, 1, 1);

        ManipSetMatBaseMoveAbsButt = new QPushButton(gridLayoutWidget_15);
        ManipSetMatBaseMoveAbsButt->setObjectName(QString::fromUtf8("ManipSetMatBaseMoveAbsButt"));
        sizePolicy5.setHeightForWidth(ManipSetMatBaseMoveAbsButt->sizePolicy().hasHeightForWidth());
        ManipSetMatBaseMoveAbsButt->setSizePolicy(sizePolicy5);
        ManipSetMatBaseMoveAbsButt->setFont(font4);

        gridLayout_21->addWidget(ManipSetMatBaseMoveAbsButt, 0, 5, 1, 1);

        ManipSetMatBaseMoveIncButt = new QPushButton(gridLayoutWidget_15);
        ManipSetMatBaseMoveIncButt->setObjectName(QString::fromUtf8("ManipSetMatBaseMoveIncButt"));
        sizePolicy5.setHeightForWidth(ManipSetMatBaseMoveIncButt->sizePolicy().hasHeightForWidth());
        ManipSetMatBaseMoveIncButt->setSizePolicy(sizePolicy5);
        ManipSetMatBaseMoveIncButt->setFont(font4);

        gridLayout_21->addWidget(ManipSetMatBaseMoveIncButt, 2, 5, 1, 1);

        ManipSetMatToolMoveIncButt = new QPushButton(gridLayoutWidget_15);
        ManipSetMatToolMoveIncButt->setObjectName(QString::fromUtf8("ManipSetMatToolMoveIncButt"));
        sizePolicy5.setHeightForWidth(ManipSetMatToolMoveIncButt->sizePolicy().hasHeightForWidth());
        ManipSetMatToolMoveIncButt->setSizePolicy(sizePolicy5);
        ManipSetMatToolMoveIncButt->setFont(font4);

        gridLayout_21->addWidget(ManipSetMatToolMoveIncButt, 3, 5, 1, 1);

        ManipSetPosBaseToolFindMatButt = new QPushButton(gridLayoutWidget_15);
        ManipSetPosBaseToolFindMatButt->setObjectName(QString::fromUtf8("ManipSetPosBaseToolFindMatButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseToolFindMatButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseToolFindMatButt->setSizePolicy(sizePolicy5);
        ManipSetPosBaseToolFindMatButt->setFont(font4);

        gridLayout_21->addWidget(ManipSetPosBaseToolFindMatButt, 3, 4, 1, 1);

        layoutWidget = new QWidget(TabManip);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(910, 590, 989, 111));
        gridLayout_19 = new QGridLayout(layoutWidget);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        ManipSetPosRollDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        ManipSetPosRollDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosRollDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosRollDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosRollDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosRollDoubleSpinBox->setFont(font3);
        ManipSetPosRollDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosRollDoubleSpinBox->setDecimals(2);
        ManipSetPosRollDoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosRollDoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosRollDoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosRollDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_19->addWidget(ManipSetPosRollDoubleSpinBox, 1, 2, 1, 1);

        ManipSetPosZDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        ManipSetPosZDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosZDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosZDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosZDoubleSpinBox->setFont(font3);
        ManipSetPosZDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosZDoubleSpinBox->setDecimals(1);
        ManipSetPosZDoubleSpinBox->setMinimum(-1500.000000000000000);
        ManipSetPosZDoubleSpinBox->setMaximum(1500.000000000000000);
        ManipSetPosZDoubleSpinBox->setSingleStep(10.000000000000000);
        ManipSetPosZDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_19->addWidget(ManipSetPosZDoubleSpinBox, 0, 2, 1, 1);

        ManipSetPosPitchDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        ManipSetPosPitchDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosPitchDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosPitchDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosPitchDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosPitchDoubleSpinBox->setFont(font3);
        ManipSetPosPitchDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosPitchDoubleSpinBox->setDecimals(2);
        ManipSetPosPitchDoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosPitchDoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosPitchDoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosPitchDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_19->addWidget(ManipSetPosPitchDoubleSpinBox, 1, 1, 1, 1);

        ManipSetPosXDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        ManipSetPosXDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosXDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosXDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosXDoubleSpinBox->setFont(font3);
        ManipSetPosXDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosXDoubleSpinBox->setDecimals(1);
        ManipSetPosXDoubleSpinBox->setMinimum(-1500.000000000000000);
        ManipSetPosXDoubleSpinBox->setMaximum(1500.000000000000000);
        ManipSetPosXDoubleSpinBox->setSingleStep(10.000000000000000);
        ManipSetPosXDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_19->addWidget(ManipSetPosXDoubleSpinBox, 0, 0, 1, 1);

        ManipSetPosYawDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        ManipSetPosYawDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosYawDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosYawDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosYawDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosYawDoubleSpinBox->setFont(font3);
        ManipSetPosYawDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosYawDoubleSpinBox->setDecimals(2);
        ManipSetPosYawDoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosYawDoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosYawDoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosYawDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_19->addWidget(ManipSetPosYawDoubleSpinBox, 1, 0, 1, 1);

        ManipSetPosYDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        ManipSetPosYDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosYDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosYDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosYDoubleSpinBox->setFont(font3);
        ManipSetPosYDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosYDoubleSpinBox->setDecimals(1);
        ManipSetPosYDoubleSpinBox->setMinimum(-1500.000000000000000);
        ManipSetPosYDoubleSpinBox->setMaximum(1500.000000000000000);
        ManipSetPosYDoubleSpinBox->setSingleStep(10.000000000000000);
        ManipSetPosYDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_19->addWidget(ManipSetPosYDoubleSpinBox, 0, 1, 1, 1);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        ManipSetPosBaseMoveIncButt = new QPushButton(layoutWidget);
        ManipSetPosBaseMoveIncButt->setObjectName(QString::fromUtf8("ManipSetPosBaseMoveIncButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseMoveIncButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseMoveIncButt->setSizePolicy(sizePolicy5);
        ManipSetPosBaseMoveIncButt->setFont(font4);

        gridLayout_18->addWidget(ManipSetPosBaseMoveIncButt, 1, 1, 1, 1);

        ManipSetPosBaseMoveAbsButt = new QPushButton(layoutWidget);
        ManipSetPosBaseMoveAbsButt->setObjectName(QString::fromUtf8("ManipSetPosBaseMoveAbsButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseMoveAbsButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseMoveAbsButt->setSizePolicy(sizePolicy5);
        ManipSetPosBaseMoveAbsButt->setFont(font4);

        gridLayout_18->addWidget(ManipSetPosBaseMoveAbsButt, 0, 1, 1, 1);

        ManipSetPosBaseToolGetCurrentPosButt = new QPushButton(layoutWidget);
        ManipSetPosBaseToolGetCurrentPosButt->setObjectName(QString::fromUtf8("ManipSetPosBaseToolGetCurrentPosButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseToolGetCurrentPosButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseToolGetCurrentPosButt->setSizePolicy(sizePolicy5);
        ManipSetPosBaseToolGetCurrentPosButt->setFont(font4);

        gridLayout_18->addWidget(ManipSetPosBaseToolGetCurrentPosButt, 0, 0, 1, 1);

        ManipSetPosBaseToolClearPosButt = new QPushButton(layoutWidget);
        ManipSetPosBaseToolClearPosButt->setObjectName(QString::fromUtf8("ManipSetPosBaseToolClearPosButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosBaseToolClearPosButt->sizePolicy().hasHeightForWidth());
        ManipSetPosBaseToolClearPosButt->setSizePolicy(sizePolicy5);
        ManipSetPosBaseToolClearPosButt->setFont(font4);

        gridLayout_18->addWidget(ManipSetPosBaseToolClearPosButt, 1, 0, 1, 1);

        ManipSetPosToolMoveIncButt = new QPushButton(layoutWidget);
        ManipSetPosToolMoveIncButt->setObjectName(QString::fromUtf8("ManipSetPosToolMoveIncButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosToolMoveIncButt->sizePolicy().hasHeightForWidth());
        ManipSetPosToolMoveIncButt->setSizePolicy(sizePolicy5);
        ManipSetPosToolMoveIncButt->setFont(font4);

        gridLayout_18->addWidget(ManipSetPosToolMoveIncButt, 0, 2, 2, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 3, 2, 2);

        layoutWidget1 = new QWidget(TabManip);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(910, 440, 989, 141));
        gridLayout_17 = new QGridLayout(layoutWidget1);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        ManipSetPosQGetCurrentPosButt = new QPushButton(layoutWidget1);
        ManipSetPosQGetCurrentPosButt->setObjectName(QString::fromUtf8("ManipSetPosQGetCurrentPosButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosQGetCurrentPosButt->sizePolicy().hasHeightForWidth());
        ManipSetPosQGetCurrentPosButt->setSizePolicy(sizePolicy5);
        ManipSetPosQGetCurrentPosButt->setFont(font4);

        gridLayout_17->addWidget(ManipSetPosQGetCurrentPosButt, 1, 3, 1, 1);

        ManipSetPosQMoveAbsButt = new QPushButton(layoutWidget1);
        ManipSetPosQMoveAbsButt->setObjectName(QString::fromUtf8("ManipSetPosQMoveAbsButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosQMoveAbsButt->sizePolicy().hasHeightForWidth());
        ManipSetPosQMoveAbsButt->setSizePolicy(sizePolicy5);
        ManipSetPosQMoveAbsButt->setFont(font4);

        gridLayout_17->addWidget(ManipSetPosQMoveAbsButt, 1, 4, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        ManipSetPosGripTimeDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosGripTimeDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosGripTimeDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosGripTimeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosGripTimeDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosGripTimeDoubleSpinBox->setFont(font3);
        ManipSetPosGripTimeDoubleSpinBox->setDecimals(2);
        ManipSetPosGripTimeDoubleSpinBox->setMinimum(0.000000000000000);
        ManipSetPosGripTimeDoubleSpinBox->setMaximum(20.000000000000000);
        ManipSetPosGripTimeDoubleSpinBox->setSingleStep(1.000000000000000);
        ManipSetPosGripTimeDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_20->addWidget(ManipSetPosGripTimeDoubleSpinBox, 0, 1, 1, 1);

        ManipSetPosGripSpeedDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosGripSpeedDoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosGripSpeedDoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosGripSpeedDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosGripSpeedDoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosGripSpeedDoubleSpinBox->setFont(font3);
        ManipSetPosGripSpeedDoubleSpinBox->setDecimals(2);
        ManipSetPosGripSpeedDoubleSpinBox->setMinimum(-30.000000000000000);
        ManipSetPosGripSpeedDoubleSpinBox->setMaximum(30.000000000000000);
        ManipSetPosGripSpeedDoubleSpinBox->setSingleStep(30.000000000000000);
        ManipSetPosGripSpeedDoubleSpinBox->setValue(0.000000000000000);

        gridLayout_20->addWidget(ManipSetPosGripSpeedDoubleSpinBox, 0, 0, 1, 1);

        ManipSetPosGripperMoveButt = new QPushButton(layoutWidget1);
        ManipSetPosGripperMoveButt->setObjectName(QString::fromUtf8("ManipSetPosGripperMoveButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosGripperMoveButt->sizePolicy().hasHeightForWidth());
        ManipSetPosGripperMoveButt->setSizePolicy(sizePolicy5);
        ManipSetPosGripperMoveButt->setFont(font1);

        gridLayout_20->addWidget(ManipSetPosGripperMoveButt, 0, 2, 1, 1);


        gridLayout_17->addLayout(gridLayout_20, 0, 0, 1, 5);

        ManipSetPosQClearPosButt = new QPushButton(layoutWidget1);
        ManipSetPosQClearPosButt->setObjectName(QString::fromUtf8("ManipSetPosQClearPosButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosQClearPosButt->sizePolicy().hasHeightForWidth());
        ManipSetPosQClearPosButt->setSizePolicy(sizePolicy5);
        ManipSetPosQClearPosButt->setFont(font4);

        gridLayout_17->addWidget(ManipSetPosQClearPosButt, 2, 3, 1, 1);

        ManipSetPosQ3DoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosQ3DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosQ3DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosQ3DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosQ3DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosQ3DoubleSpinBox->setFont(font3);
        ManipSetPosQ3DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosQ3DoubleSpinBox->setDecimals(2);
        ManipSetPosQ3DoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosQ3DoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosQ3DoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosQ3DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_17->addWidget(ManipSetPosQ3DoubleSpinBox, 2, 0, 1, 1);

        ManipSetPosQ2DoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosQ2DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosQ2DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosQ2DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosQ2DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosQ2DoubleSpinBox->setFont(font3);
        ManipSetPosQ2DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosQ2DoubleSpinBox->setDecimals(2);
        ManipSetPosQ2DoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosQ2DoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosQ2DoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosQ2DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_17->addWidget(ManipSetPosQ2DoubleSpinBox, 1, 2, 1, 1);

        ManipSetPosQ0DoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosQ0DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosQ0DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosQ0DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosQ0DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosQ0DoubleSpinBox->setFont(font3);
        ManipSetPosQ0DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosQ0DoubleSpinBox->setDecimals(2);
        ManipSetPosQ0DoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosQ0DoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosQ0DoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosQ0DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_17->addWidget(ManipSetPosQ0DoubleSpinBox, 1, 0, 1, 1);

        ManipSetPosQ1DoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosQ1DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosQ1DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosQ1DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosQ1DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosQ1DoubleSpinBox->setFont(font3);
        ManipSetPosQ1DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosQ1DoubleSpinBox->setDecimals(2);
        ManipSetPosQ1DoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosQ1DoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosQ1DoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosQ1DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_17->addWidget(ManipSetPosQ1DoubleSpinBox, 1, 1, 1, 1);

        ManipSetPosQ5DoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosQ5DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosQ5DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosQ5DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosQ5DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosQ5DoubleSpinBox->setFont(font3);
        ManipSetPosQ5DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosQ5DoubleSpinBox->setDecimals(2);
        ManipSetPosQ5DoubleSpinBox->setMinimum(-312.000000000000000);
        ManipSetPosQ5DoubleSpinBox->setMaximum(312.000000000000000);
        ManipSetPosQ5DoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosQ5DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_17->addWidget(ManipSetPosQ5DoubleSpinBox, 2, 2, 1, 1);

        ManipSetPosQMoveIncButt = new QPushButton(layoutWidget1);
        ManipSetPosQMoveIncButt->setObjectName(QString::fromUtf8("ManipSetPosQMoveIncButt"));
        sizePolicy5.setHeightForWidth(ManipSetPosQMoveIncButt->sizePolicy().hasHeightForWidth());
        ManipSetPosQMoveIncButt->setSizePolicy(sizePolicy5);
        ManipSetPosQMoveIncButt->setFont(font4);

        gridLayout_17->addWidget(ManipSetPosQMoveIncButt, 2, 4, 1, 1);

        ManipSetPosQ4DoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        ManipSetPosQ4DoubleSpinBox->setObjectName(QString::fromUtf8("ManipSetPosQ4DoubleSpinBox"));
        sizePolicy5.setHeightForWidth(ManipSetPosQ4DoubleSpinBox->sizePolicy().hasHeightForWidth());
        ManipSetPosQ4DoubleSpinBox->setSizePolicy(sizePolicy5);
        ManipSetPosQ4DoubleSpinBox->setFont(font3);
        ManipSetPosQ4DoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ManipSetPosQ4DoubleSpinBox->setDecimals(2);
        ManipSetPosQ4DoubleSpinBox->setMinimum(-3.120000000000000);
        ManipSetPosQ4DoubleSpinBox->setMaximum(3.200000000000000);
        ManipSetPosQ4DoubleSpinBox->setSingleStep(0.100000000000000);
        ManipSetPosQ4DoubleSpinBox->setValue(0.000000000000000);

        gridLayout_17->addWidget(ManipSetPosQ4DoubleSpinBox, 2, 1, 1, 1);

        tabWidget->addTab(TabManip, QString());
        tabLaboratory = new QWidget();
        tabLaboratory->setObjectName(QString::fromUtf8("tabLaboratory"));
        gridLayoutWidget_4 = new QWidget(tabLaboratory);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(0, 0, 571, 611));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 3, 3, 3);
        LabSpeed1Slider = new QSlider(gridLayoutWidget_4);
        LabSpeed1Slider->setObjectName(QString::fromUtf8("LabSpeed1Slider"));
        sizePolicy4.setHeightForWidth(LabSpeed1Slider->sizePolicy().hasHeightForWidth());
        LabSpeed1Slider->setSizePolicy(sizePolicy4);
        LabSpeed1Slider->setMinimum(-100);
        LabSpeed1Slider->setMaximum(100);
        LabSpeed1Slider->setOrientation(Qt::Vertical);
        LabSpeed1Slider->setTickPosition(QSlider::TicksBothSides);

        gridLayout_4->addWidget(LabSpeed1Slider, 8, 1, 1, 1);

        LabSpeed0Slider = new QSlider(gridLayoutWidget_4);
        LabSpeed0Slider->setObjectName(QString::fromUtf8("LabSpeed0Slider"));
        sizePolicy4.setHeightForWidth(LabSpeed0Slider->sizePolicy().hasHeightForWidth());
        LabSpeed0Slider->setSizePolicy(sizePolicy4);
        LabSpeed0Slider->setMinimum(-100);
        LabSpeed0Slider->setMaximum(100);
        LabSpeed0Slider->setOrientation(Qt::Vertical);
        LabSpeed0Slider->setTickPosition(QSlider::TicksBothSides);

        gridLayout_4->addWidget(LabSpeed0Slider, 8, 0, 1, 1);

        LabSpeed2IncButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed2IncButton->setObjectName(QString::fromUtf8("LabSpeed2IncButton"));

        gridLayout_4->addWidget(LabSpeed2IncButton, 4, 2, 1, 1);

        Lab2LineEdit = new QLineEdit(gridLayoutWidget_4);
        Lab2LineEdit->setObjectName(QString::fromUtf8("Lab2LineEdit"));
        sizePolicy.setHeightForWidth(Lab2LineEdit->sizePolicy().hasHeightForWidth());
        Lab2LineEdit->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setWeight(50);
        font5.setKerning(true);
        Lab2LineEdit->setFont(font5);
        Lab2LineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(Lab2LineEdit, 3, 2, 1, 1);

        LabSpeed2Slider = new QSlider(gridLayoutWidget_4);
        LabSpeed2Slider->setObjectName(QString::fromUtf8("LabSpeed2Slider"));
        sizePolicy4.setHeightForWidth(LabSpeed2Slider->sizePolicy().hasHeightForWidth());
        LabSpeed2Slider->setSizePolicy(sizePolicy4);
        LabSpeed2Slider->setMinimum(-100);
        LabSpeed2Slider->setMaximum(100);
        LabSpeed2Slider->setOrientation(Qt::Vertical);
        LabSpeed2Slider->setTickPosition(QSlider::TicksBothSides);

        gridLayout_4->addWidget(LabSpeed2Slider, 8, 2, 1, 1);

        LabCur0ProgressBar = new QProgressBar(gridLayoutWidget_4);
        LabCur0ProgressBar->setObjectName(QString::fromUtf8("LabCur0ProgressBar"));
        sizePolicy1.setHeightForWidth(LabCur0ProgressBar->sizePolicy().hasHeightForWidth());
        LabCur0ProgressBar->setSizePolicy(sizePolicy1);
        LabCur0ProgressBar->setMaximum(50);
        LabCur0ProgressBar->setValue(0);
        LabCur0ProgressBar->setAlignment(Qt::AlignCenter);
        LabCur0ProgressBar->setTextVisible(true);
        LabCur0ProgressBar->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(LabCur0ProgressBar, 2, 0, 1, 1);

        LabSpeed3DecButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed3DecButton->setObjectName(QString::fromUtf8("LabSpeed3DecButton"));
        sizePolicy1.setHeightForWidth(LabSpeed3DecButton->sizePolicy().hasHeightForWidth());
        LabSpeed3DecButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed3DecButton, 6, 3, 1, 1);

        LabCur3ProgressBar = new QProgressBar(gridLayoutWidget_4);
        LabCur3ProgressBar->setObjectName(QString::fromUtf8("LabCur3ProgressBar"));
        sizePolicy1.setHeightForWidth(LabCur3ProgressBar->sizePolicy().hasHeightForWidth());
        LabCur3ProgressBar->setSizePolicy(sizePolicy1);
        LabCur3ProgressBar->setMaximum(50);
        LabCur3ProgressBar->setValue(0);
        LabCur3ProgressBar->setAlignment(Qt::AlignCenter);
        LabCur3ProgressBar->setTextVisible(true);
        LabCur3ProgressBar->setOrientation(Qt::Horizontal);
        LabCur3ProgressBar->setInvertedAppearance(false);
        LabCur3ProgressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_4->addWidget(LabCur3ProgressBar, 2, 3, 1, 1);

        LabSpeed1LineEdit = new QLineEdit(gridLayoutWidget_4);
        LabSpeed1LineEdit->setObjectName(QString::fromUtf8("LabSpeed1LineEdit"));
        sizePolicy.setHeightForWidth(LabSpeed1LineEdit->sizePolicy().hasHeightForWidth());
        LabSpeed1LineEdit->setSizePolicy(sizePolicy);
        LabSpeed1LineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LabSpeed1LineEdit, 7, 1, 1, 1);

        LabSpeed3LineEdit = new QLineEdit(gridLayoutWidget_4);
        LabSpeed3LineEdit->setObjectName(QString::fromUtf8("LabSpeed3LineEdit"));
        sizePolicy.setHeightForWidth(LabSpeed3LineEdit->sizePolicy().hasHeightForWidth());
        LabSpeed3LineEdit->setSizePolicy(sizePolicy);
        LabSpeed3LineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LabSpeed3LineEdit, 7, 3, 1, 1);

        LabCur1ProgressBar = new QProgressBar(gridLayoutWidget_4);
        LabCur1ProgressBar->setObjectName(QString::fromUtf8("LabCur1ProgressBar"));
        sizePolicy1.setHeightForWidth(LabCur1ProgressBar->sizePolicy().hasHeightForWidth());
        LabCur1ProgressBar->setSizePolicy(sizePolicy1);
        LabCur1ProgressBar->setMaximum(50);
        LabCur1ProgressBar->setValue(0);
        LabCur1ProgressBar->setAlignment(Qt::AlignCenter);
        LabCur1ProgressBar->setTextVisible(true);
        LabCur1ProgressBar->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(LabCur1ProgressBar, 2, 1, 1, 1);

        LabSpeed1IncButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed1IncButton->setObjectName(QString::fromUtf8("LabSpeed1IncButton"));

        gridLayout_4->addWidget(LabSpeed1IncButton, 4, 1, 1, 1);

        LabSpeed1DecButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed1DecButton->setObjectName(QString::fromUtf8("LabSpeed1DecButton"));
        sizePolicy1.setHeightForWidth(LabSpeed1DecButton->sizePolicy().hasHeightForWidth());
        LabSpeed1DecButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed1DecButton, 6, 1, 1, 1);

        LabSpeed2ZeroButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed2ZeroButton->setObjectName(QString::fromUtf8("LabSpeed2ZeroButton"));
        sizePolicy1.setHeightForWidth(LabSpeed2ZeroButton->sizePolicy().hasHeightForWidth());
        LabSpeed2ZeroButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed2ZeroButton, 5, 2, 1, 1);

        LabSpeed1ZeroButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed1ZeroButton->setObjectName(QString::fromUtf8("LabSpeed1ZeroButton"));
        sizePolicy1.setHeightForWidth(LabSpeed1ZeroButton->sizePolicy().hasHeightForWidth());
        LabSpeed1ZeroButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed1ZeroButton, 5, 1, 1, 1);

        LabSpeed0DecButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed0DecButton->setObjectName(QString::fromUtf8("LabSpeed0DecButton"));
        sizePolicy1.setHeightForWidth(LabSpeed0DecButton->sizePolicy().hasHeightForWidth());
        LabSpeed0DecButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed0DecButton, 6, 0, 1, 1);

        LabSpeed3IncButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed3IncButton->setObjectName(QString::fromUtf8("LabSpeed3IncButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(LabSpeed3IncButton->sizePolicy().hasHeightForWidth());
        LabSpeed3IncButton->setSizePolicy(sizePolicy6);

        gridLayout_4->addWidget(LabSpeed3IncButton, 4, 3, 1, 1);

        LabSpeed0LineEdit = new QLineEdit(gridLayoutWidget_4);
        LabSpeed0LineEdit->setObjectName(QString::fromUtf8("LabSpeed0LineEdit"));
        sizePolicy.setHeightForWidth(LabSpeed0LineEdit->sizePolicy().hasHeightForWidth());
        LabSpeed0LineEdit->setSizePolicy(sizePolicy);
        LabSpeed0LineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LabSpeed0LineEdit, 7, 0, 1, 1);

        LabSpeed3ZeroButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed3ZeroButton->setObjectName(QString::fromUtf8("LabSpeed3ZeroButton"));
        sizePolicy1.setHeightForWidth(LabSpeed3ZeroButton->sizePolicy().hasHeightForWidth());
        LabSpeed3ZeroButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed3ZeroButton, 5, 3, 1, 1);

        LabSpeed2LineEdit = new QLineEdit(gridLayoutWidget_4);
        LabSpeed2LineEdit->setObjectName(QString::fromUtf8("LabSpeed2LineEdit"));
        sizePolicy.setHeightForWidth(LabSpeed2LineEdit->sizePolicy().hasHeightForWidth());
        LabSpeed2LineEdit->setSizePolicy(sizePolicy);
        LabSpeed2LineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(LabSpeed2LineEdit, 7, 2, 1, 1);

        Lab1LineEdit = new QLineEdit(gridLayoutWidget_4);
        Lab1LineEdit->setObjectName(QString::fromUtf8("Lab1LineEdit"));
        sizePolicy.setHeightForWidth(Lab1LineEdit->sizePolicy().hasHeightForWidth());
        Lab1LineEdit->setSizePolicy(sizePolicy);
        Lab1LineEdit->setFont(font5);
        Lab1LineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(Lab1LineEdit, 3, 1, 1, 1);

        LabSpeed0ZeroButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed0ZeroButton->setObjectName(QString::fromUtf8("LabSpeed0ZeroButton"));
        sizePolicy1.setHeightForWidth(LabSpeed0ZeroButton->sizePolicy().hasHeightForWidth());
        LabSpeed0ZeroButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed0ZeroButton, 5, 0, 1, 1);

        LabSpeed2DecButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed2DecButton->setObjectName(QString::fromUtf8("LabSpeed2DecButton"));
        sizePolicy1.setHeightForWidth(LabSpeed2DecButton->sizePolicy().hasHeightForWidth());
        LabSpeed2DecButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(LabSpeed2DecButton, 6, 2, 1, 1);

        LabSpeed0IncButton = new QPushButton(gridLayoutWidget_4);
        LabSpeed0IncButton->setObjectName(QString::fromUtf8("LabSpeed0IncButton"));
        LabSpeed0IncButton->setAutoDefault(false);
        LabSpeed0IncButton->setFlat(false);

        gridLayout_4->addWidget(LabSpeed0IncButton, 4, 0, 1, 1);

        Lab3LineEdit = new QLineEdit(gridLayoutWidget_4);
        Lab3LineEdit->setObjectName(QString::fromUtf8("Lab3LineEdit"));
        sizePolicy.setHeightForWidth(Lab3LineEdit->sizePolicy().hasHeightForWidth());
        Lab3LineEdit->setSizePolicy(sizePolicy);
        Lab3LineEdit->setFont(font5);
        Lab3LineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(Lab3LineEdit, 3, 3, 1, 1);

        LabCur2ProgressBar = new QProgressBar(gridLayoutWidget_4);
        LabCur2ProgressBar->setObjectName(QString::fromUtf8("LabCur2ProgressBar"));
        sizePolicy1.setHeightForWidth(LabCur2ProgressBar->sizePolicy().hasHeightForWidth());
        LabCur2ProgressBar->setSizePolicy(sizePolicy1);
        LabCur2ProgressBar->setMaximum(50);
        LabCur2ProgressBar->setValue(0);
        LabCur2ProgressBar->setAlignment(Qt::AlignCenter);
        LabCur2ProgressBar->setTextVisible(true);
        LabCur2ProgressBar->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(LabCur2ProgressBar, 2, 2, 1, 1);

        LabSpeed3Slider = new QSlider(gridLayoutWidget_4);
        LabSpeed3Slider->setObjectName(QString::fromUtf8("LabSpeed3Slider"));
        sizePolicy4.setHeightForWidth(LabSpeed3Slider->sizePolicy().hasHeightForWidth());
        LabSpeed3Slider->setSizePolicy(sizePolicy4);
        LabSpeed3Slider->setMinimum(-100);
        LabSpeed3Slider->setMaximum(100);
        LabSpeed3Slider->setOrientation(Qt::Vertical);
        LabSpeed3Slider->setTickPosition(QSlider::TicksBothSides);

        gridLayout_4->addWidget(LabSpeed3Slider, 8, 3, 1, 1);

        Lab0LineEdit = new QLineEdit(gridLayoutWidget_4);
        Lab0LineEdit->setObjectName(QString::fromUtf8("Lab0LineEdit"));
        sizePolicy.setHeightForWidth(Lab0LineEdit->sizePolicy().hasHeightForWidth());
        Lab0LineEdit->setSizePolicy(sizePolicy);
        Lab0LineEdit->setFont(font5);
        Lab0LineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(Lab0LineEdit, 3, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(tabLaboratory);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(580, 0, 701, 217));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        Lab3EnableLimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab3EnableLimitsButton->setObjectName(QString::fromUtf8("Lab3EnableLimitsButton"));
        sizePolicy1.setHeightForWidth(Lab3EnableLimitsButton->sizePolicy().hasHeightForWidth());
        Lab3EnableLimitsButton->setSizePolicy(sizePolicy1);
        Lab3EnableLimitsButton->setFont(font3);
        Lab3EnableLimitsButton->setAutoDefault(false);
        Lab3EnableLimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab3EnableLimitsButton, 1, 3, 1, 1);

        Lab2DisableimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab2DisableimitsButton->setObjectName(QString::fromUtf8("Lab2DisableimitsButton"));
        sizePolicy1.setHeightForWidth(Lab2DisableimitsButton->sizePolicy().hasHeightForWidth());
        Lab2DisableimitsButton->setSizePolicy(sizePolicy1);
        Lab2DisableimitsButton->setFont(font3);
        Lab2DisableimitsButton->setAutoDefault(false);
        Lab2DisableimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab2DisableimitsButton, 2, 2, 1, 1);

        Lab0DisableimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab0DisableimitsButton->setObjectName(QString::fromUtf8("Lab0DisableimitsButton"));
        sizePolicy1.setHeightForWidth(Lab0DisableimitsButton->sizePolicy().hasHeightForWidth());
        Lab0DisableimitsButton->setSizePolicy(sizePolicy1);
        Lab0DisableimitsButton->setFont(font3);
        Lab0DisableimitsButton->setAutoDefault(false);
        Lab0DisableimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab0DisableimitsButton, 2, 0, 1, 1);

        Lab3DisableimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab3DisableimitsButton->setObjectName(QString::fromUtf8("Lab3DisableimitsButton"));
        sizePolicy1.setHeightForWidth(Lab3DisableimitsButton->sizePolicy().hasHeightForWidth());
        Lab3DisableimitsButton->setSizePolicy(sizePolicy1);
        Lab3DisableimitsButton->setFont(font3);
        Lab3DisableimitsButton->setAutoDefault(false);
        Lab3DisableimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab3DisableimitsButton, 2, 3, 1, 1);

        Lab2EnableLimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab2EnableLimitsButton->setObjectName(QString::fromUtf8("Lab2EnableLimitsButton"));
        sizePolicy1.setHeightForWidth(Lab2EnableLimitsButton->sizePolicy().hasHeightForWidth());
        Lab2EnableLimitsButton->setSizePolicy(sizePolicy1);
        Lab2EnableLimitsButton->setFont(font3);
        Lab2EnableLimitsButton->setAutoDefault(false);
        Lab2EnableLimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab2EnableLimitsButton, 1, 2, 1, 1);

        Lab3SetHomePosButton = new QPushButton(gridLayoutWidget_5);
        Lab3SetHomePosButton->setObjectName(QString::fromUtf8("Lab3SetHomePosButton"));
        sizePolicy1.setHeightForWidth(Lab3SetHomePosButton->sizePolicy().hasHeightForWidth());
        Lab3SetHomePosButton->setSizePolicy(sizePolicy1);
        Lab3SetHomePosButton->setFont(font3);
        Lab3SetHomePosButton->setAutoDefault(false);
        Lab3SetHomePosButton->setFlat(false);

        gridLayout_5->addWidget(Lab3SetHomePosButton, 0, 3, 1, 1);

        Lab0EnableLimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab0EnableLimitsButton->setObjectName(QString::fromUtf8("Lab0EnableLimitsButton"));
        sizePolicy1.setHeightForWidth(Lab0EnableLimitsButton->sizePolicy().hasHeightForWidth());
        Lab0EnableLimitsButton->setSizePolicy(sizePolicy1);
        Lab0EnableLimitsButton->setFont(font3);
        Lab0EnableLimitsButton->setAutoDefault(false);
        Lab0EnableLimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab0EnableLimitsButton, 1, 0, 1, 1);

        Lab1EnableLimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab1EnableLimitsButton->setObjectName(QString::fromUtf8("Lab1EnableLimitsButton"));
        sizePolicy1.setHeightForWidth(Lab1EnableLimitsButton->sizePolicy().hasHeightForWidth());
        Lab1EnableLimitsButton->setSizePolicy(sizePolicy1);
        Lab1EnableLimitsButton->setFont(font3);
        Lab1EnableLimitsButton->setAutoDefault(false);
        Lab1EnableLimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab1EnableLimitsButton, 1, 1, 1, 1);

        Lab1DisableimitsButton = new QPushButton(gridLayoutWidget_5);
        Lab1DisableimitsButton->setObjectName(QString::fromUtf8("Lab1DisableimitsButton"));
        sizePolicy1.setHeightForWidth(Lab1DisableimitsButton->sizePolicy().hasHeightForWidth());
        Lab1DisableimitsButton->setSizePolicy(sizePolicy1);
        Lab1DisableimitsButton->setFont(font3);
        Lab1DisableimitsButton->setAutoDefault(false);
        Lab1DisableimitsButton->setFlat(false);

        gridLayout_5->addWidget(Lab1DisableimitsButton, 2, 1, 1, 1);

        Lab1SetHomePosButton = new QPushButton(gridLayoutWidget_5);
        Lab1SetHomePosButton->setObjectName(QString::fromUtf8("Lab1SetHomePosButton"));
        sizePolicy1.setHeightForWidth(Lab1SetHomePosButton->sizePolicy().hasHeightForWidth());
        Lab1SetHomePosButton->setSizePolicy(sizePolicy1);
        Lab1SetHomePosButton->setFont(font3);
        Lab1SetHomePosButton->setAutoDefault(false);
        Lab1SetHomePosButton->setFlat(false);

        gridLayout_5->addWidget(Lab1SetHomePosButton, 0, 1, 1, 1);

        Lab2SetHomePosButton = new QPushButton(gridLayoutWidget_5);
        Lab2SetHomePosButton->setObjectName(QString::fromUtf8("Lab2SetHomePosButton"));
        sizePolicy1.setHeightForWidth(Lab2SetHomePosButton->sizePolicy().hasHeightForWidth());
        Lab2SetHomePosButton->setSizePolicy(sizePolicy1);
        Lab2SetHomePosButton->setFont(font3);
        Lab2SetHomePosButton->setAutoDefault(false);
        Lab2SetHomePosButton->setFlat(false);

        gridLayout_5->addWidget(Lab2SetHomePosButton, 0, 2, 1, 1);

        Lab0SetHomePosButton = new QPushButton(gridLayoutWidget_5);
        Lab0SetHomePosButton->setObjectName(QString::fromUtf8("Lab0SetHomePosButton"));
        sizePolicy1.setHeightForWidth(Lab0SetHomePosButton->sizePolicy().hasHeightForWidth());
        Lab0SetHomePosButton->setSizePolicy(sizePolicy1);
        Lab0SetHomePosButton->setFont(font3);
        Lab0SetHomePosButton->setAutoDefault(false);
        Lab0SetHomePosButton->setFlat(false);

        gridLayout_5->addWidget(Lab0SetHomePosButton, 0, 0, 1, 1);

        LabDisablePIDButton = new QPushButton(gridLayoutWidget_5);
        LabDisablePIDButton->setObjectName(QString::fromUtf8("LabDisablePIDButton"));
        sizePolicy1.setHeightForWidth(LabDisablePIDButton->sizePolicy().hasHeightForWidth());
        LabDisablePIDButton->setSizePolicy(sizePolicy1);
        LabDisablePIDButton->setFont(font3);
        LabDisablePIDButton->setAutoDefault(false);
        LabDisablePIDButton->setFlat(false);

        gridLayout_5->addWidget(LabDisablePIDButton, 3, 2, 1, 2);

        LabEnablePIDButton = new QPushButton(gridLayoutWidget_5);
        LabEnablePIDButton->setObjectName(QString::fromUtf8("LabEnablePIDButton"));
        sizePolicy1.setHeightForWidth(LabEnablePIDButton->sizePolicy().hasHeightForWidth());
        LabEnablePIDButton->setSizePolicy(sizePolicy1);
        LabEnablePIDButton->setFont(font3);
        LabEnablePIDButton->setAutoDefault(false);
        LabEnablePIDButton->setFlat(false);

        gridLayout_5->addWidget(LabEnablePIDButton, 3, 0, 1, 2);

        gridLayoutWidget_6 = new QWidget(tabLaboratory);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(580, 220, 704, 411));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(3, 3, 3, 3);
        LabNeutralPositionButton = new QPushButton(gridLayoutWidget_6);
        LabNeutralPositionButton->setObjectName(QString::fromUtf8("LabNeutralPositionButton"));
        sizePolicy1.setHeightForWidth(LabNeutralPositionButton->sizePolicy().hasHeightForWidth());
        LabNeutralPositionButton->setSizePolicy(sizePolicy1);
        LabNeutralPositionButton->setFont(font3);
        LabNeutralPositionButton->setAutoDefault(false);
        LabNeutralPositionButton->setFlat(false);

        gridLayout_6->addWidget(LabNeutralPositionButton, 2, 1, 1, 2);

        LabLuminometrCloseButton = new QPushButton(gridLayoutWidget_6);
        LabLuminometrCloseButton->setObjectName(QString::fromUtf8("LabLuminometrCloseButton"));
        sizePolicy1.setHeightForWidth(LabLuminometrCloseButton->sizePolicy().hasHeightForWidth());
        LabLuminometrCloseButton->setSizePolicy(sizePolicy1);
        LabLuminometrCloseButton->setFont(font3);
        LabLuminometrCloseButton->setAutoDefault(false);
        LabLuminometrCloseButton->setFlat(false);

        gridLayout_6->addWidget(LabLuminometrCloseButton, 1, 3, 1, 1);

        LabSequencePreviousButton = new QPushButton(gridLayoutWidget_6);
        LabSequencePreviousButton->setObjectName(QString::fromUtf8("LabSequencePreviousButton"));
        sizePolicy1.setHeightForWidth(LabSequencePreviousButton->sizePolicy().hasHeightForWidth());
        LabSequencePreviousButton->setSizePolicy(sizePolicy1);
        LabSequencePreviousButton->setFont(font3);
        LabSequencePreviousButton->setAutoDefault(false);
        LabSequencePreviousButton->setFlat(false);

        gridLayout_6->addWidget(LabSequencePreviousButton, 7, 2, 1, 1);

        LabGripperCloseButton_2 = new QPushButton(gridLayoutWidget_6);
        LabGripperCloseButton_2->setObjectName(QString::fromUtf8("LabGripperCloseButton_2"));
        sizePolicy1.setHeightForWidth(LabGripperCloseButton_2->sizePolicy().hasHeightForWidth());
        LabGripperCloseButton_2->setSizePolicy(sizePolicy1);
        LabGripperCloseButton_2->setFont(font3);
        LabGripperCloseButton_2->setAutoDefault(false);
        LabGripperCloseButton_2->setFlat(false);

        gridLayout_6->addWidget(LabGripperCloseButton_2, 1, 1, 1, 1);

        LabSequenceNextButton = new QPushButton(gridLayoutWidget_6);
        LabSequenceNextButton->setObjectName(QString::fromUtf8("LabSequenceNextButton"));
        sizePolicy1.setHeightForWidth(LabSequenceNextButton->sizePolicy().hasHeightForWidth());
        LabSequenceNextButton->setSizePolicy(sizePolicy1);
        LabSequenceNextButton->setFont(font3);
        LabSequenceNextButton->setAutoDefault(false);
        LabSequenceNextButton->setFlat(false);

        gridLayout_6->addWidget(LabSequenceNextButton, 7, 3, 1, 1);

        LabTurnOnOffLuminometerButton = new QPushButton(gridLayoutWidget_6);
        LabTurnOnOffLuminometerButton->setObjectName(QString::fromUtf8("LabTurnOnOffLuminometerButton"));
        sizePolicy1.setHeightForWidth(LabTurnOnOffLuminometerButton->sizePolicy().hasHeightForWidth());
        LabTurnOnOffLuminometerButton->setSizePolicy(sizePolicy1);
        LabTurnOnOffLuminometerButton->setFont(font3);
        LabTurnOnOffLuminometerButton->setAutoDefault(false);
        LabTurnOnOffLuminometerButton->setFlat(false);

        gridLayout_6->addWidget(LabTurnOnOffLuminometerButton, 2, 3, 1, 1);

        LabStartSequenceButton = new QPushButton(gridLayoutWidget_6);
        LabStartSequenceButton->setObjectName(QString::fromUtf8("LabStartSequenceButton"));
        sizePolicy1.setHeightForWidth(LabStartSequenceButton->sizePolicy().hasHeightForWidth());
        LabStartSequenceButton->setSizePolicy(sizePolicy1);
        LabStartSequenceButton->setFont(font3);
        LabStartSequenceButton->setAutoDefault(false);
        LabStartSequenceButton->setFlat(false);

        gridLayout_6->addWidget(LabStartSequenceButton, 7, 0, 1, 1);

        LabGripperOpenButton = new QPushButton(gridLayoutWidget_6);
        LabGripperOpenButton->setObjectName(QString::fromUtf8("LabGripperOpenButton"));
        sizePolicy1.setHeightForWidth(LabGripperOpenButton->sizePolicy().hasHeightForWidth());
        LabGripperOpenButton->setSizePolicy(sizePolicy1);
        LabGripperOpenButton->setFont(font3);
        LabGripperOpenButton->setAutoDefault(false);
        LabGripperOpenButton->setFlat(false);

        gridLayout_6->addWidget(LabGripperOpenButton, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_7 = new QLabel(gridLayoutWidget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy7);
        label_7->setFont(font1);

        gridLayout_7->addWidget(label_7, 0, 0, 1, 1);

        LabNumberOfSequenceSpinBox = new QSpinBox(gridLayoutWidget_6);
        LabNumberOfSequenceSpinBox->setObjectName(QString::fromUtf8("LabNumberOfSequenceSpinBox"));
        LabNumberOfSequenceSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(LabNumberOfSequenceSpinBox->sizePolicy().hasHeightForWidth());
        LabNumberOfSequenceSpinBox->setSizePolicy(sizePolicy1);
        LabNumberOfSequenceSpinBox->setMinimum(0);
        LabNumberOfSequenceSpinBox->setMaximum(7);
        LabNumberOfSequenceSpinBox->setSingleStep(1);
        LabNumberOfSequenceSpinBox->setValue(0);

        gridLayout_7->addWidget(LabNumberOfSequenceSpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 7, 1, 1, 1);

        LabLuminometrOpenButton = new QPushButton(gridLayoutWidget_6);
        LabLuminometrOpenButton->setObjectName(QString::fromUtf8("LabLuminometrOpenButton"));
        sizePolicy1.setHeightForWidth(LabLuminometrOpenButton->sizePolicy().hasHeightForWidth());
        LabLuminometrOpenButton->setSizePolicy(sizePolicy1);
        LabLuminometrOpenButton->setFont(font3);
        LabLuminometrOpenButton->setAutoDefault(false);
        LabLuminometrOpenButton->setFlat(false);

        gridLayout_6->addWidget(LabLuminometrOpenButton, 1, 2, 1, 1);

        LabGoToSwabXYButton = new QPushButton(gridLayoutWidget_6);
        LabGoToSwabXYButton->setObjectName(QString::fromUtf8("LabGoToSwabXYButton"));
        sizePolicy1.setHeightForWidth(LabGoToSwabXYButton->sizePolicy().hasHeightForWidth());
        LabGoToSwabXYButton->setSizePolicy(sizePolicy1);
        LabGoToSwabXYButton->setFont(font3);
        LabGoToSwabXYButton->setAutoDefault(false);
        LabGoToSwabXYButton->setFlat(false);

        gridLayout_6->addWidget(LabGoToSwabXYButton, 5, 0, 1, 1);

        LabStartMeasurementButton = new QPushButton(gridLayoutWidget_6);
        LabStartMeasurementButton->setObjectName(QString::fromUtf8("LabStartMeasurementButton"));
        sizePolicy1.setHeightForWidth(LabStartMeasurementButton->sizePolicy().hasHeightForWidth());
        LabStartMeasurementButton->setSizePolicy(sizePolicy1);
        LabStartMeasurementButton->setFont(font3);
        LabStartMeasurementButton->setAutoDefault(false);
        LabStartMeasurementButton->setFlat(false);

        gridLayout_6->addWidget(LabStartMeasurementButton, 2, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_6 = new QLabel(gridLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy7.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy7);
        label_6->setFont(font1);

        gridLayout_10->addWidget(label_6, 0, 0, 1, 1);

        LabNumberOfSwabSpinBox = new QSpinBox(gridLayoutWidget_6);
        LabNumberOfSwabSpinBox->setObjectName(QString::fromUtf8("LabNumberOfSwabSpinBox"));
        LabNumberOfSwabSpinBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(LabNumberOfSwabSpinBox->sizePolicy().hasHeightForWidth());
        LabNumberOfSwabSpinBox->setSizePolicy(sizePolicy1);
        LabNumberOfSwabSpinBox->setMinimum(0);
        LabNumberOfSwabSpinBox->setMaximum(9);
        LabNumberOfSwabSpinBox->setSingleStep(1);
        LabNumberOfSwabSpinBox->setValue(0);

        gridLayout_10->addWidget(LabNumberOfSwabSpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_10, 5, 1, 1, 1);

        LabMoveZLumiButton = new QPushButton(gridLayoutWidget_6);
        LabMoveZLumiButton->setObjectName(QString::fromUtf8("LabMoveZLumiButton"));
        sizePolicy1.setHeightForWidth(LabMoveZLumiButton->sizePolicy().hasHeightForWidth());
        LabMoveZLumiButton->setSizePolicy(sizePolicy1);
        LabMoveZLumiButton->setFont(font3);
        LabMoveZLumiButton->setAutoDefault(false);
        LabMoveZLumiButton->setFlat(false);

        gridLayout_6->addWidget(LabMoveZLumiButton, 4, 2, 1, 1);

        LabMoveXYLumiButton = new QPushButton(gridLayoutWidget_6);
        LabMoveXYLumiButton->setObjectName(QString::fromUtf8("LabMoveXYLumiButton"));
        sizePolicy1.setHeightForWidth(LabMoveXYLumiButton->sizePolicy().hasHeightForWidth());
        LabMoveXYLumiButton->setSizePolicy(sizePolicy1);
        LabMoveXYLumiButton->setFont(font3);
        LabMoveXYLumiButton->setAutoDefault(false);
        LabMoveXYLumiButton->setFlat(false);

        gridLayout_6->addWidget(LabMoveXYLumiButton, 5, 2, 1, 1);

        LabMoveZMeasButton = new QPushButton(gridLayoutWidget_6);
        LabMoveZMeasButton->setObjectName(QString::fromUtf8("LabMoveZMeasButton"));
        sizePolicy1.setHeightForWidth(LabMoveZMeasButton->sizePolicy().hasHeightForWidth());
        LabMoveZMeasButton->setSizePolicy(sizePolicy1);
        LabMoveZMeasButton->setFont(font3);
        LabMoveZMeasButton->setAutoDefault(false);
        LabMoveZMeasButton->setFlat(false);

        gridLayout_6->addWidget(LabMoveZMeasButton, 4, 3, 1, 1);

        LabMoveXYMeasButton = new QPushButton(gridLayoutWidget_6);
        LabMoveXYMeasButton->setObjectName(QString::fromUtf8("LabMoveXYMeasButton"));
        sizePolicy1.setHeightForWidth(LabMoveXYMeasButton->sizePolicy().hasHeightForWidth());
        LabMoveXYMeasButton->setSizePolicy(sizePolicy1);
        LabMoveXYMeasButton->setFont(font3);
        LabMoveXYMeasButton->setAutoDefault(false);
        LabMoveXYMeasButton->setFlat(false);

        gridLayout_6->addWidget(LabMoveXYMeasButton, 5, 3, 1, 1);

        LabRemoteControlButton = new QPushButton(gridLayoutWidget_6);
        LabRemoteControlButton->setObjectName(QString::fromUtf8("LabRemoteControlButton"));
        sizePolicy1.setHeightForWidth(LabRemoteControlButton->sizePolicy().hasHeightForWidth());
        LabRemoteControlButton->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setPointSize(20);
        font6.setBold(false);
        font6.setWeight(50);
        font6.setKerning(true);
        LabRemoteControlButton->setFont(font6);
        LabRemoteControlButton->setAutoDefault(false);
        LabRemoteControlButton->setFlat(false);

        gridLayout_6->addWidget(LabRemoteControlButton, 0, 0, 1, 4);

        LabLumiVerticalPosButton = new QPushButton(gridLayoutWidget_6);
        LabLumiVerticalPosButton->setObjectName(QString::fromUtf8("LabLumiVerticalPosButton"));
        sizePolicy1.setHeightForWidth(LabLumiVerticalPosButton->sizePolicy().hasHeightForWidth());
        LabLumiVerticalPosButton->setSizePolicy(sizePolicy1);
        LabLumiVerticalPosButton->setFont(font3);
        LabLumiVerticalPosButton->setAutoDefault(false);
        LabLumiVerticalPosButton->setFlat(false);

        gridLayout_6->addWidget(LabLumiVerticalPosButton, 3, 3, 1, 1);

        LabLumiDiscardSwabButton = new QPushButton(gridLayoutWidget_6);
        LabLumiDiscardSwabButton->setObjectName(QString::fromUtf8("LabLumiDiscardSwabButton"));
        sizePolicy1.setHeightForWidth(LabLumiDiscardSwabButton->sizePolicy().hasHeightForWidth());
        LabLumiDiscardSwabButton->setSizePolicy(sizePolicy1);
        LabLumiDiscardSwabButton->setFont(font3);
        LabLumiDiscardSwabButton->setAutoDefault(false);
        LabLumiDiscardSwabButton->setFlat(false);

        gridLayout_6->addWidget(LabLumiDiscardSwabButton, 3, 2, 1, 1);

        LabMoveZSwab2Button = new QPushButton(gridLayoutWidget_6);
        LabMoveZSwab2Button->setObjectName(QString::fromUtf8("LabMoveZSwab2Button"));
        sizePolicy1.setHeightForWidth(LabMoveZSwab2Button->sizePolicy().hasHeightForWidth());
        LabMoveZSwab2Button->setSizePolicy(sizePolicy1);
        LabMoveZSwab2Button->setFont(font3);
        LabMoveZSwab2Button->setAutoDefault(false);
        LabMoveZSwab2Button->setFlat(false);

        gridLayout_6->addWidget(LabMoveZSwab2Button, 4, 0, 1, 1);

        LabMoveZSwabButton = new QPushButton(gridLayoutWidget_6);
        LabMoveZSwabButton->setObjectName(QString::fromUtf8("LabMoveZSwabButton"));
        sizePolicy1.setHeightForWidth(LabMoveZSwabButton->sizePolicy().hasHeightForWidth());
        LabMoveZSwabButton->setSizePolicy(sizePolicy1);
        LabMoveZSwabButton->setFont(font3);
        LabMoveZSwabButton->setAutoDefault(false);
        LabMoveZSwabButton->setFlat(false);

        gridLayout_6->addWidget(LabMoveZSwabButton, 3, 0, 1, 1);

        LabMoveZUpButton = new QPushButton(gridLayoutWidget_6);
        LabMoveZUpButton->setObjectName(QString::fromUtf8("LabMoveZUpButton"));
        sizePolicy1.setHeightForWidth(LabMoveZUpButton->sizePolicy().hasHeightForWidth());
        LabMoveZUpButton->setSizePolicy(sizePolicy1);
        LabMoveZUpButton->setFont(font3);
        LabMoveZUpButton->setAutoDefault(false);
        LabMoveZUpButton->setFlat(false);

        gridLayout_6->addWidget(LabMoveZUpButton, 3, 1, 2, 1);

        tabWidget->addTab(tabLaboratory, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        LabSpeed0IncButton->setDefault(false);
        Lab3EnableLimitsButton->setDefault(false);
        Lab2DisableimitsButton->setDefault(false);
        Lab0DisableimitsButton->setDefault(false);
        Lab3DisableimitsButton->setDefault(false);
        Lab2EnableLimitsButton->setDefault(false);
        Lab3SetHomePosButton->setDefault(false);
        Lab0EnableLimitsButton->setDefault(false);
        Lab1EnableLimitsButton->setDefault(false);
        Lab1DisableimitsButton->setDefault(false);
        Lab1SetHomePosButton->setDefault(false);
        Lab2SetHomePosButton->setDefault(false);
        Lab0SetHomePosButton->setDefault(false);
        LabDisablePIDButton->setDefault(false);
        LabEnablePIDButton->setDefault(false);
        LabNeutralPositionButton->setDefault(false);
        LabLuminometrCloseButton->setDefault(false);
        LabSequencePreviousButton->setDefault(false);
        LabGripperCloseButton_2->setDefault(false);
        LabSequenceNextButton->setDefault(false);
        LabTurnOnOffLuminometerButton->setDefault(false);
        LabStartSequenceButton->setDefault(false);
        LabGripperOpenButton->setDefault(false);
        LabLuminometrOpenButton->setDefault(false);
        LabGoToSwabXYButton->setDefault(false);
        LabStartMeasurementButton->setDefault(false);
        LabMoveZLumiButton->setDefault(false);
        LabMoveXYLumiButton->setDefault(false);
        LabMoveZMeasButton->setDefault(false);
        LabMoveXYMeasButton->setDefault(false);
        LabRemoteControlButton->setDefault(false);
        LabLumiVerticalPosButton->setDefault(false);
        LabLumiDiscardSwabButton->setDefault(false);
        LabMoveZSwab2Button->setDefault(false);
        LabMoveZSwabButton->setDefault(false);
        LabMoveZUpButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        WifiConnectButton->setText(QApplication::translate("MainWindow", "Wifi Connect", nullptr));
        WifiDisconnectButton->setText(QApplication::translate("MainWindow", "Wifi Disconnect", nullptr));
        WifiDriveFrameCHeckBox->setText(QApplication::translate("MainWindow", "Drive frame", nullptr));
        WifiManipFrameCHeckBox->setText(QApplication::translate("MainWindow", "Manip frame", nullptr));
        WifiLabFrameCHeckBox->setText(QApplication::translate("MainWindow", "Lab frame", nullptr));
        ComPortCloseButton->setText(QApplication::translate("MainWindow", "Close Com Port", nullptr));
        ComPortOpenButton->setText(QApplication::translate("MainWindow", "Open Com Port", nullptr));
        SerialDriveFrameCHeckBox->setText(QApplication::translate("MainWindow", "Drive frame", nullptr));
        SerialManipFrameCHeckBox->setText(QApplication::translate("MainWindow", "Manip frame", nullptr));
        SerialLabFrameCHeckBox->setText(QApplication::translate("MainWindow", "Lab frame", nullptr));
        ManipTelemetryMotposEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Manipulator\n"
"Motor pos Enable", nullptr));
        ManipTelemetryMotposDisableButton->setText(QApplication::translate("MainWindow", "Telemetry Manipulator\n"
"Motor pos Disable", nullptr));
        ManipTelemetryErrorsEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Manipulator\n"
"Errors Enable", nullptr));
        ManipTelemetryErrorsDisableButton->setText(QApplication::translate("MainWindow", "Telemetry Manipulator\n"
"Errors Disable", nullptr));
        ManipTelemetryAllEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Manipulator\n"
"All Enable", nullptr));
        ManipTelemetryAllDisableButton->setText(QApplication::translate("MainWindow", "Telemetry Manipulator\n"
"All Disable", nullptr));
        AutoTelemAllEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
" All Enable", nullptr));
        AutoTelemGpsEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
" GPS pos Enable", nullptr));
        AutoTelemAllEnableButton_2->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
" All Disable", nullptr));
        AutoTelemGpsDisableButton->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
"GPS pos Disable", nullptr));
        AutoTelemBallDisableButton->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
"Ball pos Disable", nullptr));
        AutoTelemBallEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
" Ball pos Enable", nullptr));
        AutoTelemErrorsEnableButton->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
" Errors Enable", nullptr));
        AutoTelemErrorsEnableButton_2->setText(QApplication::translate("MainWindow", "Telemetry Drive\n"
" Errors Disable", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Com", nullptr));
        DrivePitchLineEdit->setText(QApplication::translate("MainWindow", "pitch = 0", nullptr));
        DriveLonLineEdit->setText(QApplication::translate("MainWindow", "lon = 0", nullptr));
        DriveRollLineEdit->setText(QApplication::translate("MainWindow", "roll = 0", nullptr));
        DriveYawLineEdit->setText(QApplication::translate("MainWindow", "yaw = 0", nullptr));
        DriveLatLineEdit->setText(QApplication::translate("MainWindow", "lat = 0", nullptr));
        DriveCmdLineEdit->setText(QApplication::translate("MainWindow", "Rover status = ", nullptr));
        Cam2IncButton->setText(QApplication::translate("MainWindow", "Camera 2 +", nullptr));
        SelectWifi->setText(QApplication::translate("MainWindow", "Wifi", nullptr));
        Cam1DecButton->setText(QApplication::translate("MainWindow", "Camera 1 -", nullptr));
        Cam2DecButton->setText(QApplication::translate("MainWindow", "Camera 2 -", nullptr));
        AutoSetYawOffsetButton->setText(QApplication::translate("MainWindow", "Set Yaw Offset", nullptr));
        DriveMot1Error->setText(QApplication::translate("MainWindow", "Motor 1 Error", nullptr));
        DriveSoftwareEmergencyLed->setText(QApplication::translate("MainWindow", "Software Emergency", nullptr));
        AutoContinueButton->setText(QApplication::translate("MainWindow", "Auto Continue", nullptr));
        AutoNextButton->setText(QApplication::translate("MainWindow", "Auto Next", nullptr));
        AutoPauseButton->setText(QApplication::translate("MainWindow", "Auto Pause", nullptr));
        SelectSatel->setText(QApplication::translate("MainWindow", "Satel", nullptr));
        Cam1IncButton->setText(QApplication::translate("MainWindow", "Camera 1 +", nullptr));
        DriveMot3Error->setText(QApplication::translate("MainWindow", "Motor 3 Error", nullptr));
        DriveMot2Error->setText(QApplication::translate("MainWindow", "Motor 2 Error", nullptr));
        AutoSendPointsButton->setText(QApplication::translate("MainWindow", "Auto Send points", nullptr));
        DriveHardwareEmergencyLed->setText(QApplication::translate("MainWindow", "Hardware Emergency", nullptr));
        DriveMot0Error->setText(QApplication::translate("MainWindow", "Motor 0 Error", nullptr));
        AutoClearYawOffsetButton->setText(QApplication::translate("MainWindow", "Clear Yaw Offset", nullptr));
        SelectAutoNaviTypeErcRel->setText(QApplication::translate("MainWindow", "NaviType ERC Rel", nullptr));
        SelectAutoNaviTypeErcAbs->setText(QApplication::translate("MainWindow", "NaviType ERC Abs", nullptr));
        SelectAutoNaviTypeUrcRel->setText(QApplication::translate("MainWindow", "NaviType URC Rel", nullptr));
        SelectAutoNaviTypeUrcAbs->setText(QApplication::translate("MainWindow", "NaviType URC Abs", nullptr));
        FVLineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        DVLineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        S0LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        S1LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        S2LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        S3LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        RoverPosLogStop->setText(QApplication::translate("MainWindow", "Rover Pos Log Stop", nullptr));
        RoverPosLogStart->setText(QApplication::translate("MainWindow", "Rover Pos Log Start", nullptr));
        RoverPosClearTextBox->setText(QApplication::translate("MainWindow", "Clear Text Box", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TabDrive), QApplication::translate("MainWindow", "Drive", nullptr));
        ManipSpeed0LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSpeed1LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSpeed2LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSpeed3LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSpeed4LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSpeed5LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSpeed6LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        ManipSeq1Button->setText(QApplication::translate("MainWindow", "Sequence 1\n"
"Park", nullptr));
        ManipSeq10Button->setText(QApplication::translate("MainWindow", "Sequence 10\n"
"Wk\305\202adanie Cache 3", nullptr));
        ManipSeq11Button->setText(QApplication::translate("MainWindow", "Sequence 11", nullptr));
        ManipSeq2Button->setText(QApplication::translate("MainWindow", "Sequence 2\n"
"Work", nullptr));
        ManipSeq6Button->setText(QApplication::translate("MainWindow", "Sequence 6\n"
"Wyjmowanie Cache 3", nullptr));
        ManipSeq0Button->setText(QApplication::translate("MainWindow", "Sequence 0\n"
"Home", nullptr));
        ManipLaserOnButton->setText(QApplication::translate("MainWindow", "Laser On", nullptr));
        ManipSeq3Button->setText(QApplication::translate("MainWindow", "Sequence 3\n"
"Take", nullptr));
        ManipSolenoidOffButton->setText(QApplication::translate("MainWindow", "Solenoid Off", nullptr));
        ManipSeq4Button->setText(QApplication::translate("MainWindow", "Sequence 4\n"
"Wyjmowanie Cache 1", nullptr));
        ManipSeq7Button->setText(QApplication::translate("MainWindow", "Sequence 7\n"
"Chwytanie Cache", nullptr));
        ManipLaserOffButton->setText(QApplication::translate("MainWindow", "Laser Off", nullptr));
        ManipSeq8Button->setText(QApplication::translate("MainWindow", "Sequence 8\n"
"Wk\305\202adanie Cache 1", nullptr));
        ManipSeq9Button->setText(QApplication::translate("MainWindow", "Sequence 9\n"
"Wk\305\202adanie Cache 2", nullptr));
        ManipSolenoidOnButton->setText(QApplication::translate("MainWindow", "Solenoid On", nullptr));
        ManipSeq5Button->setText(QApplication::translate("MainWindow", "Sequence 5\n"
"Wyjmowanie Cache 2", nullptr));
        ManipSeq12Button->setText(QApplication::translate("MainWindow", "Sequence 12", nullptr));
        ManipSeq13Button->setText(QApplication::translate("MainWindow", "Sequence 13\n"
"Pobieranie miernika nap.", nullptr));
        ManipSeq14Button->setText(QApplication::translate("MainWindow", "Sequence 14\n"
"Odk\305\202adanie miernika nap.", nullptr));
        ManipSeq15Button->setText(QApplication::translate("MainWindow", "Sequence 15", nullptr));
        ManipToolButton->setText(QApplication::translate("MainWindow", "Jog Tool system", nullptr));
        ManipJoinButton->setText(QApplication::translate("MainWindow", "Jog Join system", nullptr));
        ManipCalibrateButton->setText(QApplication::translate("MainWindow", "Calibrate", nullptr));
        ManipBaseButton->setText(QApplication::translate("MainWindow", "Jog Base system", nullptr));
        ManipDisableButton->setText(QApplication::translate("MainWindow", "Manip PID Disable", nullptr));
        ManipEnableButton->setText(QApplication::translate("MainWindow", "Manip PID Enable", nullptr));
        ManipClearSequenceButton->setText(QApplication::translate("MainWindow", "Clear sequence", nullptr));
        label->setText(QApplication::translate("MainWindow", "Number of sequence", nullptr));
        ManipSavePointButton->setText(QApplication::translate("MainWindow", "Save point", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Speed of arm", nullptr));
        ManipSpeedArmSpinBox->setSuffix(QApplication::translate("MainWindow", " %", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Operating time of gripper", nullptr));
        ManipGripperTimeSpinBox->setSuffix(QApplication::translate("MainWindow", " sec", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Speed of gripper", nullptr));
        ManipGripperSpeedSpinBox->setSuffix(QApplication::translate("MainWindow", " %", nullptr));
        ManipPointTypeComboBox->setItemText(0, QApplication::translate("MainWindow", "Point to Point", nullptr));
        ManipPointTypeComboBox->setItemText(1, QApplication::translate("MainWindow", "Line", nullptr));

        ManipPointTypeComboBox->setCurrentText(QApplication::translate("MainWindow", "Point to Point", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Number of point", nullptr));
        ManipPosYLineEdit->setText(QApplication::translate("MainWindow", "y = 0 mm", nullptr));
        ManipPosPitchLineEdit->setText(QApplication::translate("MainWindow", "pitch = 0 rad", nullptr));
        ManipPosMot3LineEdit->setText(QApplication::translate("MainWindow", "q3 = 0 rad", nullptr));
        ManipPosYawLineEdit->setText(QApplication::translate("MainWindow", "roll = 0 rad", nullptr));
        ManipPosMot1LineEdit->setText(QApplication::translate("MainWindow", "q1 = 0 rad", nullptr));
        ManipMot0ErrorInd->setText(QApplication::translate("MainWindow", "Mot 0 Error", nullptr));
        ManipPosMot4LineEdit->setText(QApplication::translate("MainWindow", "q4 = 0 rad", nullptr));
        ManipPosXLineEdit->setText(QApplication::translate("MainWindow", "x = 0 mm", nullptr));
        ManipMot4ErrorInd->setText(QApplication::translate("MainWindow", "Mot 4 Error", nullptr));
        ManipPosZLineEdit->setText(QApplication::translate("MainWindow", "z = 0 mm", nullptr));
        ManipPosMot0LineEdit->setText(QApplication::translate("MainWindow", "q0 = 0 rad", nullptr));
        ManipMot5ErrorInd->setText(QApplication::translate("MainWindow", "Mot 5 Error", nullptr));
        ManipPosMot2LineEdit->setText(QApplication::translate("MainWindow", "q2 = 0 rad", nullptr));
        ManipPosRollLineEdit->setText(QApplication::translate("MainWindow", "yaw = 0 rad", nullptr));
        ManipMot3ErrorInd->setText(QApplication::translate("MainWindow", "Mot 3 Error", nullptr));
        ManipPosMot5LineEdit->setText(QApplication::translate("MainWindow", "q5 = 0 rad", nullptr));
        ManipMot1ErrorInd->setText(QApplication::translate("MainWindow", "Mot 1 Error", nullptr));
        ManipMot2ErrorInd->setText(QApplication::translate("MainWindow", "Mot 2 Error", nullptr));
        ManipPosReachedInd->setText(QApplication::translate("MainWindow", "Pos Reached", nullptr));
        ManipCoordinateSystemLineEdit->setText(QApplication::translate("MainWindow", "Selected Coordinate System - Speed Join", nullptr));
        ManipStartErrorInd->setText(QApplication::translate("MainWindow", "Start Error", nullptr));
        ManipMoveInterruptedInd->setText(QApplication::translate("MainWindow", "Move Interrupted", nullptr));
        ManipPosMat23_LineEdit->setText(QApplication::translate("MainWindow", "z = 0 mm", nullptr));
        ManipPosMat30_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat10_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat33_LineEdit->setText(QApplication::translate("MainWindow", "1", nullptr));
        ManipPosMat02_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat03_LineEdit->setText(QApplication::translate("MainWindow", "x = 0 mm", nullptr));
        ManipPosMat31_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat20_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat12_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat21_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat11_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat13_LineEdit->setText(QApplication::translate("MainWindow", "y = 0 mm", nullptr));
        ManipPosMat22_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat32_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat01_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipPosMat00_LineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        ManipMot0PidInd->setText(QApplication::translate("MainWindow", "Mot 0 PID", nullptr));
        ManipMot1PidInd->setText(QApplication::translate("MainWindow", "Mot 1 PID", nullptr));
        ManipMot2PidInd->setText(QApplication::translate("MainWindow", "Mot 2 PID", nullptr));
        ManipMot3PidInd->setText(QApplication::translate("MainWindow", "Mot 3 PID", nullptr));
        ManipMot4PidInd->setText(QApplication::translate("MainWindow", "Mot 4 PID", nullptr));
        ManipMot5PidInd->setText(QApplication::translate("MainWindow", "Mot 5 PID", nullptr));
        ManipMot6PidInd->setText(QApplication::translate("MainWindow", "Mot 6 PID", nullptr));
        ManipSetPosMat03DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "x = ", nullptr));
        ManipSetPosMat03DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", nullptr));
        ManipSetPosBaseToolGetCurrentMatButt->setText(QApplication::translate("MainWindow", "Base/Tool coordinate Get current mat", nullptr));
        ManipSetPosMat23DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "z = ", nullptr));
        ManipSetPosMat23DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", nullptr));
        ManipSetPosMat22DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat22DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat33DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat33DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat01DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat01DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat10DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat10DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat12DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat12DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat20DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat20DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat32DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat32DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat13DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "y = ", nullptr));
        ManipSetPosMat13DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", nullptr));
        ManipSetPosMat11DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat11DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat21DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat21DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat00DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat00DoubleSpinBox->setSuffix(QString());
        ManipSetPosBaseToolClearMatButt->setText(QApplication::translate("MainWindow", "Base/Tool coordinate Clear mat", nullptr));
        ManipSetPosMat30DoubleSpinBox_2->setPrefix(QString());
        ManipSetPosMat30DoubleSpinBox_2->setSuffix(QString());
        ManipSetPosMat02DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat02DoubleSpinBox->setSuffix(QString());
        ManipSetPosMat31DoubleSpinBox->setPrefix(QString());
        ManipSetPosMat31DoubleSpinBox->setSuffix(QString());
        ManipSetMatBaseMoveAbsButt->setText(QApplication::translate("MainWindow", "Base coordinate Move Abs", nullptr));
        ManipSetMatBaseMoveIncButt->setText(QApplication::translate("MainWindow", "Base coordinate Move Inc", nullptr));
        ManipSetMatToolMoveIncButt->setText(QApplication::translate("MainWindow", "Tool coordinate Move Inc", nullptr));
        ManipSetPosBaseToolFindMatButt->setText(QApplication::translate("MainWindow", "Base/Tool coordinate Find mat RPY", nullptr));
        ManipSetPosRollDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "roll = ", nullptr));
        ManipSetPosRollDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosZDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "z = ", nullptr));
        ManipSetPosZDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", nullptr));
        ManipSetPosPitchDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "pitch = ", nullptr));
        ManipSetPosPitchDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosXDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "x = ", nullptr));
        ManipSetPosXDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", nullptr));
        ManipSetPosYawDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "yaw = ", nullptr));
        ManipSetPosYawDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosYDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "y = ", nullptr));
        ManipSetPosYDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", nullptr));
        ManipSetPosBaseMoveIncButt->setText(QApplication::translate("MainWindow", "Base coordinate\n"
"Move Inc", nullptr));
        ManipSetPosBaseMoveAbsButt->setText(QApplication::translate("MainWindow", "Base coordinate\n"
"Move Abs", nullptr));
        ManipSetPosBaseToolGetCurrentPosButt->setText(QApplication::translate("MainWindow", "Base/Tool coordinate\n"
"Get current pos", nullptr));
        ManipSetPosBaseToolClearPosButt->setText(QApplication::translate("MainWindow", "Base/Tool coordinate\n"
"Clear pos", nullptr));
        ManipSetPosToolMoveIncButt->setText(QApplication::translate("MainWindow", "Tool coordinate\n"
"Move Inc", nullptr));
        ManipSetPosQGetCurrentPosButt->setText(QApplication::translate("MainWindow", "Join coordinate\n"
"Get current pos", nullptr));
        ManipSetPosQMoveAbsButt->setText(QApplication::translate("MainWindow", "Join coordinate\n"
"Move Abs", nullptr));
        ManipSetPosGripTimeDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "Gripper Time = ", nullptr));
        ManipSetPosGripTimeDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " sec", nullptr));
        ManipSetPosGripSpeedDoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "Gripper Speed = ", nullptr));
        ManipSetPosGripSpeedDoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " %", nullptr));
        ManipSetPosGripperMoveButt->setText(QApplication::translate("MainWindow", "Gripper Move", nullptr));
        ManipSetPosQClearPosButt->setText(QApplication::translate("MainWindow", "Join coordinate\n"
"Clear pos", nullptr));
        ManipSetPosQ3DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "q3 = ", nullptr));
        ManipSetPosQ3DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosQ2DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "q2 = ", nullptr));
        ManipSetPosQ2DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosQ0DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "q0 = ", nullptr));
        ManipSetPosQ0DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosQ1DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "q1 = ", nullptr));
        ManipSetPosQ1DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosQ5DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "q5 = ", nullptr));
        ManipSetPosQ5DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        ManipSetPosQMoveIncButt->setText(QApplication::translate("MainWindow", "Join coordinate\n"
"Move Inc", nullptr));
        ManipSetPosQ4DoubleSpinBox->setPrefix(QApplication::translate("MainWindow", "q4 = ", nullptr));
        ManipSetPosQ4DoubleSpinBox->setSuffix(QApplication::translate("MainWindow", " rad", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TabManip), QApplication::translate("MainWindow", "Manipulator", nullptr));
        LabSpeed2IncButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        Lab2LineEdit->setText(QApplication::translate("MainWindow", "Z= 0 mm", nullptr));
        LabCur0ProgressBar->setFormat(QApplication::translate("MainWindow", "%p A", nullptr));
        LabSpeed3DecButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        LabCur3ProgressBar->setFormat(QApplication::translate("MainWindow", "%v A", nullptr));
        LabSpeed1LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        LabSpeed3LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        LabCur1ProgressBar->setFormat(QApplication::translate("MainWindow", "%v A", nullptr));
        LabSpeed1IncButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        LabSpeed1DecButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        LabSpeed2ZeroButton->setText(QApplication::translate("MainWindow", "Zero", nullptr));
        LabSpeed1ZeroButton->setText(QApplication::translate("MainWindow", "Zero", nullptr));
        LabSpeed0DecButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        LabSpeed3IncButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        LabSpeed0LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        LabSpeed3ZeroButton->setText(QApplication::translate("MainWindow", "Zero", nullptr));
        LabSpeed2LineEdit->setText(QApplication::translate("MainWindow", "0 %", nullptr));
        Lab1LineEdit->setText(QApplication::translate("MainWindow", "Y= 0 mm", nullptr));
        LabSpeed0ZeroButton->setText(QApplication::translate("MainWindow", "Zero", nullptr));
        LabSpeed2DecButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        LabSpeed0IncButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        Lab3LineEdit->setText(QApplication::translate("MainWindow", "L= 0 mm", nullptr));
        LabCur2ProgressBar->setFormat(QApplication::translate("MainWindow", "%v A", nullptr));
        Lab0LineEdit->setText(QApplication::translate("MainWindow", "X= 0 mm", nullptr));
        Lab3EnableLimitsButton->setText(QApplication::translate("MainWindow", "Luminometer\n"
"Enable Limits", nullptr));
        Lab2DisableimitsButton->setText(QApplication::translate("MainWindow", "Axis Z\n"
"Disable Limits", nullptr));
        Lab0DisableimitsButton->setText(QApplication::translate("MainWindow", "Axis X\n"
"Disable Limits", nullptr));
        Lab3DisableimitsButton->setText(QApplication::translate("MainWindow", "Luminometer\n"
"Disable Limits", nullptr));
        Lab2EnableLimitsButton->setText(QApplication::translate("MainWindow", "Axis Z\n"
"Enable Limits", nullptr));
        Lab3SetHomePosButton->setText(QApplication::translate("MainWindow", "Luminometer\n"
"Set Home Pos", nullptr));
        Lab0EnableLimitsButton->setText(QApplication::translate("MainWindow", "Axis X\n"
"Enable Limits", nullptr));
        Lab1EnableLimitsButton->setText(QApplication::translate("MainWindow", "Axis Y\n"
"Enable Limits", nullptr));
        Lab1DisableimitsButton->setText(QApplication::translate("MainWindow", "Axis Y\n"
"Disable Limits", nullptr));
        Lab1SetHomePosButton->setText(QApplication::translate("MainWindow", "Axis Y\n"
"Set Home Pos", nullptr));
        Lab2SetHomePosButton->setText(QApplication::translate("MainWindow", "Axis Z\n"
"Set Home Pos", nullptr));
        Lab0SetHomePosButton->setText(QApplication::translate("MainWindow", "Axis X\n"
"Set Home Pos", nullptr));
        LabDisablePIDButton->setText(QApplication::translate("MainWindow", "Disable PID", nullptr));
        LabEnablePIDButton->setText(QApplication::translate("MainWindow", "Enable PID", nullptr));
        LabNeutralPositionButton->setText(QApplication::translate("MainWindow", "Neutral position", nullptr));
        LabLuminometrCloseButton->setText(QApplication::translate("MainWindow", "Close the luminometer", nullptr));
        LabSequencePreviousButton->setText(QApplication::translate("MainWindow", "<--- Previous point", nullptr));
        LabGripperCloseButton_2->setText(QApplication::translate("MainWindow", "Close the gripper", nullptr));
        LabSequenceNextButton->setText(QApplication::translate("MainWindow", "Next point --->", nullptr));
        LabTurnOnOffLuminometerButton->setText(QApplication::translate("MainWindow", "Turn on/off the\n"
"luminometer", nullptr));
        LabStartSequenceButton->setText(QApplication::translate("MainWindow", "Start the sequence", nullptr));
        LabGripperOpenButton->setText(QApplication::translate("MainWindow", "Open the gripper", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Number of\n"
"sequence", nullptr));
        LabLuminometrOpenButton->setText(QApplication::translate("MainWindow", "Open the luminometer", nullptr));
        LabGoToSwabXYButton->setText(QApplication::translate("MainWindow", "Move XY\n"
" Go to the swab", nullptr));
        LabStartMeasurementButton->setText(QApplication::translate("MainWindow", "Start the\n"
"measurement", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Number of\n"
"swab", nullptr));
        LabMoveZLumiButton->setText(QApplication::translate("MainWindow", "Move Z\n"
"Lumi", nullptr));
        LabMoveXYLumiButton->setText(QApplication::translate("MainWindow", "Move XY\n"
" Go to the Lumi", nullptr));
        LabMoveZMeasButton->setText(QApplication::translate("MainWindow", "Move Z\n"
"Meas", nullptr));
        LabMoveXYMeasButton->setText(QApplication::translate("MainWindow", "Move XY\n"
" Go to the Meas", nullptr));
        LabRemoteControlButton->setText(QApplication::translate("MainWindow", "Remote control", nullptr));
        LabLumiVerticalPosButton->setText(QApplication::translate("MainWindow", "Lumi Vertical Position", nullptr));
        LabLumiDiscardSwabButton->setText(QApplication::translate("MainWindow", "Lumi Discard Swab", nullptr));
        LabMoveZSwab2Button->setText(QApplication::translate("MainWindow", "Move Z\n"
"Swab", nullptr));
        LabMoveZSwabButton->setText(QApplication::translate("MainWindow", "Move Z\n"
"Swab", nullptr));
        LabMoveZUpButton->setText(QApplication::translate("MainWindow", "Move Z\n"
"Up", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLaboratory), QApplication::translate("MainWindow", "Laboratory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
