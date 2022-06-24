#ifndef CELL_H
#define CELL_H

#include "qgraphicsscene.h"
#include <QObject>

typedef enum
{
    CellType_Start = 0, CellType_finish, CellType_free,
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

    void SetBrush();
signals:

};

#endif // CELL_H
