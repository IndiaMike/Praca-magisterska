#ifndef CELL_H
#define CELL_H

#include "qgraphicsscene.h"
#include <QObject>




typedef enum
{
    CellType_Free =0 , CellType_Position =1, CellType_Obstacle =2, CellType_Destination =3, CellType_Path =4, CellType_SafeZone=5
}eCellType;

class cell : public QObject
{
    Q_OBJECT
public:
    explicit cell();
    QGraphicsRectItem *rect;
    int x; //x position
    int y; //y position
    eCellType type;

    bool visited;

    int gCost;
    int hCost;
    int get_fCost(void);

    unsigned int solver_index;

    cell *parent;

    void SetBrush(eCellType type);
signals:

};

#endif // CELL_H
