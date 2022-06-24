#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cell.h"

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
    void Map_GenerateMap();

protected:
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void on_pushButtonClearMap_clicked();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
