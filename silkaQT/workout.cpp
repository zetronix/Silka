#include "workout.h"
#include <QDebug>
#include <QtAlgorithms>

Workout::Workout()
{
    date = QDate::currentDate();
}
Workout::Workout(QDate& date, workoutType type):date(date)
{
    training<<type;
}

void Workout::addPartToTraining(workoutType type){
    if(training.indexOf(type) == -1)
    training<<type;
    else {
        qDebug()<<"Cannot add element - element already exist";
    }
}
void Workout::removePartFromTrainig(workoutType type){
    int i = training.indexOf(type);
    if(i != -1)
        training.remove(i);
     else{
        qDebug()<<"Cannot remove element - element doesnt exist";
     }
}

const QDate& Workout::getDate() const{
    return date;
}
