#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QTimer>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QFile>
#include <QThread>
#include <QFileDialog>
#include <QDateTime>
#include "drive.h"
#include "manip.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
        ui->comboBox->addItem(serialPortInfo.portName());
    timerSerial = new QTimer(this);
    timerWifi = new QTimer(this);
    timerLabel = new QTimer(this);
    timerSaveRoverPos = new QTimer(this);
    connect(timerSerial, SIGNAL(timeout()), this, SLOT(serialSend()));
    connect(timerWifi, SIGNAL(timeout()), this, SLOT(wifiSend()));
    connect(timerLabel, SIGNAL(timeout()), this, SLOT(redrawLabel()));
    connect(timerSaveRoverPos, SIGNAL(timeout()), this, SLOT(saveRoverPos()));
    timerLabel->start(100);
    socket = new QTcpSocket(this);
    drive = new Drive();
    manip = new Manip();
    lab = new Lab();
    frameToSendBySerial = Frametype_DriveGeneral;
    frameToSendByWifi = Frametype_DriveGeneral;

    roverPosTextEditStr.clear();
    roverPosTextEditStr = "Date, Time, Lon, Lat, Yaw, Pitch, Roll\n";

    setSeqButtonsColorGray();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::redrawLabel(void)
{
    ui->Lab0LineEdit->setText("X= " + QString::number(lab->motspos[0]) + "\tmm");
    ui->Lab1LineEdit->setText("Y= " + QString::number(lab->motspos[1]) + "\tmm");
    ui->Lab2LineEdit->setText("Z= " + QString::number(lab->motspos[2]) + "\tmm");
    ui->Lab3LineEdit->setText("L= " + QString::number(lab->motspos[3]) + "\tdeg");
    ui->LabCur0ProgressBar->setValue((int)(10.0*lab->motscurrent[0]));
    ui->LabCur1ProgressBar->setValue((int)(10.0*lab->motscurrent[1]));
    ui->LabCur2ProgressBar->setValue((int)(10.0*lab->motscurrent[2]));
    ui->LabCur3ProgressBar->setValue((int)(10.0*lab->motscurrent[3]));
    ui->LabCur0ProgressBar->setFormat(QString::number(lab->motscurrent[0]) + " A");
    ui->LabCur1ProgressBar->setFormat(QString::number(lab->motscurrent[1]) + " A");
    ui->LabCur2ProgressBar->setFormat(QString::number(lab->motscurrent[2]) + " A");
    ui->LabCur3ProgressBar->setFormat(QString::number(lab->motscurrent[3]) + " A");

    ui->ManipPosMot0LineEdit->setText("q0 = " + QString::number(manip->motspos[0]) + " rad");
    ui->ManipPosMot1LineEdit->setText("q1 = " + QString::number(manip->motspos[1]) + " rad");
    ui->ManipPosMot2LineEdit->setText("q2 = " + QString::number(manip->motspos[2]) + " rad");
    ui->ManipPosMot3LineEdit->setText("q3 = " + QString::number(manip->motspos[3]) + " rad");
    ui->ManipPosMot4LineEdit->setText("q4 = " + QString::number(manip->motspos[4]) + " rad");
    ui->ManipPosMot5LineEdit->setText("q5 = " + QString::number(manip->motspos[5]) + " rad");

    ui->ManipMot0ErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot1ErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot2ErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot3ErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot4ErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot5ErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot0PidInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot1PidInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot2PidInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot3PidInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot4PidInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot5PidInd->setStyleSheet("background-color: lightgray");
    ui->ManipMot6PidInd->setStyleSheet("background-color: lightgray");
    if(manip->motsErrors[0] == true)
        ui->ManipMot0ErrorInd->setStyleSheet("background-color: red");
    if(manip->motsErrors[1] == true)
        ui->ManipMot1ErrorInd->setStyleSheet("background-color: red");
    if(manip->motsErrors[2] == true)
        ui->ManipMot2ErrorInd->setStyleSheet("background-color: red");
    if(manip->motsErrors[3] == true)
        ui->ManipMot3ErrorInd->setStyleSheet("background-color: red");
    if(manip->motsErrors[4] == true)
        ui->ManipMot4ErrorInd->setStyleSheet("background-color: red");
    if(manip->motsErrors[5] == true)
        ui->ManipMot5ErrorInd->setStyleSheet("background-color: red");

    if(manip->motsPid[0] == true)
        ui->ManipMot0PidInd->setStyleSheet("background-color: lightgreen");
    if(manip->motsPid[1] == true)
        ui->ManipMot1PidInd->setStyleSheet("background-color: lightgreen");
    if(manip->motsPid[2] == true)
        ui->ManipMot2PidInd->setStyleSheet("background-color: lightgreen");
    if(manip->motsPid[3] == true)
        ui->ManipMot3PidInd->setStyleSheet("background-color: lightgreen");
    if(manip->motsPid[4] == true)
        ui->ManipMot4PidInd->setStyleSheet("background-color: lightgreen");
    if(manip->motsPid[5] == true)
        ui->ManipMot5PidInd->setStyleSheet("background-color: lightgreen");
    if(manip->motsPid[6] == true)
        ui->ManipMot6PidInd->setStyleSheet("background-color: lightgreen");

    ui->ManipPosXLineEdit->setText("x = " + QString::number(manip->axesPosRPY[0]) + " mm");
    ui->ManipPosYLineEdit->setText("y = " + QString::number(manip->axesPosRPY[1]) + " mm");
    ui->ManipPosZLineEdit->setText("z = " + QString::number(manip->axesPosRPY[2]) + " mm");
    ui->ManipPosYawLineEdit->setText("y = " + QString::number(manip->axesPosRPY[3]) + " rad");
    ui->ManipPosPitchLineEdit->setText("p = " + QString::number(manip->axesPosRPY[4]) + " rad");
    ui->ManipPosRollLineEdit->setText("r = " + QString::number(manip->axesPosRPY[5]) + " rad");

    ui->ManipPosMat00_LineEdit->setText(QString::number(manip->axesPosMat[0][0]));
    ui->ManipPosMat01_LineEdit->setText(QString::number(manip->axesPosMat[0][1]));
    ui->ManipPosMat02_LineEdit->setText(QString::number(manip->axesPosMat[0][2]));
    ui->ManipPosMat03_LineEdit->setText("x = " + QString::number(manip->axesPosMat[0][3]) + " mm");
    ui->ManipPosMat10_LineEdit->setText(QString::number(manip->axesPosMat[1][0]));
    ui->ManipPosMat11_LineEdit->setText(QString::number(manip->axesPosMat[1][1]));
    ui->ManipPosMat12_LineEdit->setText(QString::number(manip->axesPosMat[1][2]));
    ui->ManipPosMat13_LineEdit->setText("y = " + QString::number(manip->axesPosMat[1][3]) + " mm");
    ui->ManipPosMat20_LineEdit->setText(QString::number(manip->axesPosMat[2][0]));
    ui->ManipPosMat21_LineEdit->setText(QString::number(manip->axesPosMat[2][1]));
    ui->ManipPosMat22_LineEdit->setText(QString::number(manip->axesPosMat[2][2]));
    ui->ManipPosMat23_LineEdit->setText("z = " + QString::number(manip->axesPosMat[2][3]) + " mm");
    ui->ManipPosMat30_LineEdit->setText("0");
    ui->ManipPosMat31_LineEdit->setText("0");
    ui->ManipPosMat32_LineEdit->setText("0");
    ui->ManipPosMat33_LineEdit->setText("1");

    ui->ManipJoinButton->setStyleSheet("background-color: lightgray");
    ui->ManipBaseButton->setStyleSheet("background-color: lightgray");
    ui->ManipToolButton->setStyleSheet("background-color: lightgray");
    ui->ManipCalibrateButton->setStyleSheet("background-color: lightgray");
    ui->ManipPosReachedInd->setStyleSheet("background-color: lightgray");
    ui->ManipStartErrorInd->setStyleSheet("background-color: lightgray");
    ui->ManipMoveInterruptedInd->setStyleSheet("background-color: lightgray");
    if(manip->Coordinate == ManipCoordinate_JoinJog)
    {
        ui->ManipJoinButton->setStyleSheet("background-color: lightgreen");
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Join Jog");
        setSeqButtonsColorGray();
    }
    else if(manip->Coordinate == ManipCoordinate_BaseJog)
    {
        ui->ManipBaseButton->setStyleSheet("background-color: lightgreen");
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Base Jog");
    }
    else if(manip->Coordinate == ManipCoordinate_ToolJog)
    {
        ui->ManipToolButton->setStyleSheet("background-color: lightgreen");
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Tool Jog");
    }
    else if(manip->Coordinate == ManipCoordinate_AutoSeq)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Automatic Sequence");
    }
    else if(manip->Coordinate == ManipCoordinate_JoinMoveAbs)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Join Move Abs");
    }
    else if(manip->Coordinate == ManipCoordinate_JoinMoveInc)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Join Move Inc");
    }
    else if(manip->Coordinate == ManipCoordinate_BaseMoveAbs)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Base Move Abs");
    }
    else if(manip->Coordinate == ManipCoordinate_BaseMoveInc)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Base Move Inc");
    }
    else if(manip->Coordinate == ManipCoordinate_ToolMoveInc)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Tool Move Inc");
    }
    else if(manip->Coordinate == ManipCoordinate_GripperMove)
    {
        ui->ManipCoordinateSystemLineEdit->setText("Selected Coordinate System - Gripper Move");
    }
    if(manip->calibrated)
        ui->ManipCalibrateButton->setStyleSheet("background-color: lightgreen");
    if(manip->posReached)
        ui->ManipPosReachedInd->setStyleSheet("background-color: lightgreen");
    if(manip->startError)
        ui->ManipStartErrorInd->setStyleSheet("background-color: lightgreen");
    if(manip->moveInterrupted)
        ui->ManipMoveInterruptedInd->setStyleSheet("background-color: lightgreen");

    ui->DriveLonLineEdit->setText("lon = " + QString::number(drive->lon, 'g', 10));
    ui->DriveLatLineEdit->setText("lat = " + QString::number(drive->lat, 'g', 10));
    ui->DriveYawLineEdit->setText("yaw = " + QString::number(drive->yaw));
    ui->DrivePitchLineEdit->setText("pitch = " + QString::number(drive->pitch));
    ui->DriveRollLineEdit->setText("roll = " + QString::number(drive->roll));

    ui->DriveHardwareEmergencyLed->setStyleSheet("background-color: lightgray");
    ui->DriveSoftwareEmergencyLed->setStyleSheet("background-color: lightgray");
    ui->SelectSatel->setStyleSheet("background-color: lightgray");
    ui->SelectWifi->setStyleSheet("background-color: lightgray");
    ui->SelectAutoNaviTypeUrcAbs->setStyleSheet("background-color: lightgray");
    ui->SelectAutoNaviTypeUrcRel->setStyleSheet("background-color: lightgray");
    ui->SelectAutoNaviTypeErcAbs->setStyleSheet("background-color: lightgray");
    ui->SelectAutoNaviTypeErcRel->setStyleSheet("background-color: lightgray");
    ui->DriveMot0Error->setStyleSheet("background-color: lightgray");
    ui->DriveMot1Error->setStyleSheet("background-color: lightgray");
    ui->DriveMot2Error->setStyleSheet("background-color: lightgray");
    ui->DriveMot3Error->setStyleSheet("background-color: lightgray");

    if(drive->emergencyHardwareEmergencySwitch == true)
        ui->DriveHardwareEmergencyLed->setStyleSheet("background-color: red");
    if(drive->error[0] == true)
        ui->DriveMot0Error->setStyleSheet("background-color: red");
    if(drive->error[1] == true)
        ui->DriveMot1Error->setStyleSheet("background-color: red");
    if(drive->error[2] == true)
        ui->DriveMot2Error->setStyleSheet("background-color: red");
    if(drive->error[3] == true)
        ui->DriveMot3Error->setStyleSheet("background-color: red");
    if(drive->SelectedHost == SelectedHost_Satel)
        ui->SelectSatel->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Wifi)
        ui->SelectWifi->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_URCAbs)
        ui->SelectAutoNaviTypeUrcAbs->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_URCRel)
        ui->SelectAutoNaviTypeUrcRel->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_ERCAbs)
        ui->SelectAutoNaviTypeErcAbs->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_URCAbs)
        ui->SelectAutoNaviTypeUrcAbs->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_URCRel)
        ui->SelectAutoNaviTypeUrcRel->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_ERCAbs)
        ui->SelectAutoNaviTypeErcAbs->setStyleSheet("background-color: lightgreen");
    else if(drive->SelectedHost == SelectedHost_Auto && drive->NaviType == NaviType_ERCRel)
        ui->SelectAutoNaviTypeErcRel->setStyleSheet("background-color: lightgreen");

    switch(drive->roverStatus)
    {
    case rs_Manual:
        ui->DriveCmdLineEdit->setText("Rover status = Manual work");
        break;
    case rs_Waiting:
        ui->DriveCmdLineEdit->setText("Rover status = Waiting");
        break;
    case rs_DrivingToWaypoint:
        ui->DriveCmdLineEdit->setText("Rover status = Driving to waypoint");
        break;
    case rs_LookingMarkers:
        ui->DriveCmdLineEdit->setText("Rover status = Looking markers");
        break;
    case rs_DrivingToDestpoint:
        ui->DriveCmdLineEdit->setText("Rover status = Driving to destpoint");
        break;
    case rs_AvoidingObstacle:
        ui->DriveCmdLineEdit->setText("Rover status = Avoiding obstacle");
        break;
    case rs_AchievedDestpoint:
        ui->DriveCmdLineEdit->setText("Rover status = Achieved destpoint");
        break;
    default:
        break;
    }
}
void MainWindow::saveRoverPos()
{
    QTextStream out(file);
    QDateTime datetime = QDateTime::currentDateTime();
    QString time_format = "yyyy,MM,dd,HH,mm,ss,zzz";

    QString str = datetime.toString(time_format) + ",";
    str += QString::number(drive->lon, 'f', 9) + ",";
    str += QString::number(drive->lat, 'f', 9) + ",";
    str += QString::number(drive->yaw, 'f', 3) + ",";
    str += QString::number(drive->pitch, 'f', 3) + ",";
    str += QString::number(drive->roll, 'f', 3) + "\n";
    out << str;
    roverPosTextEditStr += str;
    ui->RoverPosLogTextEdit->setText(roverPosTextEditStr);
}
void MainWindow::serialSend(void)
{
    serialRead();
    uint16_t len;
    if(drive->cmdout != cmdDrive_null)
    {
        len = drive->PrepareFrameOnlyCmd();
        serial.write((char*)(drive->bufoc), len);
        drive->cmdout = cmdDrive_null;
    }
    else if(manip->cmdout != cmdManip_null)
    {
        len = manip->PrepareFrameOnlyCmd();
        serial.write((char*)(manip->bufoc), len);
        manip->cmdout = cmdManip_null;
    }
    else if(lab->cmdout != cmdLab_null)
    {
        len = lab->PrepareFrameOnlyCmd();
        serial.write((char*)(lab->bufoc), len);
        lab->cmdout = cmdLab_null;
    }
    else if(frameToSendBySerial == Frametype_DriveGeneral)
    {
        if(ui->SerialDriveFrameCHeckBox->isChecked())
        {
            len = drive->PrepareFrameToSend();
            serial.write((char*)(drive->buf), len);
            drive->cmdout = cmdDrive_null;
        }
        frameToSendBySerial = Frametype_ManipGeneral;
    }
    else if(frameToSendBySerial == Frametype_ManipGeneral)
    {
        if(ui->SerialManipFrameCHeckBox->isChecked())
        {
            len = manip->PrepareFrameToSend();
            serial.write((char*)(manip->buf), len);
            manip->cmdout = cmdManip_null;
            manip->cmdoutvalue = 0;
        }
        frameToSendBySerial = Frametype_LabGeneral;
    }
    else if(frameToSendBySerial == Frametype_LabGeneral)
    {
        if(ui->SerialLabFrameCHeckBox->isChecked())
        {
            len = lab->PrepareFrameToSend();
            serial.write((char*)(lab->buf), len);
            lab->cmdout = cmdLab_null;
            lab->cmdoutvalue = 0;
        }
        frameToSendBySerial = Frametype_DriveGeneral;
    }
}
void MainWindow::serialRead(void)
{
    QByteArray str = serial.readAll();
    uint8_t buf[500];
    for(int i=0;i<str.size();i++)
        buf[i] = static_cast<uint8_t>(str[i]);
    if(buf[0] == Frametype_Header)
    {
        if(buf[1] == FrameType_DriveStatusTelemetry)
        {
            drive->ReadTelemetry(buf);
        }
        else if(buf[1] == FrameType_ManipStatusTelemetry)
        {
            manip->ReadTelemetry(buf);
        }
        else if(buf[1] == FrameType_LabStatusTelemetry)
        {
            //manip->ReadMotorPos(buf);
        }
        else if(buf[1] == Frametype_LabFeedbackMotPos)
        {
            lab->ReadMotorPos(buf);
        }
        else if(buf[1] == Frametype_RoverPosABS)
        {
            drive->ReadRoverPosAbs(buf);
        }
        else if(buf[1] == Frametype_RoverPosREL)
        {
            drive->ReadRoverPosRel(buf);
        }
        else if(buf[1] == FrameType_ManipFeedbackMotpos)
        {
            manip->ReadMotorPos(buf);
        }
        else if(buf[1] == FrameType_ManipFeedbackAxesposRPY)
        {
            manip->ReadAxesPosRPY(buf);
        }
        else if(buf[1] == FrameType_ManipFeedbackAxesposMat)
        {
            manip->ReadAxesPosMat(buf);
        }
    }
}
void MainWindow::wifiSend(void)
{
    uint16_t len;
    if(drive->cmdout != cmdDrive_null)
    {
        len = drive->PrepareFrameOnlyCmd();
        socket->write((char*)(drive->bufoc), len);
        drive->cmdout = cmdDrive_null;
    }
    else if(manip->cmdout != cmdManip_null)
    {
        len = manip->PrepareFrameOnlyCmd();
        socket->write((char*)(manip->bufoc), len);
        manip->cmdout = cmdManip_null;
    }
    else if(frameToSendBySerial == Frametype_DriveGeneral)
    {
        if(ui->WifiDriveFrameCHeckBox->isChecked())
        {
            len = drive->PrepareFrameToSend();
            socket->write((char*)(drive->buf), len);
            drive->cmdout = cmdDrive_null;
        }
        frameToSendBySerial = Frametype_ManipGeneral;
    }
    else if(frameToSendBySerial == Frametype_ManipGeneral)
    {
        if(ui->WifiManipFrameCHeckBox->isChecked())
        {
            len = manip->PrepareFrameToSend();
            socket->write((char*)(manip->buf), len);
            manip->cmdout = cmdManip_null;
            manip->cmdoutvalue = 0;
        }
        frameToSendBySerial = Frametype_LabGeneral;
    }
    else if(frameToSendBySerial == Frametype_LabGeneral)
    {
        if(ui->WifiLabFrameCHeckBox->isChecked())
        {
            len = lab->PrepareFrameToSend();
            socket->write((char*)(lab->buf), len);
            lab->cmdout = cmdLab_null;
            lab->cmdoutvalue = 0;
        }
        frameToSendBySerial = Frametype_DriveGeneral;
    }
}
void MainWindow::wifiRead(void)
{
    qDebug() << socket->readAll();
}
void MainWindow::on_ComPortOpenButton_clicked()
{
    serial.setPortName(ui->comboBox->currentText());
    serial.setBaudRate(QSerialPort::Baud19200);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    if(!(serial.isOpen()))
    {
        serial.open(QIODevice::ReadWrite);
        if(serial.isOpen())
        {
            //connect(&serial, SIGNAL(readyRead()),this, SLOT(serialRead()));
            ui->ComPortOpenButton->setEnabled(false);
            ui->ComPortCloseButton->setEnabled(true);
            timerSerial->start(ui->SerialTimeoutSpinBox->value());
            ui->SerialTimeoutSpinBox->setEnabled(true);
            qDebug() << "The COM port has been opened.";
        }
        else
        {
            qDebug() << "The COM port has not been opened.";
        }
    }
    else
    {
        qDebug() << "The COM port is already open.";
    }
}
void MainWindow::on_ComPortCloseButton_clicked()
{
    serial.close();
    if(!(serial.isOpen()))
    {
        timerSerial->stop();
        ui->ComPortOpenButton->setEnabled(true);
        ui->ComPortCloseButton->setEnabled(false);
        ui->SerialTimeoutSpinBox->setEnabled(false);
        qDebug() << "The COM port has been closed.";
    }
}
void MainWindow::on_SerialTimeoutSpinBox_valueChanged(int arg1)
{
    timerSerial->setInterval(arg1);
}
void MainWindow::on_WifiConnectButton_clicked()
{
//    connect(socket, SIGNAL(readyRead()),this, SLOT(wifiRead()));
    QHostAddress hostAddress;
    hostAddress.setAddress("10.10.100.254");
//    socket->connectToHost(hostAddress, 8899);
    //hostAddress.setAddress("192.168.0.7");
    socket->connectToHost(hostAddress, 20108);
    if(!socket->waitForConnected(1000))
    {
        qDebug() << "TCP error: " << socket->errorString();
        return;
    }

    ui->WifiConnectButton->setEnabled(false);
    ui->WifiDisconnectButton->setEnabled(true);
    timerWifi->start(ui->WifiTimeoutSpinBox->value());
    ui->WifiTimeoutSpinBox->setEnabled(true);
    qDebug() << "Connected to a TCP host.";
}
void MainWindow::on_WifiDisconnectButton_clicked()
{
    socket->disconnectFromHost();
    timerWifi->stop();
    ui->WifiConnectButton->setEnabled(true);
    ui->WifiDisconnectButton->setEnabled(false);
    ui->WifiTimeoutSpinBox->setEnabled(false);
    qDebug() << "Disconnected from the TCP host.";
}
void MainWindow::on_WifiTimeoutSpinBox_valueChanged(int arg1)
{
    timerWifi->setInterval(arg1);
}
void MainWindow::on_FrontValueSlider_valueChanged(int value)
{
    drive->setspeedfront = static_cast<int8_t>(value);
    ui->FVLineEdit->setText(QString::number(value));
}
void MainWindow::on_FrontValueSlider_sliderReleased()
{
    ui->FrontValueSlider->setValue(0);
}
void MainWindow::on_DirValueSlider_valueChanged(int value)
{
    drive->setspeeddir = static_cast<int8_t>(value);
    ui->DVLineEdit->setText(QString::number(value));
}
void MainWindow::on_DirValueSlider_sliderReleased()
{
    ui->DirValueSlider->setValue(0);
}
void MainWindow::on_Serwo0_Slider_valueChanged(int value)
{
    drive->setserwopos[0] = static_cast<int8_t>(value);
    ui->S0LineEdit->setText(QString::number(value));
}
void MainWindow::on_Serwo1_Slider_valueChanged(int value)
{
    drive->setserwopos[1] = static_cast<int8_t>(value);
    ui->S1LineEdit->setText(QString::number(value));
}
void MainWindow::on_Serwo2_Slider_valueChanged(int value)
{
    drive->setserwopos[2] = static_cast<int8_t>(value);
    ui->S2LineEdit->setText(QString::number(value));
}
void MainWindow::on_Serwo3_Slider_valueChanged(int value)
{
    drive->setserwopos[3] = static_cast<int8_t>(value);
    ui->S3LineEdit->setText(QString::number(value));
}
void MainWindow::on_SelectSatel_clicked()
{
    drive->cmdout = cmdDrive_satel;
}
void MainWindow::on_SelectWifi_clicked()
{
    drive->cmdout = cmdDrive_wifi;
}
void MainWindow::on_SelectAutoNaviTypeUrcAbs_clicked()
{
    drive->cmdout = cmdDrive_AutoURCAbs;
}
void MainWindow::on_SelectAutoNaviTypeUrcRel_clicked()
{
    drive->cmdout = cmdDrive_AutoURCRel;
}
void MainWindow::on_SelectAutoNaviTypeErcAbs_clicked()
{
    drive->cmdout = cmdDrive_AutoERCAbs;
}
void MainWindow::on_SelectAutoNaviTypeErcRel_clicked()
{
    drive->cmdout = cmdDrive_AutoERCRel;
}
void MainWindow::on_Cam1IncButton_clicked()
{
    drive->cmdout = cmdDrive_cam1inc;
}
void MainWindow::on_Cam1DecButton_clicked()
{
    drive->cmdout = cmdDrive_cam1dec;
}
void MainWindow::on_Cam2IncButton_clicked()
{
    drive->cmdout = cmdDrive_cam2inc;
}
void MainWindow::on_Cam2DecButton_clicked()
{
    drive->cmdout = cmdDrive_cam2dec;
}
void MainWindow::on_AutoPauseButton_clicked()
{
    drive->cmdout = cmdDrive_autopause;
}
void MainWindow::on_AutoContinueButton_clicked()
{
    drive->cmdout = cmdDrive_autocontinue;
}
void MainWindow::on_AutoNextButton_clicked()
{
    drive->cmdout = cmdDrive_autonext;
}
void MainWindow::on_ManipSpeed0Slider_valueChanged(int value)
{
    manip->setspeed[0] = static_cast<int8_t>(value);
    ui->ManipSpeed0LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed0Slider_sliderReleased()
{
    ui->ManipSpeed0Slider->setValue(0);
}
void MainWindow::on_ManipSpeed1Slider_valueChanged(int value)
{
    manip->setspeed[1] = static_cast<int8_t>(value);
    ui->ManipSpeed1LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed1Slider_sliderReleased()
{
    ui->ManipSpeed1Slider->setValue(0);
}
void MainWindow::on_ManipSpeed2Slider_valueChanged(int value)
{
    manip->setspeed[2] = static_cast<int8_t>(value);
    ui->ManipSpeed2LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed2Slider_sliderReleased()
{
    ui->ManipSpeed2Slider->setValue(0);
}
void MainWindow::on_ManipSpeed3Slider_valueChanged(int value)
{
    manip->setspeed[3] = static_cast<int8_t>(value);
    ui->ManipSpeed3LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed3Slider_sliderReleased()
{
    ui->ManipSpeed3Slider->setValue(0);
}
void MainWindow::on_ManipSpeed4Slider_valueChanged(int value)
{
    manip->setspeed[4] = static_cast<int8_t>(value);
    ui->ManipSpeed4LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed4Slider_sliderReleased()
{
    ui->ManipSpeed4Slider->setValue(0);
}
void MainWindow::on_ManipSpeed5Slider_valueChanged(int value)
{
    manip->setspeed[5] = static_cast<int8_t>(value);
    ui->ManipSpeed5LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed5Slider_sliderReleased()
{
    ui->ManipSpeed5Slider->setValue(0);
}
void MainWindow::on_ManipSpeed6Slider_valueChanged(int value)
{
    manip->setspeed[6] = static_cast<int8_t>(value);
    ui->ManipSpeed6LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_ManipSpeed6Slider_sliderReleased()
{
    ui->ManipSpeed6Slider->setValue(0);
}
void MainWindow::on_ManipEnableButton_clicked()
{
    manip->cmdout = cmdManip_enable;
    ui->ManipEnableButton->setStyleSheet("background-color: lightgreen");
    ui->ManipDisableButton->setStyleSheet("background-color: lightgray");
}
void MainWindow::on_ManipDisableButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Czy napewno chcesz wyłączyć regulatory manipulatora ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_disable;
        ui->ManipEnableButton->setStyleSheet("background-color: lightgray");
        ui->ManipDisableButton->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipCalibrateButton_clicked()
{
    manip->cmdout = cmdManip_calibrate;
    ui->ManipCalibrateButton->setStyleSheet("background-color: lightgreen");
}
void MainWindow::on_ManipJoinButton_clicked()
{
     manip->cmdout = cmdManip_join;
}
void MainWindow::on_ManipBaseButton_clicked()
{
     manip->cmdout = cmdManip_base;
}
void MainWindow::on_ManipToolButton_clicked()
{
     manip->cmdout = cmdManip_tool;
}
void MainWindow::on_ManipLaserOnButton_clicked()
{
    manip->cmdout = cmdManip_laseron;
}
void MainWindow::on_ManipLaserOffButton_clicked()
{
    manip->cmdout = cmdManip_laseroff;
}
void MainWindow::on_ManipSolenoidOnButton_clicked()
{
    manip->cmdout = cmdManip_solenoidon;
}
void MainWindow::on_ManipSolenoidOffButton_clicked()
{
    manip->cmdout = cmdManip_solenoidoff;
}
void MainWindow::setSeqButtonsColorGray()
{
    ui->ManipSeq0Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq1Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq2Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq3Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq4Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq5Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq6Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq7Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq8Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq9Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq10Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq11Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq12Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq13Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq14Button->setStyleSheet("background-color: lightgray");
    ui->ManipSeq15Button->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosQGetCurrentPosButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosQClearPosButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosQMoveAbsButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosQMoveIncButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosBaseToolGetCurrentPosButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosBaseToolClearPosButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosBaseMoveAbsButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosBaseMoveIncButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosToolMoveIncButt->setStyleSheet("background-color: lightgray");
    ui->ManipSetPosGripperMoveButt->setStyleSheet("background-color: lightgray");
}
int MainWindow::showMessageBoxForSeqPoints(int num)
{
    QMessageBox msgBox;
    msgBox.setText("Czy napewno chcesz wykonać sekwencję numer " + QString::number(num) + "?");
    msgBox.setInformativeText("Upewnij się, że manipulator jest skalibrowny!!!");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    return msgBox.exec();
}
void MainWindow::on_ManipSeq0Button_clicked()
{
    if(showMessageBoxForSeqPoints(0) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 0;
        setSeqButtonsColorGray();
        ui->ManipSeq0Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq1Button_clicked()
{
    if(showMessageBoxForSeqPoints(1) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 1;
        setSeqButtonsColorGray();
        ui->ManipSeq1Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq2Button_clicked()
{
    if(showMessageBoxForSeqPoints(2) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 2;
        setSeqButtonsColorGray();
        ui->ManipSeq2Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq3Button_clicked()
{
    if(showMessageBoxForSeqPoints(3) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 3;
        setSeqButtonsColorGray();
        ui->ManipSeq3Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq4Button_clicked()
{
    if(showMessageBoxForSeqPoints(4) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 4;
        setSeqButtonsColorGray();
        ui->ManipSeq4Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq5Button_clicked()
{
    if(showMessageBoxForSeqPoints(5) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 5;
        setSeqButtonsColorGray();
        ui->ManipSeq5Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq6Button_clicked()
{
    if(showMessageBoxForSeqPoints(6) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 6;
        setSeqButtonsColorGray();
        ui->ManipSeq6Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq7Button_clicked()
{
    if(showMessageBoxForSeqPoints(7) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 7;
        setSeqButtonsColorGray();
        ui->ManipSeq7Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSavePointButton_clicked()
{
    QMessageBox msgBox;
    uint8_t seq = ui->ManipSeqSpinBox->value();
    uint8_t point = ui->ManipPointSpinBox->value();
    uint8_t armspeed = ui->ManipSpeedArmSpinBox->value();
    uint8_t type = 0;
    if(ui->ManipPointTypeComboBox->currentText() == "Line")
        type = 1;
    int8_t gripperspeed = ui->ManipGripperSpeedSpinBox->value();
    uint8_t grippertime = ui->ManipGripperTimeSpinBox->value();

    msgBox.setText("Czy napewno chcesz zapisać aktualną pozycję jako punkt z parametrami:"
                   "\nsekwencja " + QString::number(seq) +
                   "\n punkt "  + QString::number(point) +
                   "\n interpolacja " + ui->ManipPointTypeComboBox->currentText() +
                   "\n predkośc ramienia "  + QString::number(armspeed) +
                   "\n prędkość chwytaka "  + QString::number(gripperspeed) + " % pwm"
                   "\n czas pracy chwytaka "  + QString::number(grippertime) + " sekund ?");
    msgBox.setInformativeText("Upewnij się, że manipulator jest skalibrowany!!!");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        uint16_t len = manip->PrepareFrameSavePoint(seq, point, armspeed, type, gripperspeed, grippertime);
        socket->write((char*)(manip->bufsp), len);
        serial.write((char*)(manip->bufsp), len);
    }
}
void MainWindow::on_ManipClearSequenceButton_clicked()
{
    QMessageBox msgBox;
    uint8_t seq = ui->ManipSeqSpinBox->value();

    msgBox.setText("Czy napewno chcesz wyczyścić nsekwencję numer: " + QString::number(seq) + " ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqclear;
        manip->cmdoutvalue = seq;
    }
}
void MainWindow::on_LabSpeed0Slider_valueChanged(int value)
{
    lab->setspeed[0] = static_cast<int8_t>(value);
    ui->LabSpeed0LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_LabSpeed0Slider_sliderReleased()
{
    ui->LabSpeed0Slider->setValue(0);
}
void MainWindow::on_LabSpeed0IncButton_clicked()
{
    lab->setspeed[0] += 5;
    if(lab->setspeed[0] > 100)
        lab->setspeed[0] = 100;
    ui->LabSpeed0Slider->setValue(lab->setspeed[0]);
}
void MainWindow::on_LabSpeed0DecButton_clicked()
{
    lab->setspeed[0] -= 5;
    if(lab->setspeed[0] < -100)
        lab->setspeed[0] = -100;
    ui->LabSpeed0Slider->setValue(lab->setspeed[0]);
}
void MainWindow::on_LabSpeed0ZeroButton_clicked()
{
    ui->LabSpeed0Slider->setValue(0);
}
void MainWindow::on_LabSpeed1Slider_valueChanged(int value)
{
    lab->setspeed[1] = static_cast<int8_t>(value);
    ui->LabSpeed1LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_LabSpeed1Slider_sliderReleased()
{
    ui->LabSpeed1Slider->setValue(0);
}
void MainWindow::on_LabSpeed1IncButton_clicked()
{
    lab->setspeed[1] += 5;
    if(lab->setspeed[1] > 100)
        lab->setspeed[1] = 100;
    ui->LabSpeed1Slider->setValue(lab->setspeed[1]);
}
void MainWindow::on_LabSpeed1DecButton_clicked()
{
    lab->setspeed[1] -= 5;
    if(lab->setspeed[1] < -100)
        lab->setspeed[1] = -100;
    ui->LabSpeed1Slider->setValue(lab->setspeed[1]);
}
void MainWindow::on_LabSpeed1ZeroButton_clicked()
{
    ui->LabSpeed1Slider->setValue(0);
}
void MainWindow::on_LabSpeed2Slider_valueChanged(int value)
{
    lab->setspeed[2] = static_cast<int8_t>(value);
    ui->LabSpeed2LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_LabSpeed2Slider_sliderReleased()
{
    ui->LabSpeed2Slider->setValue(0);
}
void MainWindow::on_LabSpeed2IncButton_clicked()
{
    lab->setspeed[2] += 5;
    if(lab->setspeed[2] > 100)
        lab->setspeed[2] = 100;
    ui->LabSpeed2Slider->setValue(lab->setspeed[2]);
}
void MainWindow::on_LabSpeed2DecButton_clicked()
{
    lab->setspeed[2] -= 5;
    if(lab->setspeed[2] < -100)
        lab->setspeed[2] = -100;
    ui->LabSpeed2Slider->setValue(lab->setspeed[2]);
}
void MainWindow::on_LabSpeed2ZeroButton_clicked()
{
    ui->LabSpeed2Slider->setValue(0);
}
void MainWindow::on_LabSpeed3Slider_valueChanged(int value)
{
    lab->setspeed[3] = static_cast<int8_t>(value);
    ui->LabSpeed3LineEdit->setText(QString::number(value) + " %");
}
void MainWindow::on_LabSpeed3Slider_sliderReleased()
{
    ui->LabSpeed3Slider->setValue(0);
}
void MainWindow::on_LabSpeed3IncButton_clicked()
{
    lab->setspeed[3] += 5;
    if(lab->setspeed[3] > 100)
        lab->setspeed[3] = 100;
    ui->LabSpeed3Slider->setValue(lab->setspeed[3]);
}
void MainWindow::on_LabSpeed3DecButton_clicked()
{
    lab->setspeed[3] -= 5;
    if(lab->setspeed[3] < -100)
        lab->setspeed[3] = -100;
    ui->LabSpeed3Slider->setValue(lab->setspeed[3]);
}
void MainWindow::on_LabSpeed3ZeroButton_clicked()
{
    ui->LabSpeed3Slider->setValue(0);
}
int MainWindow::showMessageBoxForLab(QString str)
{
    QMessageBox msgBox;
    msgBox.setText(str);
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    return msgBox.exec();
}
void MainWindow::on_Lab0SetHomePosButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyzerować pozycję osi X?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotSetHomePos;
        lab->cmdoutvalue = 0;
    }
}
void MainWindow::on_Lab1SetHomePosButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyzerować pozycję silnika osi Y?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotSetHomePos;
        lab->cmdoutvalue = 1;
    }
}
void MainWindow::on_Lab2SetHomePosButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyzerować pozycję silnika osi Z?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotSetHomePos;
        lab->cmdoutvalue = 2;
    }
}
void MainWindow::on_Lab3SetHomePosButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyzerować pozycję silnika luminometru?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotSetHomePos;
        lab->cmdoutvalue = 3;
    }
}
void MainWindow::on_Lab0EnableLimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz włączyć krańcówki dla osi X?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotEnableLimits;
        lab->cmdoutvalue = 0;
    }
}
void MainWindow::on_Lab1EnableLimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz włączyć krańcówki dla osi Y?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotEnableLimits;
        lab->cmdoutvalue = 1;
    }
}
void MainWindow::on_Lab2EnableLimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz włączyć krańcówki dla osi Z?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotEnableLimits;
        lab->cmdoutvalue = 2;
    }
}
void MainWindow::on_Lab3EnableLimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz włączyć krańcówki dla luminometru?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotEnableLimits;
        lab->cmdoutvalue = 3;
    }
}
void MainWindow::on_Lab0DisableimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyłączyć krańcówki dla osi X?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotDisableLimits;
        lab->cmdoutvalue = 0;
    }
}
void MainWindow::on_Lab1DisableimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyłączyć krańcówki dla osi Y?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotDisableLimits;
        lab->cmdoutvalue = 1;
    }
}
void MainWindow::on_Lab2DisableimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyłączyć krańcówki dla osi Z?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotDisableLimits;
        lab->cmdoutvalue = 2;
    }
}
void MainWindow::on_Lab3DisableimitsButton_clicked()
{
    if(showMessageBoxForLab("Czy napewno chcesz wyłączyć krańcówki dla luminometru?") == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_MotDisableLimits;
        lab->cmdoutvalue = 3;
    }
}
void MainWindow::on_LabRemoteControlButton_clicked()
{
    lab->cmdout = cmdLab_Remote;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabGripperOpenButton_clicked()
{
    lab->cmdout = cmdLab_GripperOpen;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabGripperCloseButton_2_clicked()
{
    lab->cmdout = cmdLab_GripperClose;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabLuminometrOpenButton_clicked()
{
    lab->cmdout = cmdLab_LumiOpen;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabLuminometrCloseButton_clicked()
{
    lab->cmdout = cmdLab_LumiClose;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabStartMeasurementButton_clicked()
{
    lab->cmdout = cmdLab_LumiStartMeas;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabNeutralPositionButton_clicked()
{
    lab->cmdout = cmdLab_LumiNeutralPos;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabTurnOnOffLuminometerButton_clicked()
{
    lab->cmdout = cmdLab_LumiTurnOnOff;
    lab->cmdoutvalue = 0;
}
void MainWindow::on_LabGoToSwabXYButton_clicked()
{
    lab->cmdout = cmdLab_MoveXYPosSwab;
    lab->cmdoutvalue = static_cast<uint8_t>(ui->LabNumberOfSwabSpinBox->value());
}
void MainWindow::on_LabStartSequenceButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Czy na pewno chcesz uruchomić sekwencję ruchów?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        lab->cmdout = cmdLab_AutoRunSeq;
        lab->cmdoutvalue = static_cast<uint8_t>(ui->LabNumberOfSequenceSpinBox->value());
    }
}
void MainWindow::on_LabSequenceNextButton_clicked()
{
    lab->cmdout = cmdLab_AutoNextPoint;
}
void MainWindow::on_LabSequencePreviousButton_clicked()
{
    lab->cmdout = cmdLab_AutoPrevPoint;
}
void MainWindow::on_LabLumiDiscardSwabButton_clicked()
{
    lab->cmdout = cmdLab_LumiHorizontal;
}
void MainWindow::on_LabLumiVerticalPosButton_clicked()
{
    lab->cmdout = cmdLab_LumiVertical;
}
void MainWindow::on_LabMoveZUpButton_clicked()
{
    lab->cmdout = cmdLab_MoveZPosUp;
}
void MainWindow::on_LabMoveZSwabButton_clicked()
{
    lab->cmdout = cmdLab_MoveZPosSwab;
}
void MainWindow::on_LabMoveZLumiButton_clicked()
{
    lab->cmdout = cmdLab_MoveZPosLumi;
}
void MainWindow::on_LabMoveZMeasButton_clicked()
{
    lab->cmdout = cmdLab_MoveZPosMeas;
}
void MainWindow::on_LabMoveXYLumiButton_clicked()
{
    lab->cmdout = cmdLab_MoveXYPosLumi;
}
void MainWindow::on_LabMoveXYMeasButton_clicked()
{
    lab->cmdout = cmdLab_MoveXYPosMeas;
}
void MainWindow::on_LabEnablePIDButton_clicked()
{
    lab->cmdout = cmdLab_MotEnablePID;
}
void MainWindow::on_LabDisablePIDButton_clicked()
{
    lab->cmdout = cmdLab_MotDisablePID;
}
void MainWindow::on_AutoSendPointsButton_clicked()
{
    uint32_t len = drive->PrepareFrameNewPoints();
    serial.write((char*)drive->bufnp, len);
}
void MainWindow::on_AutoSetYawOffsetButton_clicked()
{
    drive->cmdout = cmdDrive_setyawoffset;
}
void MainWindow::on_AutoClearYawOffsetButton_clicked()
{
    drive->cmdout = cmdDrive_clearyawoffset;
}
void MainWindow::on_ManipTelemetryAllEnableButton_clicked()
{
    manip->cmdout = Hostcmd_telemallen;
}
void MainWindow::on_ManipTelemetryAllDisableButton_clicked()
{
    manip->cmdout = Hostcmd_telemalldis;
}
void MainWindow::on_ManipTelemetryErrorsEnableButton_clicked()
{
    manip->cmdout = Hostcmd_telemerrorsen;
}
void MainWindow::on_ManipTelemetryErrorsDisableButton_clicked()
{
    manip->cmdout = Hostcmd_telemerrorsdis;
}
void MainWindow::on_ManipTelemetryMotposEnableButton_clicked()
{
    manip->cmdout = Hostcmd_telemposen;
}
void MainWindow::on_ManipTelemetryMotposDisableButton_clicked()
{
    manip->cmdout = Hostcmd_telemposdis;
}
void MainWindow::on_AutoTelemAllEnableButton_clicked()
{
    drive->cmdout = cmdDrive_TelemAllEn;
}
void MainWindow::on_AutoTelemAllEnableButton_2_clicked()
{
    drive->cmdout = cmdDrive_TelemAllDis;
}
void MainWindow::on_AutoTelemGpsEnableButton_clicked()
{
    drive->cmdout = cmdDrive_TelemABSEn;
}
void MainWindow::on_AutoTelemGpsDisableButton_clicked()
{
    drive->cmdout = cmdDrive_TelemABSDis;
}
void MainWindow::on_AutoTelemErrorsEnableButton_clicked()
{
    drive->cmdout = cmdDrive_TelemErrorsEn;
}
void MainWindow::on_AutoTelemErrorsEnableButton_2_clicked()
{
    drive->cmdout = cmdDrive_TelemErrorsDis;
}
void MainWindow::on_AutoTelemBallEnableButton_clicked()
{
    drive->cmdout = cmdDrive_TelemArtagRELEn;
}
void MainWindow::on_AutoTelemBallDisableButton_clicked()
{
    drive->cmdout = cmdDrive_TelemArtagRELDis;
}
void MainWindow::on_LabMoveZSwab2Button_clicked()
{
    lab->cmdout = cmdLab_MoveZPosSwab2;
}
void MainWindow::on_ManipSetPosQGetCurrentPosButt_clicked()
{
    ui->ManipSetPosQ0DoubleSpinBox->setValue(manip->motspos[0]);
    ui->ManipSetPosQ1DoubleSpinBox->setValue(manip->motspos[1]);
    ui->ManipSetPosQ2DoubleSpinBox->setValue(manip->motspos[2]);
    ui->ManipSetPosQ3DoubleSpinBox->setValue(manip->motspos[3]);
    ui->ManipSetPosQ4DoubleSpinBox->setValue(manip->motspos[4]);
    ui->ManipSetPosQ5DoubleSpinBox->setValue(manip->motspos[5]);
}
void MainWindow::on_ManipSetPosBaseToolGetCurrentPosButt_clicked()
{
    ui->ManipSetPosXDoubleSpinBox->setValue(manip->axesPosRPY[0]);
    ui->ManipSetPosYDoubleSpinBox->setValue(manip->axesPosRPY[1]);
    ui->ManipSetPosZDoubleSpinBox->setValue(manip->axesPosRPY[2]);
    ui->ManipSetPosYawDoubleSpinBox->setValue(manip->axesPosRPY[3]);
    ui->ManipSetPosPitchDoubleSpinBox->setValue(manip->axesPosRPY[4]);
    ui->ManipSetPosRollDoubleSpinBox->setValue(manip->axesPosRPY[5]);
}
void MainWindow::on_ManipSetPosQClearPosButt_clicked()
{
    ui->ManipSetPosQ0DoubleSpinBox->setValue(0);
    ui->ManipSetPosQ1DoubleSpinBox->setValue(0);
    ui->ManipSetPosQ2DoubleSpinBox->setValue(0);
    ui->ManipSetPosQ3DoubleSpinBox->setValue(0);
    ui->ManipSetPosQ4DoubleSpinBox->setValue(0);
    ui->ManipSetPosQ5DoubleSpinBox->setValue(0);
}
void MainWindow::on_ManipSetPosBaseToolClearPosButt_clicked()
{
    ui->ManipSetPosXDoubleSpinBox->setValue(0);
    ui->ManipSetPosYDoubleSpinBox->setValue(0);
    ui->ManipSetPosZDoubleSpinBox->setValue(0);
    ui->ManipSetPosYawDoubleSpinBox->setValue(0);
    ui->ManipSetPosPitchDoubleSpinBox->setValue(0);
    ui->ManipSetPosRollDoubleSpinBox->setValue(0);
}
void MainWindow::on_ManipSetPosQMoveAbsButt_clicked()
{
    double tab[6];
    tab[0] = ui->ManipSetPosQ0DoubleSpinBox->value();
    tab[1] = ui->ManipSetPosQ1DoubleSpinBox->value();
    tab[2] = ui->ManipSetPosQ2DoubleSpinBox->value();
    tab[3] = ui->ManipSetPosQ3DoubleSpinBox->value();
    tab[4] = ui->ManipSetPosQ4DoubleSpinBox->value();
    tab[5] = ui->ManipSetPosQ5DoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameJoinMoveAbs(tab);
//    socket->write((char*)(manip->bufsp), len);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetPosQMoveIncButt_clicked()
{
    double tab[6];
    tab[0] = ui->ManipSetPosQ0DoubleSpinBox->value();
    tab[1] = ui->ManipSetPosQ1DoubleSpinBox->value();
    tab[2] = ui->ManipSetPosQ2DoubleSpinBox->value();
    tab[3] = ui->ManipSetPosQ3DoubleSpinBox->value();
    tab[4] = ui->ManipSetPosQ4DoubleSpinBox->value();
    tab[5] = ui->ManipSetPosQ5DoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameJoinMoveInc(tab);
//    socket->write((char*)(manip->bufsp), len);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetPosBaseMoveAbsButt_clicked()
{
    double tab[6];
    tab[0] = ui->ManipSetPosXDoubleSpinBox->value();
    tab[1] = ui->ManipSetPosYDoubleSpinBox->value();
    tab[2] = ui->ManipSetPosZDoubleSpinBox->value();
    tab[3] = ui->ManipSetPosYawDoubleSpinBox->value();
    tab[4] = ui->ManipSetPosPitchDoubleSpinBox->value();
    tab[5] = ui->ManipSetPosRollDoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameBaseMoveAbs(tab);
//    socket->write((char*)(manip->bufsp), len);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetPosBaseMoveIncButt_clicked()
{
    double tab[6];
    tab[0] = ui->ManipSetPosXDoubleSpinBox->value();
    tab[1] = ui->ManipSetPosYDoubleSpinBox->value();
    tab[2] = ui->ManipSetPosZDoubleSpinBox->value();
    tab[3] = ui->ManipSetPosYawDoubleSpinBox->value();
    tab[4] = ui->ManipSetPosPitchDoubleSpinBox->value();
    tab[5] = ui->ManipSetPosRollDoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameBaseMoveInc(tab);
//    socket->write((char*)(manip->bufsp), len);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetPosToolMoveIncButt_clicked()
{
    double tab[6];
    tab[0] = ui->ManipSetPosXDoubleSpinBox->value();
    tab[1] = ui->ManipSetPosYDoubleSpinBox->value();
    tab[2] = ui->ManipSetPosZDoubleSpinBox->value();
    tab[3] = ui->ManipSetPosYawDoubleSpinBox->value();
    tab[4] = ui->ManipSetPosPitchDoubleSpinBox->value();
    tab[5] = ui->ManipSetPosRollDoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameToolMoveInc(tab);
//    socket->write((char*)(manip->bufsp), len);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetPosGripperMoveButt_clicked()
{
    double speed = ui->ManipSetPosGripSpeedDoubleSpinBox->value();
    double time = ui->ManipSetPosGripTimeDoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameGripperMove(speed, time);
//    socket->write((char*)(manip->bufsp), len);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_DriveSoftwareEmergencyLed_clicked()
{
    if(drive->emergencySoftwareEmergencySwitch == true)
        drive->cmdout = cmdDrive_EmerSoftDis;
    else if(drive->emergencySoftwareEmergencySwitch == false)
        drive->cmdout = cmdDrive_EmerSoftEn;
}
void MainWindow::on_ManipSetPosBaseToolGetCurrentMatButt_clicked()
{
    ui->ManipSetPosMat00DoubleSpinBox->setValue(manip->axesPosMat[0][0]);
    ui->ManipSetPosMat01DoubleSpinBox->setValue(manip->axesPosMat[0][1]);
    ui->ManipSetPosMat02DoubleSpinBox->setValue(manip->axesPosMat[0][2]);
    ui->ManipSetPosMat03DoubleSpinBox->setValue(manip->axesPosMat[0][3]);
    ui->ManipSetPosMat10DoubleSpinBox->setValue(manip->axesPosMat[1][0]);
    ui->ManipSetPosMat11DoubleSpinBox->setValue(manip->axesPosMat[1][1]);
    ui->ManipSetPosMat12DoubleSpinBox->setValue(manip->axesPosMat[1][2]);
    ui->ManipSetPosMat13DoubleSpinBox->setValue(manip->axesPosMat[1][3]);
    ui->ManipSetPosMat20DoubleSpinBox->setValue(manip->axesPosMat[2][0]);
    ui->ManipSetPosMat21DoubleSpinBox->setValue(manip->axesPosMat[2][1]);
    ui->ManipSetPosMat22DoubleSpinBox->setValue(manip->axesPosMat[2][2]);
    ui->ManipSetPosMat23DoubleSpinBox->setValue(manip->axesPosMat[2][3]);
}
void MainWindow::on_ManipSetPosBaseToolClearMatButt_clicked()
{
    ui->ManipSetPosMat00DoubleSpinBox->setValue(1);
    ui->ManipSetPosMat01DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat02DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat03DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat10DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat11DoubleSpinBox->setValue(1);
    ui->ManipSetPosMat12DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat13DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat20DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat21DoubleSpinBox->setValue(0);
    ui->ManipSetPosMat22DoubleSpinBox->setValue(1);
    ui->ManipSetPosMat23DoubleSpinBox->setValue(0);
}
void MainWindow::on_ManipSetMatBaseMoveAbsButt_clicked()
{
    double tab[12];
    int idx = 0;
    tab[idx++] = ui->ManipSetPosMat00DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat01DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat02DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat03DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat10DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat11DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat12DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat13DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat20DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat21DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat22DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat23DoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameBaseMoveAbsMat(tab);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetMatBaseMoveIncButt_clicked()
{
    double tab[12];
    int idx = 0;
    tab[idx++] = ui->ManipSetPosMat00DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat01DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat02DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat03DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat10DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat11DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat12DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat13DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat20DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat21DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat22DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat23DoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameBaseMoveIncMat(tab);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetMatToolMoveIncButt_clicked()
{
    double tab[12];
    int idx = 0;
    tab[idx++] = ui->ManipSetPosMat00DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat01DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat02DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat03DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat10DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat11DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat12DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat13DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat20DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat21DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat22DoubleSpinBox->value();
    tab[idx++] = ui->ManipSetPosMat23DoubleSpinBox->value();
    uint16_t len = manip->PrepareFrameToolMoveIncMat(tab);
    serial.write((char*)(manip->bufsp), len);
}
void MainWindow::on_ManipSetPosBaseToolFindMatButt_clicked()
{
//    double FunRef_0_0(double T[6]){return -(cos(T[3])*cos(T[5])*sin(T[4]))+sin(T[3])*sin(T[5]);}
//    double FunRef_0_1(double T[6]){return cos(T[5])*sin(T[3])+cos(T[3])*sin(T[4])*sin(T[5]);}
//    double FunRef_0_2(double T[6]){return cos(T[3])*cos(T[4]);}
//    double FunRef_0_3(double T[6]){return T[0];}
//    double FunRef_1_0(double T[6]){return -(cos(T[5])*sin(T[3])*sin(T[4]))-cos(T[3])*sin(T[5]);}
//    double FunRef_1_1(double T[6]){return -(cos(T[3])*cos(T[5]))+sin(T[3])*sin(T[4])*sin(T[5]);}
//    double FunRef_1_2(double T[6]){return cos(T[4])*sin(T[3]);}
//    double FunRef_1_3(double T[6]){return T[1];}
//    double FunRef_2_0(double T[6]){return cos(T[4])*cos(T[5]);}
//    double FunRef_2_1(double T[6]){return -(cos(T[4])*sin(T[5]));}
//    double FunRef_2_2(double T[6]){return sin(T[4]);}
//    double FunRef_2_3(double T[6]){return T[2];}

    double T[6];

    T[0] = ui->ManipSetPosXDoubleSpinBox->value();
    T[1] = ui->ManipSetPosYDoubleSpinBox->value();
    T[2] = ui->ManipSetPosZDoubleSpinBox->value();
    T[3] = ui->ManipSetPosYawDoubleSpinBox->value();
    T[4] = ui->ManipSetPosPitchDoubleSpinBox->value();
    T[5] = ui->ManipSetPosRollDoubleSpinBox->value();

    ui->ManipSetPosMat00DoubleSpinBox->setValue(-cos(T[3])*cos(T[5])*sin(T[4])+sin(T[3])*sin(T[5]));
    ui->ManipSetPosMat01DoubleSpinBox->setValue(cos(T[5])*sin(T[3])+cos(T[3])*sin(T[4])*sin(T[5]));
    ui->ManipSetPosMat02DoubleSpinBox->setValue(cos(T[3])*cos(T[4]));
    ui->ManipSetPosMat03DoubleSpinBox->setValue(T[0]);
    ui->ManipSetPosMat10DoubleSpinBox->setValue(-cos(T[5])*sin(T[3])*sin(T[4])-cos(T[3])*sin(T[5]));
    ui->ManipSetPosMat11DoubleSpinBox->setValue(-cos(T[3])*cos(T[5])+sin(T[3])*sin(T[4])*sin(T[5]));
    ui->ManipSetPosMat12DoubleSpinBox->setValue(cos(T[4])*sin(T[3]));
    ui->ManipSetPosMat13DoubleSpinBox->setValue(T[1]);
    ui->ManipSetPosMat20DoubleSpinBox->setValue(cos(T[4])*cos(T[5]));
    ui->ManipSetPosMat21DoubleSpinBox->setValue(-cos(T[4])*sin(T[5]));
    ui->ManipSetPosMat22DoubleSpinBox->setValue(sin(T[4]));
    ui->ManipSetPosMat23DoubleSpinBox->setValue(T[2]);
}
void MainWindow::on_ManipSeq8Button_clicked()
{
    if(showMessageBoxForSeqPoints(8) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 8;
        setSeqButtonsColorGray();
        ui->ManipSeq8Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq9Button_clicked()
{
    if(showMessageBoxForSeqPoints(9) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 9;
        setSeqButtonsColorGray();
        ui->ManipSeq9Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq10Button_clicked()
{
    if(showMessageBoxForSeqPoints(10) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 10;
        setSeqButtonsColorGray();
        ui->ManipSeq10Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq11Button_clicked()
{
    if(showMessageBoxForSeqPoints(11) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 11;
        setSeqButtonsColorGray();
        ui->ManipSeq11Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq12Button_clicked()
{
    if(showMessageBoxForSeqPoints(12) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 12;
        setSeqButtonsColorGray();
        ui->ManipSeq12Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq13Button_clicked()
{
    if(showMessageBoxForSeqPoints(13) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 13;
        setSeqButtonsColorGray();
        ui->ManipSeq13Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq14Button_clicked()
{
    if(showMessageBoxForSeqPoints(14) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 14;
        setSeqButtonsColorGray();
        ui->ManipSeq14Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_ManipSeq15Button_clicked()
{
    if(showMessageBoxForSeqPoints(15) == QMessageBox::Yes)
    {
        manip->cmdout = cmdManip_seqmove;
        manip->cmdoutvalue = 15;
        setSeqButtonsColorGray();
        ui->ManipSeq15Button->setStyleSheet("background-color: lightgreen");
    }
}
void MainWindow::on_RoverPosLogStart_clicked()
{
    QDateTime datetime = QDateTime::currentDateTime();
    QString time_format = "yyyy.MM.dd.HH.mm.ss";
    fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "C:\\Users\\Dawid\\Desktop\\" + datetime.toString(time_format), tr("Text (*.txt)"));
    file = new QFile(fileName);
    if (!file->open(QIODevice::Append | QIODevice::Text))
        return;

    QTextStream out(file);
    out << "Date, Time, Lon, Lat, Yaw, Pitch, Roll\n";
    timerSaveRoverPos->start(100);
}
void MainWindow::on_RoverPosLogStop_clicked()
{
    timerSaveRoverPos->stop();
}
void MainWindow::on_RoverPosClearTextBox_clicked()
{
    roverPosTextEditStr.clear();
    ui->RoverPosLogTextEdit->clear();
    roverPosTextEditStr = "Date, Time, Lon, Lat, Yaw, Pitch, Roll\n";
}
