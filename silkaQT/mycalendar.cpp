#include "mycalendar.h"
#include <QDate>
#include <QDebug>

MyCalendar::MyCalendar(QWidget* parent) : QWidget(parent)
{
    calendar = new QCalendarWidget(this);
    calendar->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);
    calendar->setGeometry(0,0,350,200);
    testLabel = new QLabel(this);
    testLabel->setGeometry(0,220,200,150);

    connect(calendar,SIGNAL(clicked(const QDate&)),this,SLOT(updateLabel(const QDate&)));
}

void MyCalendar::updateLabel(const QDate& date){
    qDebug()<<"updateLabel";
    testLabel->setText(QString::number(date.day())+"."+QString::number(date.month())+"."+QString::number(date.year()));
}
