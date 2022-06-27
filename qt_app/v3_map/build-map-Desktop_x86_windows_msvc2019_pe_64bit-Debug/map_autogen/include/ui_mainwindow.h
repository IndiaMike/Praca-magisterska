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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QGroupBox *groupBox_2;
    QTextEdit *textEditLogs;
    QLineEdit *lineEditText2Send;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1742, 810);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-90, 0, 1011, 621));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1060, 40, 261, 91));
        pushButtonClearMap = new QPushButton(groupBox);
        pushButtonClearMap->setObjectName(QString::fromUtf8("pushButtonClearMap"));
        pushButtonClearMap->setGeometry(QRect(10, 40, 83, 29));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1050, 140, 671, 421));
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1742, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Map", nullptr));
        pushButtonClearMap->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Communication", nullptr));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Send", nullptr));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
