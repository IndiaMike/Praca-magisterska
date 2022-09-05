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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QPushButton *pushButtonClearMap;
    QComboBox *comboBoxCellType;
    QPushButton *pushButton;
    QPushButton *pushButtonAddSafetyZone;
    QPushButton *pushButtonClear_saveObst;
    QPushButton *pushButton_2;
    QPushButton *pushButtonMapping;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QTextEdit *textEditLogs;
    QLineEdit *lineEditText2Send;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonClear;
    QRadioButton *radioButtonLED;
    QGroupBox *groupBox_3;
    QPushButton *pushButtonGoHome;
    QPushButton *pushButtonSTOP;
    QPushButton *pushButtonAtHome;
    QGroupBox *groupBox_4;
    QPushButton *pushButtonR;
    QPushButton *pushButtonS;
    QPushButton *pushButtonW;
    QPushButton *pushButtonSpeed0;
    QPushButton *pushButtonL;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButtonGoThePath;
    QPushButton *pushButtonTest;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumberPink;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1737, 932);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-90, 0, 1011, 621));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1050, 40, 671, 101));
        pushButtonClearMap = new QPushButton(groupBox);
        pushButtonClearMap->setObjectName(QString::fromUtf8("pushButtonClearMap"));
        pushButtonClearMap->setGeometry(QRect(560, 60, 101, 29));
        comboBoxCellType = new QComboBox(groupBox);
        comboBoxCellType->addItem(QString());
        comboBoxCellType->addItem(QString());
        comboBoxCellType->addItem(QString());
        comboBoxCellType->addItem(QString());
        comboBoxCellType->setObjectName(QString::fromUtf8("comboBoxCellType"));
        comboBoxCellType->setGeometry(QRect(240, 40, 121, 28));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 20, 83, 29));
        pushButtonAddSafetyZone = new QPushButton(groupBox);
        pushButtonAddSafetyZone->setObjectName(QString::fromUtf8("pushButtonAddSafetyZone"));
        pushButtonAddSafetyZone->setGeometry(QRect(10, 60, 121, 29));
        pushButtonClear_saveObst = new QPushButton(groupBox);
        pushButtonClear_saveObst->setObjectName(QString::fromUtf8("pushButtonClear_saveObst"));
        pushButtonClear_saveObst->setGeometry(QRect(560, 20, 101, 29));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 60, 83, 29));
        pushButtonMapping = new QPushButton(groupBox);
        pushButtonMapping->setObjectName(QString::fromUtf8("pushButtonMapping"));
        pushButtonMapping->setGeometry(QRect(10, 20, 121, 29));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 40, 111, 31));
        QFont font;
        font.setPointSize(9);
        label_2->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1050, 170, 671, 421));
        textEditLogs = new QTextEdit(groupBox_2);
        textEditLogs->setObjectName(QString::fromUtf8("textEditLogs"));
        textEditLogs->setGeometry(QRect(10, 60, 651, 311));
        lineEditText2Send = new QLineEdit(groupBox_2);
        lineEditText2Send->setObjectName(QString::fromUtf8("lineEditText2Send"));
        lineEditText2Send->setGeometry(QRect(10, 380, 561, 28));
        pushButtonSend = new QPushButton(groupBox_2);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(580, 380, 83, 29));
        pushButtonConnect = new QPushButton(groupBox_2);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(10, 30, 83, 29));
        pushButtonClear = new QPushButton(groupBox_2);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(580, 30, 83, 29));
        radioButtonLED = new QRadioButton(groupBox_2);
        radioButtonLED->setObjectName(QString::fromUtf8("radioButtonLED"));
        radioButtonLED->setGeometry(QRect(110, 30, 131, 26));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1050, 610, 671, 311));
        pushButtonGoHome = new QPushButton(groupBox_3);
        pushButtonGoHome->setObjectName(QString::fromUtf8("pushButtonGoHome"));
        pushButtonGoHome->setGeometry(QRect(300, 80, 101, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGoHome->setIcon(icon);
        pushButtonGoHome->setIconSize(QSize(40, 40));
        pushButtonGoHome->setAutoDefault(false);
        pushButtonSTOP = new QPushButton(groupBox_3);
        pushButtonSTOP->setObjectName(QString::fromUtf8("pushButtonSTOP"));
        pushButtonSTOP->setGeometry(QRect(380, 210, 261, 51));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(64, 65, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButtonSTOP->setPalette(palette);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButtonSTOP->setFont(font1);
        pushButtonSTOP->setAutoFillBackground(false);
        pushButtonAtHome = new QPushButton(groupBox_3);
        pushButtonAtHome->setObjectName(QString::fromUtf8("pushButtonAtHome"));
        pushButtonAtHome->setGeometry(QRect(300, 120, 101, 31));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 80, 201, 191));
        pushButtonR = new QPushButton(groupBox_4);
        pushButtonR->setObjectName(QString::fromUtf8("pushButtonR"));
        pushButtonR->setGeometry(QRect(130, 90, 41, 41));
        pushButtonS = new QPushButton(groupBox_4);
        pushButtonS->setObjectName(QString::fromUtf8("pushButtonS"));
        pushButtonS->setGeometry(QRect(80, 140, 41, 41));
        pushButtonW = new QPushButton(groupBox_4);
        pushButtonW->setObjectName(QString::fromUtf8("pushButtonW"));
        pushButtonW->setGeometry(QRect(80, 40, 41, 41));
        pushButtonSpeed0 = new QPushButton(groupBox_4);
        pushButtonSpeed0->setObjectName(QString::fromUtf8("pushButtonSpeed0"));
        pushButtonSpeed0->setGeometry(QRect(80, 90, 41, 41));
        pushButtonL = new QPushButton(groupBox_4);
        pushButtonL->setObjectName(QString::fromUtf8("pushButtonL"));
        pushButtonL->setGeometry(QRect(30, 90, 41, 41));
        comboBox = new QComboBox(groupBox_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 40, 82, 28));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 111, 21));
        label->setFont(font);
        pushButtonGoThePath = new QPushButton(groupBox_3);
        pushButtonGoThePath->setObjectName(QString::fromUtf8("pushButtonGoThePath"));
        pushButtonGoThePath->setGeometry(QRect(300, 40, 101, 29));
        groupBox_4->raise();
        pushButtonGoHome->raise();
        pushButtonAtHome->raise();
        pushButtonSTOP->raise();
        comboBox->raise();
        label->raise();
        pushButtonGoThePath->raise();
        pushButtonTest = new QPushButton(centralwidget);
        pushButtonTest->setObjectName(QString::fromUtf8("pushButtonTest"));
        pushButtonTest->setEnabled(true);
        pushButtonTest->setGeometry(QRect(1140, 20, 101, 31));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(1250, 30, 64, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1250, 10, 63, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1330, 10, 63, 20));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(1330, 30, 64, 23));
        lcdNumberPink = new QLCDNumber(centralwidget);
        lcdNumberPink->setObjectName(QString::fromUtf8("lcdNumberPink"));
        lcdNumberPink->setGeometry(QRect(1410, 30, 64, 23));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1410, 10, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        groupBox_3->raise();
        graphicsView->raise();
        groupBox->raise();
        groupBox_2->raise();
        pushButtonTest->raise();
        lcdNumber->raise();
        label_3->raise();
        label_4->raise();
        lcdNumber_2->raise();
        lcdNumberPink->raise();
        label_5->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1737, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButtonGoHome->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "myROBOT", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Map", nullptr));
        pushButtonClearMap->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        comboBoxCellType->setItemText(0, QApplication::translate("MainWindow", "Free", nullptr));
        comboBoxCellType->setItemText(1, QApplication::translate("MainWindow", "Position", nullptr));
        comboBoxCellType->setItemText(2, QApplication::translate("MainWindow", "Obstacle", nullptr));
        comboBoxCellType->setItemText(3, QApplication::translate("MainWindow", "Destination", nullptr));

        pushButton->setText(QApplication::translate("MainWindow", "A*", nullptr));
        pushButtonAddSafetyZone->setText(QApplication::translate("MainWindow", "Add Safety Zone", nullptr));
        pushButtonClear_saveObst->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Flood Fill", nullptr));
        pushButtonMapping->setText(QApplication::translate("MainWindow", "Mapping", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Cell type:", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Communication", nullptr));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Send", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonSend->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        radioButtonLED->setText(QApplication::translate("MainWindow", "Connection test", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Control", nullptr));
        pushButtonGoHome->setText(QApplication::translate("MainWindow", "Go Home", nullptr));
#ifndef QT_NO_WHATSTHIS
        pushButtonSTOP->setWhatsThis(QApplication::translate("MainWindow", "STOP ROBOT", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButtonSTOP->setText(QApplication::translate("MainWindow", "EMERGENCY STOP!", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonSTOP->setShortcut(QApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        pushButtonAtHome->setText(QApplication::translate("MainWindow", "at Home", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Manual", nullptr));
        pushButtonR->setText(QApplication::translate("MainWindow", "D", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonR->setShortcut(QApplication::translate("MainWindow", "Right", nullptr));
#endif // QT_NO_SHORTCUT
        pushButtonS->setText(QApplication::translate("MainWindow", "S", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonS->setShortcut(QApplication::translate("MainWindow", "Down", nullptr));
#endif // QT_NO_SHORTCUT
        pushButtonW->setText(QApplication::translate("MainWindow", "W", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonW->setShortcut(QApplication::translate("MainWindow", "Up", nullptr));
#endif // QT_NO_SHORTCUT
        pushButtonSpeed0->setText(QApplication::translate("MainWindow", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonSpeed0->setShortcut(QApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_NO_SHORTCUT
        pushButtonL->setText(QApplication::translate("MainWindow", "A", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonL->setShortcut(QApplication::translate("MainWindow", "Left", nullptr));
#endif // QT_NO_SHORTCUT
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Manual", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "To point", nullptr));

        label->setText(QApplication::translate("MainWindow", "Control mode:", nullptr));
        pushButtonGoThePath->setText(QApplication::translate("MainWindow", "Go the Path", nullptr));
        pushButtonTest->setText(QApplication::translate("MainWindow", "Get statistic", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Green", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Yellow", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Magenta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
