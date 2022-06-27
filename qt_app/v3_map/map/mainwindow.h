#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cell.h"
#include <QAbstractSocket>
#include <QHostAddress>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene* scene;
    cell *cells[100][100];
    QTcpSocket *socket;

    void Map_GenerateMap();

private:
    void addToLogs(QString message);



protected:
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void on_pushButtonClearMap_clicked();
    void wifiRead();

    void on_pushButtonConnect_clicked();



    void on_pushButtonSend_clicked();

    void on_pushButtonClear_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
