#include "cell.h"
#include "qgraphicsitem.h"

cell::cell()
{

}

void cell::SetBrush(eCellType type)
{
     QBrush defaulteBrush(Qt::darkGray);
     QBrush obstacleBrush(Qt::black);
     QBrush destinationBrush(Qt::blue);
     QBrush positionBrush(Qt::red);
     QBrush pathBrush(Qt::green);

// CellType_Position = 0, CellType_Destination, CellType_Free, CellType_Obstacle
      switch (type) {

        case CellType_Free:
        rect->setBrush(defaulteBrush);
        break;

        case CellType_Position:
        rect->setBrush(positionBrush);
        break;

        case CellType_Obstacle:
        rect->setBrush(obstacleBrush);
        break;

        case CellType_Destination:
        rect->setBrush(destinationBrush);
        break;

        case CellType_Path:
        rect->setBrush(pathBrush);
         break;
      }
}


int cell::get_fCost()
{
    return gCost + hCost;
}
