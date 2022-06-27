#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QGraphicsRectItem"
#include "cell.h"
#include <QMouseEvent>
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket();
    Map_GenerateMap();

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
    QBrush gray(Qt::darkGray);
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
                    cells[i][j]->rect->setBrush(Qt::red);
                    qDebug() << "x : " << cells[j][i]->x;
                    qDebug() << "y : " << cells[j][i]->y;

                    qDebug() << "mouse x : " << event->x();
                    qDebug() << "mouse y : " << event->y();
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
          cells[i][j]->type = CellType_free;
          cells[i][j]->SetBrush();
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
}


void MainWindow::on_pushButtonSend_clicked()
{
     QString data = ui->lineEditText2Send->text();

    if(socket->isOpen())
        {
            socket->write(data.toUtf8());
            addToLogs(data);
        }
    else
    {
        addToLogs("Socket not connect!!");
    }
}


void MainWindow::on_pushButtonClear_clicked()
{
    ui->lineEditText2Send->clear();
    ui->textEditLogs->clear();
}

