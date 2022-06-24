#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "node.h"
#include <math.h>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QDateTime>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    setAttribute(Qt::WA_AcceptTouchEvents);
    Map_GenerateMap();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Map_GenerateMap(void)
{
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setGeometry(scenex,sceney,scenedim+6,scenedim+6);
    QBrush gray(Qt::gray);
    QPen blackpen(Qt::black);
    blackpen.setWidth(1);

    firstStep = true;

    int dim = scenedim / nodenum;
    for(int i=0;i<nodenum;i++)
    {
        for(int j=0;j<nodenum;j++)
        {
            nodes[i][j] = new Node();
            nodes[i][j]->type = nodeType_null;
            nodes[i][j]->status = nodeStatus_opened;
            nodes[i][j]->probObst = false;
            nodes[i][j]->normalCost = MAX_COST;
            nodes[i][j]->heuCost = MAX_COST;
            nodes[i][j]->cost =  nodes[i][j]->normalCost + nodes[i][j]->heuCost;
            nodes[i][j]->pathX = 0;
            nodes[i][j]->pathY = 0;
            nodes[i][j]->x = i;
            nodes[i][j]->y = j;
            nodes[i][j]->rect = scene->addRect(dim*i, dim*j, dim, dim, blackpen, gray);
        }
    }
    Map_GenerateStartFinish();
    Map_GenerateObstacles(0.5);
    Map_RedrawMap();
}
void MainWindow::Map_ResetMap(int x, int y)
{
    firstStep = true;
    for(int i=0;i<nodenum;i++)
    {
        for(int j=0;j<nodenum;j++)
        {
            if(nodes[i][j]->type != nodeType_finish && nodes[x][y]->probObst == false && nodes[i][j]->type != nodeType_visibleObstacle)
            {
                nodes[i][j]->type = nodeType_null;
                nodes[i][j]->status = nodeStatus_opened;
                nodes[i][j]->normalCost = MAX_COST;
                nodes[i][j]->heuCost = MAX_COST;
                nodes[i][j]->cost =  nodes[i][j]->normalCost + nodes[i][j]->heuCost;
                nodes[i][j]->pathX = 0;
                nodes[i][j]->pathY = 0;
            }
        }
    }

    nodeStartX = x;
    nodeStartY = y;
    nodes[nodeStartX][nodeStartY]->type = nodeType_start;
    nodes[nodeStartX][nodeStartY]->normalCost = 0.0;
    nodes[nodeStartX][nodeStartY]->cost = 0.0;
    nodeX0 = nodeStartX;
    nodeY0 = nodeStartY;
}
void MainWindow::Map_GenerateStartFinish(void)
{
    nodeStartX = rand() % nodenum;
    nodeStartY = rand() % nodenum;
    nodes[nodeStartX][nodeStartY]->type = nodeType_start;
    nodes[nodeStartX][nodeStartY]->normalCost = 0.0;
    nodes[nodeStartX][nodeStartY]->cost = 0.0;

    do
    {
        nodeFinishX = rand() % nodenum;
        nodeFinishY = rand() % nodenum;
    }while(nodes[nodeFinishX][nodeFinishY]->type == nodeType_start);
    nodes[nodeFinishX][nodeFinishY]->type = nodeType_finish;

    nodeX0 = nodeStartX;
    nodeY0 = nodeStartY;
}
void MainWindow::Map_RedrawMap()
{
    for(int i=0;i<nodenum;i++)
        for(int j=0;j<nodenum;j++)
            nodes[i][j]->SetBrush();
}
void MainWindow::Map_GenerateObstacles(double percent)
{
    int gain = percent * (double)(nodenum*nodenum);
    for(int i=0;i<gain;i++)
    {
        int x = rand() % nodenum;
        int y = rand() % nodenum;
        if(nodes[x][y]->probObst == true || nodes[x][y]->type == nodeType_start || nodes[x][y]->type == nodeType_finish)
        {
            i--;
            continue;
        }
        else
        {
            nodes[x][y]->probObst = true;
            nodes[x][y]->status = nodeStatus_opened;
        }
    }
}
void MainWindow::on_buttonMapGenerate_clicked()
{
    Map_GenerateMap();
}
void MainWindow::Map_FindZeroNode()
{
    double min;
    if(firstStep == true)
    {
        nodeX0 = nodeStartX;
        nodeY0 = nodeStartY;
    }
    else
    {
        for(int i=0;i<nodenum;i++)
            for(int j=0;j<nodenum;j++)
                if(nodes[i][j]->status == nodeStatus_opened)
                {
                    min = nodes[i][j]->cost;
                    nodeX0 = i;
                    nodeY0 = j;
                    break;
                }

        for(int i=0;i<nodenum;i++)
            for(int j=0;j<nodenum;j++)
                if(nodes[i][j]->status == nodeStatus_opened)
                {
                    if(nodes[i][j]->cost < min)
                    {
                        min = nodes[i][j]->cost;
                        nodeX0 = i;
                        nodeY0 = j;
                    }
                }
    }
    firstStep = false;
}
void MainWindow::Map_FindVisibleObstacles()
{
    for(int i=nodeStartX-seeRange;i<nodeStartX+seeRange;i++)
    {
        for(int j=nodeStartY-seeRange;j<nodeStartY+seeRange;j++)
        {
            if(i >= 0 && i < nodenum && j >= 0 && j < nodenum)
            {
                if(nodes[i][j]->probObst == true)
                {
                    nodes[i][j]->type = nodeType_visibleObstacle;
                    nodes[i][j]->status = nodeStatus_closed;
                    nodes[i][j]->normalCost = MAX_COST;
                    nodes[i][j]->heuCost = MAX_COST;
                    nodes[i][j]->cost = nodes[i][j]->normalCost + nodes[i][j]->heuCost;
                }
            }
        }
    }
}
void MainWindow::Map_Find8Neighbors()
{
    for(int i=0;i<nodenum;i++)
        for(int j=0;j<nodenum;j++)
            if(nodes[i][j]->type == nodeType_neighbors)
                nodes[i][j]->type = nodeType_null;

    for(int i=nodeX0-1;i<=nodeX0+1;i++)
        for(int j=nodeY0-1;j<=nodeY0+1;j++)
            if(i>=0 && i<nodenum && j>=0 && j<nodenum)
                if(nodes[i][j]->status == nodeStatus_opened)
                    nodes[i][j]->type = nodeType_neighbors;
}
void MainWindow::Map_FindNeighborsCost()
{
    double tempCost = 0.0;
    for(int i=0;i<nodenum;i++)
        for(int j=0;j<nodenum;j++)
            if(nodes[i][j]->type == nodeType_neighbors)
            {
                if(nodeX0 != i && nodeY0 != j)
                    tempCost = nodes[nodeX0][nodeY0]->normalCost + sqrt(2.0);
                else
                    tempCost = nodes[nodeX0][nodeY0]->normalCost + 1.00;

                if(tempCost < nodes[i][j]->normalCost)
                {
                    nodes[i][j]->normalCost = tempCost;
                    nodes[i][j]->pathX = nodeX0;
                    nodes[i][j]->pathY = nodeY0;
                }
            }

    for(int i=0;i<nodenum;i++)
        for(int j=0;j<nodenum;j++)
            if(nodes[i][j]->type == nodeType_neighbors)
            {
                int dx = abs(nodeFinishX - i);
                int dy = abs(nodeFinishY - j);
                if(dx > dy)
                    nodes[i][j]->heuCost = (double)(dx - dy) * 1.00 + (double)dy * sqrt(2.0);
                else if(dx < dy)
                    nodes[i][j]->heuCost = (double)(dy - dx) * 1.00 + (double)dx * sqrt(2.0);
                else if(dx == dy)
                    nodes[i][j]->heuCost = 0.0;
            }

    for(int i=0;i<nodenum;i++)
        for(int j=0;j<nodenum;j++)
            if(nodes[i][j]->type == nodeType_neighbors)
                nodes[i][j]->cost =  nodes[i][j]->normalCost + 1.2 * nodes[i][j]->heuCost;

    nodes[nodeX0][nodeY0]->status = nodeStatus_closed;
}
bool MainWindow::Map_CheckFinish()
{
    nodesPath.clear();
    if(nodes[nodeFinishX][nodeFinishY]->status == nodeStatus_closed)
    //if(abs(nodeX0 - nodeFinishX) < 2 && abs(nodeY0 - nodeFinishY) < 2)
    {
        qDebug() << "Koniec";
        for(int i=0;i<nodenum;i++)
            for(int j=0;j<nodenum;j++)
                if(nodes[i][j]->type == nodeType_path)
                    nodes[i][j]->type = nodeType_null;


        int x = nodeFinishX;
        int y = nodeFinishY;
        int tempx, tempy;

        nodes[x][y]->type = nodeType_path;
        nodesPath.append(nodes[x][y]);
        do
        {
            tempx = nodes[x][y]->pathX;
            tempy = nodes[x][y]->pathY;
            x = tempx;
            y = tempy;
            nodes[x][y]->type = nodeType_path;
            nodesPath.append(nodes[x][y]);
        }while(x != nodeStartX || y != nodeStartY);
        return true;
    }
    return false;
}
bool MainWindow::Map_AStar(void)
{
    bool state = false;
    Map_FindZeroNode();
    Map_FindVisibleObstacles();
    Map_Find8Neighbors();
    Map_FindNeighborsCost();
    state = Map_CheckFinish();
    return state;
}
void MainWindow::on_buttonRunAStarAlgorithm_clicked()
{
    bool state = false;
    do
    {
        state = Map_AStar();
    }while(state == false);
    Map_RedrawMap();
}
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        double nodedim = ((double)scenedim / (double)nodenum);
        int x = (double)(e->x() - scenex) / nodedim;
        int y = (double)(e->y() - sceney) / nodedim;
        if(x < nodenum && y < nodenum)
        {
            if(nodes[x][y]->type != nodeType_finish && nodes[x][y]->probObst == false)
            {
                Map_ResetMap(x, y);
                on_buttonRunAStarAlgorithm_clicked();
            }
        }
    }
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    int x = nodeStartX;
    int y = nodeStartY;
    qDebug() << "Path length" << nodesPath.length();
    if(event->key() == Qt::Key_S)
    {
        if(nodesPath.length() >= 3)
        {
            x = nodesPath[nodesPath.length()-2]->x;
            y = nodesPath[nodesPath.length()-2]->y;

            if(x < nodenum && y < nodenum)
            {
                if(nodes[x][y]->type != nodeType_finish && nodes[x][y]->probObst == false)
                {
                    Map_ResetMap(x, y);
                    on_buttonRunAStarAlgorithm_clicked();
                }
            }
        }
    }
}
