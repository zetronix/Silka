#include "mycalendar.h"

MyCalendar::MyCalendar(QWidget *parent) : QWidget(parent)
{
    calendar = new QCalendarWidget(this);
    calendar->setGeometry(0,0,300,300);
}
