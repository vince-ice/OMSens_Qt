#ifndef OPTIMIZATIONTAB_H
#define OPTIMIZATIONTAB_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QButtonGroup>
#include <QRadioButton>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include "../SciNotationDoubleSpinbox.h"

class OptimizationTab : public QWidget
{
    Q_OBJECT
public:
    explicit OptimizationTab(QList<QString> variables, QString target_var, double epsilon, double percentage, QWidget *parent = nullptr);

    // Conventions
    //   Columns ordering
    int mMinimizeButtonId = 0;
    int mMaximizeButtonId = 1;
    // Getters
    double getEpsilon() const;
    QString getTargetVariable() const;
    int getGoalId() const;
    double  getBoundariesValue() const;

private:
    // Variable
    QLabel    *mpVariablesLabel;
    QComboBox *mpVariablesComboBox;
    QButtonGroup *mpGoalButtonGroup;
    QRadioButton *mpMinRadio;
    QRadioButton *mpMaxRadio;
    // Epsilon
    QLabel   *mpEpsilonLabel;
    SciNotationDoubleSpinbox *mpEpsilonBox;
    QLabel   *mpEpsilonHintLabel;
    // Boundaries
    QLabel *mpBoundariesLabel;
    QDoubleSpinBox *mpBoundariesBox;

signals:

public slots:
};

#endif // OPTIMIZATIONTAB_H
