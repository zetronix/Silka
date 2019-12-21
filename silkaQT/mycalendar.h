#ifndef MYCALENDAR_H
#define MYCALENDAR_H
#include <QWidget>
#include <QCalendarWidget>
#include <QLabel>
#include "workout.h"


class MyCalendar : public QCalendarWidget
{
    Q_OBJECT
public:
    MyCalendar(QWidget* parent = nullptr);

private:
    QList<QDate> dateList;
    QVector<Workout> workouts;


private slots:
    void updateList(const QDate&);
    void paintCell(QPainter * painter, const QRect & rect, const QDate & date) const;
    void checkWorkoutList(const QDate& date);
};

#endif // MYCALENDAR_H
