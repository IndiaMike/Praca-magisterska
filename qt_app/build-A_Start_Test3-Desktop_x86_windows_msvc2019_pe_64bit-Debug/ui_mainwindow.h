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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *buttonMapGenerate;
    QPushButton *buttonRunAStarAlgorithm;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1950, 1050);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 1000, 1000));
        buttonMapGenerate = new QPushButton(centralwidget);
        buttonMapGenerate->setObjectName(QString::fromUtf8("buttonMapGenerate"));
        buttonMapGenerate->setGeometry(QRect(1020, 10, 441, 69));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonMapGenerate->sizePolicy().hasHeightForWidth());
        buttonMapGenerate->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        buttonMapGenerate->setFont(font);
        buttonRunAStarAlgorithm = new QPushButton(centralwidget);
        buttonRunAStarAlgorithm->setObjectName(QString::fromUtf8("buttonRunAStarAlgorithm"));
        buttonRunAStarAlgorithm->setGeometry(QRect(1020, 90, 441, 69));
        sizePolicy.setHeightForWidth(buttonRunAStarAlgorithm->sizePolicy().hasHeightForWidth());
        buttonRunAStarAlgorithm->setSizePolicy(sizePolicy);
        buttonRunAStarAlgorithm->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1950, 21));
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
        buttonMapGenerate->setText(QApplication::translate("MainWindow", "Generate new map", nullptr));
        buttonRunAStarAlgorithm->setText(QApplication::translate("MainWindow", "Run A* Algorithm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
