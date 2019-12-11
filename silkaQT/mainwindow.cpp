#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    calendar = new MyCalendar(this);
    calendar->setGeometry(0,0,500,500);
    qDebug()<<"Insert calendar";
}

MainWindow::~MainWindow()
{
    delete ui;
}

