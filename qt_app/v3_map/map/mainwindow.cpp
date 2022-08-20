#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QGraphicsRectItem"
#include "cell.h"
#include <QMouseEvent>
#include <QDebug>
#include <QDateTime>
#include <QKeyEvent>
#include <qmessagebox.h>
#include <qlist.h>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket();
    Map_GenerateMap();

    QPolygonF polygon;
    triangle = new QGraphicsPolygonItem();
    triangle->setPolygon(polygon);
    triangle->setBrush(Qt::red);
    scene->addItem(triangle);
    triangle->setVisible(false);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(WatchDogComunicationReset()));
    timer->setInterval(500);



}
void MainWindow::wifiRead()
{
   QString recieveData;

   recieveData = socket->readAll();
   qDebug() <<"odebrano: "<<recieveData;

   addToLogs(recieveData);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Map_GenerateMap(void)
{
    QBrush gray(Qt::gray);
    QPen blackpen(Qt::black);
    blackpen.setWidth(2);

    scene = new QGraphicsScene(this);

    scene->setBackgroundBrush(Qt::gray);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setGeometry(0,0,1000+10,1000+10);

    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {
            cells[i][j] = new cell();
            cells[i][j]->x = i;
            cells[i][j]->y = j;
            cells[i][j]->rect = scene->addRect(20*i, 20*j, 20, 20, blackpen, gray);
            cells[i][j]->visited = false;

            cells[i][j]->hCost = std::numeric_limits<int>::max();
            cells[i][j]->gCost = std::numeric_limits<int>::max();
         }
    }
    scene->update();
}

void MainWindow::addToLogs(QString message)
{
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy.MM.dd hh:mm:ss");


    ui->textEditLogs->append(currentDateTime + "\t" + message);
    qDebug()<<message;

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton))
    {
        for(int i=0;i<50;i++)
        {
            for(int j=0;j<50;j++)
            {
                if(cells[i][j]->rect->isUnderMouse())
                {
                    uint8_t ComboBoxID;

                    ComboBoxID = ui->comboBoxCellType->currentIndex();
                    cells[i][j]->type  = (eCellType)ComboBoxID;
                    qDebug() << "type : "<< (eCellType)cells[i][j]->type <<ui->comboBoxCellType->currentText();

                    cells[i][j]->SetBrush(cells[i][j]->type);



                    qDebug() << "x : " << cells[j][i]->x;
                    qDebug() << "y : " << cells[j][i]->y;

            //        qDebug() << "mouse x : " << event->x();
            //        qDebug() << "mouse y : " << event->y();
                }

            }
        }
    }
}

void MainWindow::on_pushButtonClearMap_clicked()
{
    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {
          cells[i][j]->type = CellType_Free;
          cells[i][j]->SetBrush(CellType_Free);
          cells[i][j]->visited = false;
        }
    }

}


void MainWindow::on_pushButtonConnect_clicked()
{

    QHostAddress hostAddress;
    hostAddress.setAddress("10.10.100.254");
    socket->connectToHost(hostAddress, 8899);


    connect(socket, SIGNAL(readyRead()),this, SLOT(wifiRead()));

    qDebug() << "Connect button clicked";
    if(!socket->waitForConnected(1000))
    {
        qDebug() << "TCP error: " << socket->errorString();
        return;
    }

    timer->start();
}


void MainWindow::on_pushButtonSend_clicked()
{
     QString data = ui->lineEditText2Send->text();

    if(socket->isOpen())
        {
            socket->write(data.toUtf8());
            addToLogs(data);
            ui->lineEditText2Send->clear();
        }
    else
    {
        addToLogs("Socket not connect!!");
    }
}

void MainWindow::keyPressEvent(QKeyEvent* event)
{
    if(event->key()==Qt::Key_Enter) {
        qDebug()<<"Enter pressed";
      if(ui->lineEditText2Send->text() != "")
      {
          on_pushButtonSend_clicked();
      }
    }
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->lineEditText2Send->clear();
    ui->textEditLogs->clear();

}


void MainWindow::on_pushButtonW_clicked()
{
    QString comand = ("GoW;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_pushButtonSTOP_clicked()
{
    QString stop = ("STOP;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(stop);
    on_pushButtonSend_clicked();
    qDebug()<<stop;
}


void MainWindow::on_pushButtonR_clicked()
{
    QString comand = ("GoD;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_pushButtonL_clicked()
{
    QString comand = ("GoA;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_pushButtonS_clicked()
{
    QString comand = ("GoS;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_pushButton_clicked()
{
pushButtonAStar_clicked();
}


void MainWindow::on_pushButtonTest_clicked()
{
    QString recieveData = "P=0.32,100.54,90;";
    //  9 P=X.XX,Y.YY,A.AA
    QStringList splitedData = recieveData.split('=');
    splitedData = splitedData.last().split(',');
    splitedData.last().remove(QRegularExpression(";"));


    if(splitedData.count() >= 3)
        {

            float X   = splitedData.at(0).toFloat();
            float Y   = splitedData.at(1).toFloat();
            float angle = splitedData.at(2).toFloat();


          //  DRAW_TRIANGLE(cells[20][20],angle);
    qDebug() << "P="<<X<<","<<Y<<","<<angle<<"deg.";
        }
}

void MainWindow::DRAW_TRIANGLE(cell *cell, int direction)
{
    int centerX = cell->x + ((POST_WIDTH + CELL_WIDTH) / 2);
    int centerY = cell->y + ((POST_HEIGHT + CELL_HEIGHT) / 2);

    triangle->polygon().clear();

    QPolygonF polygon;
    polygon << QPointF(centerX, centerY - 10) << QPointF(centerX + 5, centerY + 5) << QPointF(centerX - 5, centerY + 5);

    polygon =  QTransform().translate(centerX, centerY).rotate(direction).translate(-centerX, -centerY).map(polygon);
    triangle->setPolygon(polygon);
    triangle->setVisible(true);
}


void MainWindow::pushButtonAStar_clicked()
{
    cell *startCell, *finishCell;

    bool startFound = false, finishFound = false;

    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {



             if(cells[j][i]->type == CellType_Position)
            {
              startCell = cells[j][i];
              startFound = true;
             }
            if(cells[j][i]->type == CellType_Destination)
            {
              finishCell = cells[j][i];
              finishFound = true;

            }
        }
    }

    if(startFound && finishFound)
    {
        A_STAR_FIND_PATH(startCell, finishCell);

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You need to define start and finish cells!");
        msgBox.exec();
    }
}

void MainWindow::A_STAR_FIND_PATH(cell* startCell, cell* finishCell)
{

    QList<cell*> openSet;
    QList<cell*> closeSet;


    startCell->gCost = 0;
    startCell->hCost = GET_DISTANCE_BETWEEN_CELLS(startCell,finishCell);
    openSet.append(startCell);
    startCell->visited = true;

    while(!openSet.empty())
    {
        cell *currentCell = nullptr;

        currentCell = openSet.first();

        for(auto cell : openSet)
        {
            if(cell == currentCell)
            {
                continue;
            }
            if(cell->get_fCost() < currentCell->get_fCost() || (cell->get_fCost() == currentCell->get_fCost() && cell->hCost < currentCell->hCost))
            {
                currentCell = cell;
            }
        }

        openSet.removeOne(currentCell);
        closeSet.append(currentCell);
        currentCell->rect->setBrush(Qt::magenta);
        ui->graphicsView->repaint();

        if(currentCell == finishCell)
        {
            A_STAR_GENERATE_PATH(startCell, finishCell);
            return;
        }

        for(auto neighbour : A_STAR_GET_NEIGHBOURS(currentCell))
        {
            int newMovmentCostToNeighbour = currentCell->gCost + GET_DISTANCE_BETWEEN_CELLS(neighbour, currentCell);

            if(closeSet.contains(neighbour))
            {
                continue;
            }

            if(newMovmentCostToNeighbour < neighbour->gCost || !openSet.contains(neighbour))
            {
                neighbour->gCost = newMovmentCostToNeighbour;
                neighbour->hCost = GET_DISTANCE_BETWEEN_CELLS(finishCell, neighbour);
                neighbour->parent = currentCell;
                neighbour->rect->setBrush(Qt::yellow);

                if(!openSet.contains(neighbour))
                {
                    openSet.append(neighbour);
                }

                ui->graphicsView->repaint();
            }
        }
    }
}


QList<cell*> MainWindow::A_STAR_GET_NEIGHBOURS(cell* cella)
{

    QList<cell*> neighbours;

    int j, i;

    for(int x=0;x<50;x++)
    {
        for(int y=0;y<50;y++)
        {
            if(cella == cells[y][x])
            {
                j = y;
                i = x;
            }
        }
    }

    /*
     * x----------x----------x----------x
     * |          |          |          |
     * |[j-1][i-1]| [j-1][i] |[j-1][i+1]|
     * |          |          |          |                        N
     * x----------x----------x----------x                   x----------x
     * |          |          |          |                   |          |
     * | [j][i-1] |  [j][i]  | [j][i+1] |                 W |          | E
     * |          |          |          |                   |          |
     * x----------x----------x----------x                   x----------x
     * |          |          |          |                        S
     * |[j+1][i-1]| [j+1][i] |[j+1][i+1]|
     * |          |          |          |
     * x----------x----------x----------x
     * */

    if(!cells[j][(i - 1 < 0) ? 0 : i - 1]->visited && cells[j][i]->type != CellType_Obstacle)
    {
        neighbours.append(cells[j][(i - 1 < 0) ? 0 : i - 1]);
    }
    if(!cells[j][(i + 1 > 50) ? 50 : i + 1]->visited && cells[j][i]->type != CellType_Obstacle)
    {
        neighbours.append(cells[j][(i + 1 > 50) ? 50 : i + 1]);
    }
    if(!cells[(j + 1 > 50) ? 50 : j + 1][i]->visited && cells[j][i]->type != CellType_Obstacle)
    {
        neighbours.append(cells[(j + 1 > 50) ? 50 : j + 1][i]);
    }
    if(!cells[(j - 1 < 0) ? 0 : j - 1][i]->visited && cells[j][i]->type != CellType_Obstacle)
    {
        neighbours.append(cells[(j - 1 < 0) ? 0 : j - 1][i]);
    }

    //if(allowDiagonal)


        if(!cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->visited &&     // left top corner
                cells[j][i]->type != CellType_Obstacle)
        {
            neighbours.append(cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]);
        }
        if(!cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 50) ? 50 : i + 1]->visited &&   // right top corner
                cells[j][i]->type != CellType_Obstacle)
        {
            neighbours.append(cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 50) ? 50 : i + 1]);
        }
        if(!cells[(j + 1 > 50) ? 50 : j + 1][(i + 1 > 50) ? 50 : i + 1]->visited && // right bottom corner
                cells[j][i]->type != CellType_Obstacle)
        {
            neighbours.append(cells[(j + 1 > 50) ? 50 : j + 1][(i + 1 > 50) ? 50 : i + 1]);
        }
        if(!cells[(j + 1 > 50) ? 50 : j + 1][(i - 1 < 0) ? 0 : i - 1]->visited &&   // left bottom corner
                cells[j][i]->type != CellType_Obstacle)
        {
            neighbours.append(cells[(j + 1 > 50) ? 50 : j + 1][(i - 1 < 0) ? 0 : i - 1]);
        }



    //if(showSearching)
        ui->graphicsView->repaint();

    return neighbours;
}

int MainWindow::GET_DISTANCE_BETWEEN_CELLS(cell* cellA, cell* cellB)
{
    /*
     * distance between two cells normally is 1 * 10
     * distance between two cells diagonally is 1 * 14
    */

    int distanceX = abs(cellA->x - cellB->x);
    int distanceY = abs(cellA->y - cellB->y);


            return (distanceX + distanceY);


}

void MainWindow::A_STAR_GENERATE_PATH(cell *startCell, cell *finishCell)
{
    QList<cell*> path;
    cell *currentCell;
    currentCell = finishCell;

    while(currentCell != startCell)
    {
        path.append(currentCell);
        currentCell->type = CellType_Path;
        currentCell->SetBrush(CellType_Path);


        currentCell = currentCell->parent;

       ui->graphicsView->repaint();
    }
}

void MainWindow::WatchDogComunicationReset()
{
    QString data = "W0;";

   if(socket->isOpen())
       {
           socket->write(data.toUtf8());
       }
   else
   {
       addToLogs("Watchdog send error");
   }

}

void MainWindow::on_pushButtonGoHome_clicked()
{
    QString comand = ("P=0,0,0;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();

    comand = ("MotorON;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
    ui->lineEditText2Send->clear();
}


void MainWindow::on_pushButtonAtHome_clicked()
{
    QString comand = ("HomeHere;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_radioButtonLED_clicked(bool value)
{
     QString comand;
    if(value == true)
     comand = ("LED=1;");
     else
     comand = ("LED=0;");

     ui->lineEditText2Send->clear();
     ui->lineEditText2Send->setText(comand);
     on_pushButtonSend_clicked();
}

/*
void MainWindow::on_radioButtonLED_released()
{

}


void MainWindow::on_radioButtonLED_pressed()
{

}
*/

void MainWindow::on_pushButtonSpeed0_clicked()
{
    QString comand = ("Speed0;");
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
     QString comand;
    if(arg1 == "Manual")
    {
       ui->groupBox_4->setDisabled(false);
       comand = ("ModeM;");
     }

    if(arg1 == "To point")
    {
        ui->groupBox_4->setDisabled(true);
        comand = ("ModeG2P;");
    }

    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}


void MainWindow::on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint)
{

}
/*
void change_coordination(int *X, int *Y, int *newX, int *newY)
{
    newX =  Y;
    newY = -X;

}
*/

void MainWindow::on_pushButtonAddSafetyZone_clicked()
{
    for(int i=1;i<49;i++)
    {
        for(int j=1;j<49;j++)
        {
            if( cells[i][j]->type != CellType_Obstacle
                    &&
               (cells[i-1][j-1]->   type == CellType_Obstacle ||
                cells[i-1][j]->     type == CellType_Obstacle ||
                cells[i-1][j+1]->   type == CellType_Obstacle ||

                cells[i][j-1]->     type == CellType_Obstacle ||
                cells[i][j+1]->     type == CellType_Obstacle ||

                cells[i+1][j-1]->   type == CellType_Obstacle ||
                cells[i+1][j]->     type == CellType_Obstacle ||
                cells[i+1][j+1]->   type == CellType_Obstacle))
            {
                cells[i][j]->type = CellType_SafeZone;
                cells[i][j]->SetBrush(CellType_SafeZone);
            }
         }
    }

    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {
            if(cells[i][j]->type == CellType_SafeZone)
            {
                cells[i][j-1]->type = CellType_Obstacle;
            }
        }
    }
}

