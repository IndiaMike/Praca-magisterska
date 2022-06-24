#include "node.h"
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QTouchEvent>
#include <QPaintEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

Node::Node()
{
}
void Node::SetBrush(void)
{
    QBrush nullBrush(Qt::lightGray);
    QBrush startBrush(Qt::green);
    QBrush finishBrush(Qt::red);
    QBrush obstacleBrush(Qt::gray);
    QBrush visibleObstacleBrush(Qt::blue);
    QBrush neighborsBrush(Qt::yellow);
    QBrush pathBrush(Qt::darkGreen);
    switch(type)
    {
        case nodeType_null:
        if(probObst == true)
            rect->setBrush(obstacleBrush);
        else
            rect->setBrush(nullBrush);
        break;
        case nodeType_start: rect->setBrush(startBrush); break;
        case nodeType_finish: rect->setBrush(finishBrush); break;
        case nodeType_visibleObstacle: rect->setBrush(visibleObstacleBrush); break;
        case nodeType_path: rect->setBrush(pathBrush); break;
        case nodeType_neighbors: rect->setBrush(neighborsBrush); break;
    }
}
