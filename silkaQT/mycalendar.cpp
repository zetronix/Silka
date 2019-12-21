#include "mycalendar.h"
#include <QDate>
#include <QDebug>
#include <QPainter>
#include <QCalendarWidget>
#include "workout.h"

MyCalendar::MyCalendar(QWidget* parent) : QCalendarWidget(parent)
{
    connect(this,SIGNAL(clicked(const QDate&)),this,SLOT(checkWorkoutList(const QDate&)));
    //testing
    QDate date(2019,12,24);
    Workout testWorkout(date,workoutType::ABS);
    workouts.push_back(testWorkout);
}

void MyCalendar::updateList(const QDate& date){
    dateList<<date;
    updateCell(date);
}

void MyCalendar::paintCell(QPainter * painter, const QRect & rect, const QDate & date) const{
        if(dateList.contains(date)){
            painter->save();
            painter->setBrush(Qt::red);
            painter->drawRect(rect);
            painter->drawText(rect, Qt::AlignCenter|Qt::TextSingleLine, QString::number(date.day()));
            painter->restore();
        }
        else
            QCalendarWidget::paintCell(painter, rect, date);
}

void MyCalendar::checkWorkoutList(const QDate& date) {
    for(int i=0; i<workouts.size(); i++){
        if(workouts.at(i).getDate() == date){
            updateList(date);
        }
    }
}
