#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPainter>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //---------------------------------Calendar
    calendar = new MyCalendar(this);
    calendar->setGeometry(10,20,300,200);
    //--------------------------------Humanoid
    human = new MyHumanoid(this);
    human->setGeometry(400,0,500,500);

    testLabel = new QLabel(this);
    testLabel->setGeometry(50,400,200,50);
    testLabel->setText(QString("Hello World"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTextOnLabel(QString &string){
    testLabel->setText(string);
}
