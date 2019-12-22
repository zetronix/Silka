#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPainter>
#include <QDebug>



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
    //--------------------------------Workout Panel
    workoutScreen = new QTextBrowser(this);
    workoutScreen->setGeometry(50,350,200,100);
    workoutScreen->setText(QString("Hello World"));

    addNewWorkout = new QPushButton("+", this);
    addNewWorkout->setGeometry(50,300,50,50);
    QFont font = addNewWorkout->font();

    removeWorkout = new QPushButton("-", this);
    removeWorkout->setGeometry(110,300,50,50);

    connect(calendar, SIGNAL(emitWorkoutType(const QVector<workoutType>&)), this, SLOT(setTextOnLabel(const QVector<workoutType>&)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTextOnLabel(const QVector<workoutType>& workouts){
    QString string;
    qDebug()<<"setTextOnLabel";
    for(auto i=workouts.begin(); i!=workouts.end(); i++){
        switch(*i){
        case BIC:
            string+="BIC";
            break;
        case TRIC:
            string+="TRIC";
            break;
        case ARM:
            string+="ARM";
            break;
        case CHEST:
            string+="CHEST";
            break;
        case BACK:
            string+="BACK";
            break;
        case ABS:
            string+="ABS";
            break;
        case LEGS:
            string +="LEGS";
            break;
        default:
            string="-----";
        }
    }
    workoutScreen->setText(string);
}
