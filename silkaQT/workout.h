#pragma once
#include <QDate>
#include <QVector>

enum workoutType {BIC, TRIC, ARM, CHEST, BACK, ABS, LEGS};

class MyCalendar;

class Workout
{
    QDate date;
    QVector<workoutType> training;

public:
    Workout();
    Workout(QDate date);
    Workout(QDate& date, workoutType type, MyCalendar* calendar);
    void addPartToTraining(workoutType type);
    void removePartFromTrainig(workoutType type);
    const QDate& getDate() const;
    const QVector<workoutType>& getWorkouts();

    bool operator==(const QDate& workout2) const;
};
