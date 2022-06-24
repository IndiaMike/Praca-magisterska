#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QTouchEvent>
#include <QPaintEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "node.h"
#include <QMouseEvent>
#include <QKeyEvent>
#include <QDateTime>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void Map_GenerateMap();
    void Map_RedrawMap();
    void Map_GenerateObstacles(double percent);
    void on_buttonMapGenerate_clicked();

    void Map_GenerateStartFinish();
    void Map_Find8Neighbors();
    bool Map_AStar();
    void Map_FindZeroNode();
    void Map_FindNeighborsCost();
    bool Map_CheckFinish();
    void on_buttonRunAStarAlgorithm_clicked();
    void mousePressEvent(QMouseEvent *e);
    void Map_ResetMap(int x, int y);
    void Map_FindVisibleObstacles();
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::MainWindow *ui;
    const double MAX_COST = 100000.0;
    const int nodenum = 100;
    const int scenedim = 1000;
    const int scenex = 2;
    const int sceney = 2;
    const int seeRange = 6;
    QGraphicsScene* scene;
    Node* nodes[100][100];
    bool firstStep;
    int nodeStartX;
    int nodeStartY;
    int nodeFinishX;
    int nodeFinishY;
    int nodeX0;
    int nodeY0;
    QVector<Node*> nodesPath;

};
#endif // MAINWINDOW_H
