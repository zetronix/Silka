#ifndef WORKOUT_H
#define WORKOUT_H
#include <QDate>
#include <QVector>

enum workoutType {BIC, TRIC, ARM, CHEST, BACK, ABS, LEGS};

class Workout
{
    QDate date;
    QVector<workoutType> training;

public:
    Workout();
    Workout(QDate& date, workoutType type);
    void addPartToTraining(workoutType type);
    void removePartFromTrainig(workoutType type);
};

#endif // WORKOUT_H
