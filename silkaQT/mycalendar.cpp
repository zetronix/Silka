#include "mycalendar.h"
#include <QDate>
#include <QDebug>
#include <QPainter>
#include <QCalendarWidget>

MyCalendar::MyCalendar(QWidget* parent) : QCalendarWidget(parent)
{

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
