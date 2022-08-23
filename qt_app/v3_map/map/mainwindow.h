#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cell.h"
#include <QAbstractSocket>
#include <QHostAddress>
#include <QTcpSocket>
#include <qlist.h>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


#define POST_WIDTH  10
#define CELL_WIDTH  10
#define POST_HEIGHT 10
#define CELL_HEIGHT  10



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene* scene;
    cell *cells[100][100];
    QTcpSocket *socket;
    QGraphicsPolygonItem *triangle;
    void Map_GenerateMap();
    void pushButtonAStar_clicked();
    void A_STAR_FIND_PATH(cell* startCell, cell* finishCell);
    QList<cell*> A_STAR_GET_NEIGHBOURS(cell* cella);
    int GET_DISTANCE_BETWEEN_CELLS(cell* cellA, cell* cellB);
    void A_STAR_GENERATE_PATH(cell *startCell, cell *finishCell);

public slots:
    void WatchDogComunicationReset();



private:
    void addToLogs(QString message);
    void keyPressEvent(QKeyEvent *event);
    void DRAW_TRIANGLE(cell *cell, int direction);

    QTimer *timer;

protected:
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void on_pushButtonClearMap_clicked();
    void wifiRead();

    void on_pushButtonConnect_clicked();



    void on_pushButtonSend_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonW_clicked();

    void on_pushButtonSTOP_clicked();

    void on_pushButtonR_clicked();

    void on_pushButtonL_clicked();

    void on_pushButtonS_clicked();

    void on_pushButton_clicked();

    void on_pushButtonTest_clicked();

    void on_pushButtonGoHome_clicked();

    void on_pushButtonAtHome_clicked();

   // void on_checkBox_clicked();

    void on_radioButtonLED_clicked(bool value);

   // void on_radioButtonLED_released();

   //void on_radioButtonLED_pressed();

    void on_pushButtonSpeed0_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint);

    void on_pushButtonAddSafetyZone_clicked();

    void on_pushButtonClear_saveObst_clicked();

    void on_pushButtonGoThePath_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
