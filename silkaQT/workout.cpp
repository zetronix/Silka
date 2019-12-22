#include "workout.h"
#include <QDebug>
#include <QtAlgorithms>
#include "mycalendar.h"

Workout::Workout()
{
    date = QDate::currentDate();
}
Workout::Workout(QDate date): date(date){}
Workout::Workout(QDate& date, workoutType type, MyCalendar* calendar):date(date)
{
    training<<type;
    calendar->checkWorkoutList(date);
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
const QVector<workoutType>& Workout::getWorkouts(){
    return training;
}

bool Workout::operator==(const QDate &workout2) const{
    if(date == workout2){
        return true;
    }
    else {
        return false;
    }
}
