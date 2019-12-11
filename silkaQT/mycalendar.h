#ifndef MYCALENDAR_H
#define MYCALENDAR_H

#include <QWidget>
#include <QCalendarWidget>

class MyCalendar : public QWidget
{
    Q_OBJECT
public:
    explicit MyCalendar(QWidget *parent = nullptr);

signals:

public slots:

private:
    QCalendarWidget* calendar;
};

#endif // MYCALENDAR_H
