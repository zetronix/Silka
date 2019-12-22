#pragma once
#include <QWidget>
#include <QCalendarWidget>
#include <QLabel>
#include <QVector>
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
public slots:
    void checkWorkoutList(const QDate& date);

signals:
    void emitWorkoutType(const QVector<workoutType>&);
};

