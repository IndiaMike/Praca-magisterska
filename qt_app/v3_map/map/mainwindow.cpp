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
#include <QStack>

int8_t map_sequence_path[1000][2];
int16_t map_sequence_points_counter = 0;


int8_t map_smooth_counter_global=0;


int map_sequence_path_new[1000][2];

int map_smooth_path[1000][2];


int8_t point00X = 0;
int8_t point00Y = 0;

bool start_flag00_point = false;
bool point00_is_selected = false;

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

   if(recieveData.contains("#"))
   {
   QStringList splitedData = recieveData.split('#');

       splitedData = splitedData.last().split(',');
       splitedData.last().remove(QRegularExpression(";"));


       if(splitedData.count() >= 3)
           {

               int X   = splitedData.at(0).toInt();
               int Y   = splitedData.at(1).toInt();
               int angle = splitedData.at(2).toInt();


              // DRAW_TRIANGLE(cells[1][1],angle);
       qDebug() << "R->P="<<X<<","<<Y<<","<<angle<<"deg.";

       for(int i=0;i<50;i++)
       {
           for(int j=0;j<50;j++)
            {
             if(cells[i][j]->type == CellType_Position)
             {
                 cells[i][j]->type = CellType_Free;
                 cells[i][j]->SetBrush(CellType_Free);
             }


            }
       }
       cells[X+point00X][point00Y-Y]->type = CellType_Position;
       cells[X+point00X][point00Y-Y]->SetBrush(CellType_Position);
       DRAW_TRIANGLE(cells[X+point00X][point00Y-Y],angle);


    }

    }
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

            cells[i][j]->solver_index = 0;

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



                    qDebug() << "x : " << cells[i][j]->x;
                    qDebug() << "y : " << cells[i][j]->y;

            //        qDebug() << "mouse x : " << event->x();
            //        qDebug() << "mouse y : " << event->y();
                }

            }
        }
    }
    if ((event->buttons() & Qt::RightButton) && (start_flag00_point == false))
    {
        for(int i=0;i<50;i++)
        {
            for(int j=0;j<50;j++)
            {
                if(cells[i][j]->rect->isUnderMouse())
                {
                    QPen blackpen(Qt::black);
                    blackpen.setWidth(6);
                    cells[i][j]->rect->setPen(blackpen);
                    point00X=cells[i][j]->x;
                    point00Y=cells[i][j]->y;
                    qDebug()<<"point00X = "<<point00X;
                    qDebug()<<"point00Y = "<<point00Y;
                    start_flag00_point = true;
                    point00_is_selected = true;
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
           cells[i][j]->solver_index = 0;//FF

        }
    }
        goal_reached = false;//FF
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

    /*
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
        }*/
}

void MainWindow::DRAW_TRIANGLE(cell *cell, int direction)
{
    int centerX = cell->x *20 +10;
    int centerY = cell->y * 20+10;

    triangle->polygon().clear();

    QPolygonF polygon;
    polygon << QPointF(centerX, centerY - 20) << QPointF(centerX + 10, centerY + 10) << QPointF(centerX - 10, centerY + 10);

    polygon =  QTransform().translate(centerX, centerY).rotate(direction).translate(-centerX, -centerY).map(polygon);
    triangle->setBrush(Qt::cyan);
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
        if(currentCell != startCell && currentCell != finishCell && currentCell->type != CellType_Obstacle)
        {
            currentCell->rect->setBrush(Qt::magenta);
            ui->graphicsView->repaint();
        }



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

                if(neighbour->type != CellType_Obstacle && neighbour->type != CellType_Destination)
                {
                     neighbour->rect->setBrush(Qt::yellow);
                }


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

        if(currentCell != finishCell)
        {
            currentCell->SetBrush(CellType_Path);

        }
            currentCell->type = CellType_Path;


        currentCell = currentCell->parent;

       ui->graphicsView->repaint();
    }
    map_sequence_points_counter = path.count();

    //przepisanie tablicy -> od startu do mety

    map_sequence_path[0][0] = startCell->x;
    map_sequence_path[0][1] = startCell->y;

    for(int i=map_sequence_points_counter; i>0; i--)
    {
    qDebug()<<"Point"<<i<<" X="<<path.at(i-1)->x<<" Y="<<path.at(i-1)->y;
    map_sequence_path[map_sequence_points_counter - i +1][0]=path.at(i-1)->x;
    map_sequence_path[map_sequence_points_counter - i +1][1]=path.at(i-1)->y;
    }
    qDebug()<<" ";


    for(int i=0;i<=map_sequence_points_counter;i++)
    {
        qDebug()<<"tab["<<i<<"] X="<<map_sequence_path[i][0]<<"Y="<<map_sequence_path[i][1];

    }
    if(point00_is_selected == true)
    { // zamiana na uklad wsp robota


        for(int i=0;i<=map_sequence_points_counter;i++)
        {
             map_sequence_path_new[i][0] = map_sequence_path[i][0] - point00X;
             map_sequence_path_new[i][1] = abs(point00Y) - abs(map_sequence_path[i][1]);
             qDebug()<<"tab new["<<i<<"] X="<<map_sequence_path_new[i][0]<<"Y="<<map_sequence_path_new[i][1];
        }
        qDebug()<<"map_sequence_points_counter"<<map_sequence_points_counter;

       //pozostawienie wylacznei punktów przegięcia łamanej

        int i_straight = 1;
        int16_t map_smooth_counter = 0;
        map_smooth_path[map_smooth_counter][0] = map_sequence_path_new[0][0];
        map_smooth_path[map_smooth_counter][1] = map_sequence_path_new[0][1];
        map_smooth_counter++;
        while(i_straight<map_sequence_points_counter) // jest map_sequence_points_counter+1 elementów
        {
            float a_straight_prev;
            float a_straight_next;
            //przypadek prostej pionowej;

                if(map_sequence_path_new[i_straight-1][0] == map_sequence_path_new[i_straight][0])
                {
                    a_straight_prev = 99.0;
                }
                else
                {
                    a_straight_prev=(map_sequence_path_new[i_straight][1]-map_sequence_path_new[i_straight-1][1])/
                                 (map_sequence_path_new[i_straight][0]-map_sequence_path_new[i_straight-1][0]);
                }
                if(map_sequence_path_new[i_straight][0] == map_sequence_path_new[i_straight+1][0])
                {
                    a_straight_next = 99.0;
                }
                else
                {
                    a_straight_next=(map_sequence_path_new[i_straight+1][1]-map_sequence_path_new[i_straight][1])/
                            (map_sequence_path_new[i_straight+1][0]-map_sequence_path_new[i_straight][0]);
                }
               if(abs(a_straight_prev - a_straight_next) < 0.2) // czy sa takie same  - przyrównanie floatow
               {
                i_straight++;                
               }
               else
               {
                    map_smooth_path[map_smooth_counter][0] = map_sequence_path_new[i_straight][0];
                    map_smooth_path[map_smooth_counter][1] = map_sequence_path_new[i_straight][1];
                    map_smooth_counter++;
                    i_straight++;
               }
        }
        map_smooth_path[map_smooth_counter][0] = map_sequence_path_new[i_straight][0];
        map_smooth_path[map_smooth_counter][1] = map_sequence_path_new[i_straight][1];
        qDebug()<<"map_smooth_counter = "<<map_smooth_counter;

        addToLogs("Robot path:");
        for(int i=0;i<=map_smooth_counter;i++)
        {
            while(!socket->isOpen())
            {

            }
            char Message[32];
            qDebug()<<"smoth tab["<<i<<"] X="<<map_smooth_path[i][0]<<"Y="<<map_smooth_path[i][1];



            sprintf(Message,"Path=%d,%d,%d;",i,map_smooth_path[i][0], map_smooth_path[i][1]);
            //addToLogs((QString)Message);

            QString comand = (Message);
            ui->lineEditText2Send->clear();
            ui->lineEditText2Send->setText(comand);
            on_pushButtonSend_clicked();

        }
        map_smooth_counter_global = map_smooth_counter +1;
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Point 0.0 not Selected!");
        msgBox.exec();
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
                cells[i][j]->type = CellType_Obstacle;
            }
        }
    }
}


void MainWindow::on_pushButtonClear_saveObst_clicked()
{
    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {
          if(cells[i][j]->type != CellType_Obstacle)
          {
              if(cells[i][j]->type == CellType_Destination)
              {
                  cells[i][j]->visited = false;
                  cells[i][j]->solver_index = 0;
              }
              else
              {
                  cells[i][j]->type = CellType_Free;
                  cells[i][j]->SetBrush(CellType_Free);
                  cells[i][j]->visited = false;
                  cells[i][j]->solver_index = 0;
              }

          }
        }
    }
    goal_reached = false;



}


void MainWindow::on_pushButtonGoThePath_clicked()
{
    char Message[32];
    sprintf(Message,"PathGO=%d;",map_smooth_counter_global);
    QString comand = (QString)Message;
    ui->lineEditText2Send->clear();
    ui->lineEditText2Send->setText(comand);
    on_pushButtonSend_clicked();
}

//////////////////////////////////////////////////////////////
void MainWindow::pushButtonFloodFill_clicked()
{

    cell *startCell, *finishCell;

    bool startFound = false, finishFound = false;

    for(int i=0;i<50;i++)
    {
        for(int j=0;j<50;j++)
        {



             if(cells[j][i]->type == CellType_Position)
            {
              cells[j][i]->visited = true;
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
        SOLVE_FLOOD_FILL(startCell, finishCell);
        if(goal_reached)SOLVE_FLOOD_GENERATE_PATH(finishCell);

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You need to define start and finish cells!");
        msgBox.exec();
    }
}
void MainWindow::SOLVE_FLOOD_FILL(cell *startCell, cell *finishCell)
{
    cell *currentCell;

    QStack<cell*> *stack = nullptr;
    stack = new QStack<cell*>();

    QStack<cell*> *temp_stack = nullptr;
    temp_stack = new QStack<cell*>();

    stack->push(startCell);

    while(!stack->isEmpty() && !goal_reached)
    {

        if(stack->size() >= 2)
        {
            while(!stack->empty())
            {
                temp_stack->push(stack->pop());
            }

            while(!temp_stack->empty())
            {
                currentCell = temp_stack->pop();

                for(int i=0;i<50;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if(currentCell == cells[j][i])
                        {
                          SOLVE_FLOOD_FILL_FILL_NEIGHBOURS(currentCell, stack, finishCell);
                        }
                    }
                }
            }
        }
        else
        {
            currentCell = stack->pop();

            for(int i=0;i<50;i++)
            {
                for(int j=0;j<50;j++)
                {
                    if(currentCell == cells[j][i])
                    {
                      SOLVE_FLOOD_FILL_FILL_NEIGHBOURS(currentCell, stack, finishCell);
                    }
                }
            }
        }
    }

    delete(stack);
    delete(temp_stack);
}

void MainWindow::SOLVE_FLOOD_FILL_FILL_NEIGHBOURS(cell *currentCell, QStack<cell*> *stack, cell *finishCell)
{

     int j;
     int i;
    for(int x=0;x<50;x++)
    {
        for(int y=0;y<50;y++)
        {
            if(currentCell == cells[y][x])
            {
                  j = y;
                  i = x;
            }
        }
    }




    if(!cells[j][(i - 1 < 0) ? 0 : i - 1]->visited && cells[j][(i - 1 < 0) ? 0 : i - 1]->type != CellType_Obstacle)
    {
        cells[j][(i - 1 < 0) ? 0 : i - 1]->solver_index = cells[j][i]->solver_index + 1;

        cells[j][(i - 1 < 0) ? 0 : i - 1]->visited = true;
        cells[j][(i - 1 < 0) ? 0 : i - 1]->rect->setBrush(Qt::yellow);

        if(cells[j][(i - 1 < 0) ? 0 : i - 1] == finishCell)
        {
            goal_reached = true;
            return;
        }
        stack->push(cells[j][(i - 1 < 0) ? 0 : i - 1]);
     }
    if(!cells[j][(i + 1 > 49) ? 49 : i + 1]->visited && cells[j][(i + 1 > 49) ? 49 : i + 1]->type != CellType_Obstacle)
    {
        cells[j][(i + 1 > 49) ? 49 : i + 1]->solver_index = cells[j][i]->solver_index + 1;

        cells[j][(i + 1 > 49) ? 49 : i + 1]->visited = true;
        cells[j][(i + 1 > 49) ? 49 : i + 1]->rect->setBrush(Qt::yellow);

        if(cells[j][(i + 1 > 49) ? 49 : i + 1] == finishCell)
        {
            goal_reached = true;
            return;
        }
        stack->push(cells[j][(i + 1 > 49) ? 49 : i + 1]);
     }
    if(!cells[(j + 1 > 49) ? 49 : j + 1][i]->visited && cells[(j + 1 > 49) ? 49 : j + 1][i]->type != CellType_Obstacle)
    {
        cells[(j + 1 > 49) ? 49 : j + 1][i]->solver_index = cells[j][i]->solver_index + 1;

        cells[(j + 1 > 49) ? 49 : j + 1][i]->visited = true;
        cells[(j + 1 > 49) ? 49 : j + 1][i]->rect->setBrush(Qt::yellow);

        if(cells[(j + 1 > 49) ? 49 : j + 1][i] == finishCell)
        {
            goal_reached = true;
            return;
        }
        stack->push(cells[(j + 1 > 49) ? 49 : j + 1][i]);
     }
    if(!cells[(j - 1 < 0) ? 0 : j - 1][i]->visited && cells[(j - 1 < 0) ? 0 : j - 1][i]->type != CellType_Obstacle)
    {
        cells[(j - 1 < 0) ? 0 : j - 1][i]->solver_index = cells[j][i]->solver_index + 1;
        cells[(j - 1 < 0) ? 0 : j - 1][i]->visited = true;
        cells[(j - 1 < 0) ? 0 : j - 1][i]->rect->setBrush(Qt::yellow);

        if(cells[(j - 1 < 0) ? 0 : j - 1][i] == finishCell)
        {
            goal_reached = true;
            return;
        }
        stack->push(cells[(j - 1 < 0) ? 0 : j - 1][i]);
    }


        if(!cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->visited && cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->type != CellType_Obstacle)
        {
           cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->solver_index = cells[j][i]->solver_index + 1;
           cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->visited = true;
           cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->rect->setBrush(Qt::yellow);

           if(cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1] == finishCell)
           {
               goal_reached = true;
               return;
           }
           stack->push(cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]);
        }
        if(!cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1]->visited &&   // right top corner
                cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1]->type != CellType_Obstacle)
        {
            cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1]->solver_index = cells[j][i]->solver_index + 1;
            cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1]->visited = true;
            cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1]->rect->setBrush(Qt::yellow);

            if(cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1] == finishCell)
            {
                goal_reached = true;
                return;
            }
            stack->push(cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 49) ? 49 : i + 1]);
        }
        if(!cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]->visited && cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]->type != CellType_Obstacle)// right bottom corner

        {
            cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]->solver_index = cells[j][i]->solver_index + 1;
            cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]->visited = true;
            cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]->rect->setBrush(Qt::yellow);

            if(cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]== finishCell)
            {
                goal_reached = true;
                return;
            }
            stack->push(cells[(j + 1 > 49) ? 49 : j + 1][(i + 1 > 49) ? 49 : i + 1]);
        }
        if(!cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1]->visited &&   // left bottom corner
               cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1]->type != CellType_Obstacle)
        {
            cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1]->solver_index = cells[j][i]->solver_index + 1;
            cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1]->visited = true;
            cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1]->rect->setBrush(Qt::yellow);

            if(cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1] == finishCell)
            {
                goal_reached = true;
                return;
            }
            stack->push(cells[(j + 1 > 49) ? 49 : j + 1][(i - 1 < 0) ? 0 : i - 1]);
        }

       // ui->graphicsView->repaint();
 qApp->processEvents();
}

void MainWindow::SOLVE_FLOOD_GENERATE_PATH(cell *finishCell)
{
     QStack<cell*> stack;

      QStack<cell*> path;
     cell *currentCell;

    finishCell->type = CellType_Path;
    finishCell->SetBrush(CellType_Path);
    stack.push(finishCell);
    path.push(finishCell);
     while(!stack.isEmpty())
     {
        currentCell = stack.pop();
        path.push(currentCell);

        for(int i=0;i<50;i++)
        {
            for(int j=0;j<50;j++)
            {
                if(currentCell == cells[j][i])
                {

                    if(cells[j][(i - 1 < 0) ? 0 : i - 1]->solver_index == (cells[j][i]->solver_index - 1))
                    {
                        cells[j][(i - 1 < 0) ? 0 : i - 1]->type = CellType_Path;
                        cells[j][(i - 1 < 0) ? 0 : i - 1]->SetBrush(CellType_Path);
                        stack.push(cells[j][(i - 1 < 0) ? 0 : i - 1]);
                     }
                    else if(cells[j][(i + 1 > 50) ? 50 : i + 1]->solver_index == (cells[j][i]->solver_index - 1) )
                    {
                        cells[j][(i + 1 > 50) ? 50 : i + 1]->type = CellType_Path;
                        cells[j][(i + 1 > 50) ? 50 : i + 1]->SetBrush(CellType_Path);
                        stack.push(cells[j][(i + 1 > 50) ? 50 : i + 1]);
                     }
                    else if(cells[(j + 1 > 50) ? 50 : j + 1][i]->solver_index == (cells[j][i]->solver_index - 1) )
                    {
                        cells[(j + 1 > 50) ? 50 : j + 1][i]->type = CellType_Path;
                        cells[(j + 1 > 50) ? 50 : j + 1][i]->SetBrush(CellType_Path);
                        stack.push(cells[(j + 1 > 50) ? 50 : j + 1][i]);
                     }
                    else if(cells[(j - 1 < 0) ? 0 : j - 1][i]->solver_index == (cells[j][i]->solver_index - 1) )
                    {
                        cells[(j - 1 < 0) ? 0 : j - 1][i]->type = CellType_Path;
                        cells[(j - 1 < 0) ? 0 : j - 1][i]->SetBrush(CellType_Path);
                        stack.push(cells[(j - 1 < 0) ? 0 : j - 1][i]);
                    }


                       else if(cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->solver_index == (cells[j][i]->solver_index - 1))
                        {
                            cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->type = CellType_Path;
                            cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]->SetBrush(CellType_Path);
                            stack.push(cells[(j - 1 < 0) ? 0 : j - 1][(i - 1 < 0) ? 0 : i - 1]);
                        }
                        else if(cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 50) ? 50 : i + 1]->solver_index == (cells[j][i]->solver_index - 1))
                        {
                            cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 50) ? 50 : i + 1]->type = CellType_Path;
                            cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 50) ? 50 : i + 1]->SetBrush(CellType_Path);
                            stack.push(cells[(j - 1 < 0) ? 0 : j - 1][(i + 1 > 50) ? 50 : i + 1]);
                        }
                        else if(cells[(j + 1 > 50) ? 50 : j + 1][(i + 1 > 50) ? 50 : i + 1]->solver_index == (cells[j][i]->solver_index - 1))
                        {
                            cells[(j + 1 > 50) ? 50 : j + 1][(i + 1 > 50) ? 50 : i + 1]->type = CellType_Path;
                            cells[(j + 1 > 50) ? 50 : j + 1][(i + 1 > 50) ? 50 : i + 1]->SetBrush(CellType_Path);
                            stack.push(cells[(j + 1 > 50) ? 50 : j + 1][(i + 1 > 50) ? 50 : i + 1]);
                        }
                        else if(cells[(j + 1 > 50) ? 50 : j + 1][(i - 1 < 0) ? 0 : i - 1]->solver_index == (cells[j][i]->solver_index - 1))
                        {
                            cells[(j + 1 > 50) ? 50 : j + 1][(i - 1 < 0) ? 0 : i - 1]->type = CellType_Path;
                            cells[(j + 1 > 50) ? 50 : j + 1][(i - 1 < 0) ? 0 : i - 1]->SetBrush(CellType_Path);
                            stack.push(cells[(j + 1 > 50) ? 50 : j + 1][(i - 1 < 0) ? 0 : i - 1]);
                        }
                }
            }
        }
     }


     qDebug()<<"###########################################################";
     qDebug()<<"map_sequence_points_counter = "<< path.count();
path.remove(0);
     map_sequence_points_counter = path.count();


     for(int i=0;i< path.count();i++)
     {
        qDebug()<<"path.list:"<<i<<" X="<<path.at(i)->x<<" Y="<< path.at(i)->y;
     }


     //przepisanie tablicy -> od startu do mety




     map_sequence_path[0][0] = path.at(0)->x;
     map_sequence_path[0][1] = path.at(0)->y;

     for(int i=map_sequence_points_counter; i>0; i--)
     {
     qDebug()<<"Point"<<i<<" X="<<path.at(i-1)->x<<" Y="<<path.at(i-1)->y;
     map_sequence_path[map_sequence_points_counter - i +1][0]=path.at(i-1)->x;
     map_sequence_path[map_sequence_points_counter - i +1][1]=path.at(i-1)->y;
     }
     qDebug()<<" ";


     for(int i=0;i<=map_sequence_points_counter;i++)
     {
         qDebug()<<"tab["<<i<<"] X="<<map_sequence_path[i][0]<<"Y="<<map_sequence_path[i][1];

     }
     if(point00_is_selected == true)
     { // zamiana na uklad wsp robota


         for(int i=0;i<=map_sequence_points_counter;i++)
         {
              map_sequence_path_new[i][0] = map_sequence_path[i][0] - point00X;
              map_sequence_path_new[i][1] = abs(point00Y) - abs(map_sequence_path[i][1]);
              qDebug()<<"tab new["<<i<<"] X="<<map_sequence_path_new[i][0]<<"Y="<<map_sequence_path_new[i][1];
         }
         qDebug()<<"map_sequence_points_counter"<<map_sequence_points_counter;

        //pozostawienie wylacznei punktów przegięcia łamanej

         int i_straight = 1;
         int16_t map_smooth_counter = 0;
         map_smooth_path[map_smooth_counter][0] = map_sequence_path_new[0][0];
         map_smooth_path[map_smooth_counter][1] = map_sequence_path_new[0][1];
         map_smooth_counter++;
         while(i_straight<map_sequence_points_counter) // jest map_sequence_points_counter+1 elementów
         {
             float a_straight_prev;
             float a_straight_next;
             //przypadek prostej pionowej;

                 if(map_sequence_path_new[i_straight-1][0] == map_sequence_path_new[i_straight][0])
                 {
                     a_straight_prev = 99.0;
                 }
                 else
                 {
                     a_straight_prev=(map_sequence_path_new[i_straight][1]-map_sequence_path_new[i_straight-1][1])/
                                  (map_sequence_path_new[i_straight][0]-map_sequence_path_new[i_straight-1][0]);
                 }
                 if(map_sequence_path_new[i_straight][0] == map_sequence_path_new[i_straight+1][0])
                 {
                     a_straight_next = 99.0;
                 }
                 else
                 {
                     a_straight_next=(map_sequence_path_new[i_straight+1][1]-map_sequence_path_new[i_straight][1])/
                             (map_sequence_path_new[i_straight+1][0]-map_sequence_path_new[i_straight][0]);
                 }
                if(abs(a_straight_prev - a_straight_next) < 0.2) // czy sa takie same  - przyrównanie floatow
                {
                 i_straight++;
                }
                else
                {
                     map_smooth_path[map_smooth_counter][0] = map_sequence_path_new[i_straight][0];
                     map_smooth_path[map_smooth_counter][1] = map_sequence_path_new[i_straight][1];
                     map_smooth_counter++;
                     i_straight++;
                }
         }
         map_smooth_path[map_smooth_counter][0] = map_sequence_path_new[i_straight][0];
         map_smooth_path[map_smooth_counter][1] = map_sequence_path_new[i_straight][1];
         qDebug()<<"map_smooth_counter = "<<map_smooth_counter;


         for(int i=0;i<=map_smooth_counter;i++)
         {
         map_smooth_path[i][0]=map_smooth_path[i+1][0];
         map_smooth_path[i][1]=map_smooth_path[i+1][1];
         }
         addToLogs("Robot path:");
         for(int i=0;i<map_smooth_counter;i++)
         {
             while(!socket->isOpen())
             {

             }
             char Message[32];
             qDebug()<<"smoth tab["<<i<<"] X="<<map_smooth_path[i][0]<<"Y="<<map_smooth_path[i][1];



             sprintf(Message,"Path=%d,%d,%d;",i,map_smooth_path[i][0], map_smooth_path[i][1]);
             //addToLogs((QString)Message);

             QString comand = (Message);
             ui->lineEditText2Send->clear();
             ui->lineEditText2Send->setText(comand);
             on_pushButtonSend_clicked();

         }
         map_smooth_counter_global = map_smooth_counter;
     }
     else
     {
         QMessageBox msgBox;
         msgBox.setText("Point 0.0 not Selected!");
         msgBox.exec();
     }



}

void MainWindow::on_pushButton_2_clicked()
{
    pushButtonFloodFill_clicked();
}

