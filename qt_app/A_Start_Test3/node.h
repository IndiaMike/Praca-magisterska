#ifndef NODE_H
#define NODE_H

#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QTouchEvent>
#include <QPaintEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

typedef enum
{
    nodeType_null = 0,
    nodeType_start,
    nodeType_finish,
    nodeType_neighbors,
    nodeType_visibleObstacle,
    nodeType_path,
}eNodeType;
typedef enum
{
    nodeStatus_opened = 0,
    nodeStatus_closed,
}eNodeStatus;

class Node : public QObject
{
    Q_OBJECT
public:
    explicit Node();
    QGraphicsRectItem* rect;
    eNodeType type;
    eNodeStatus status;
    bool probObst;
    double normalCost;
    double heuCost;
    double cost;
    int pathX;
    int pathY;
    int x;
    int y;
    void SetBrush();

signals:

private slots:

};

#endif // NODE_H
