#include "cell.h"
#include "qgraphicsitem.h"

cell::cell()
{

}

void cell::SetBrush()
{    QBrush defaulteBrush(Qt::darkGray);
     QBrush obstacleBrush(Qt::black);

      switch (type) {
    case CellType_free:
         rect->setBrush(defaulteBrush);
        break;

    }



}
