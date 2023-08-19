#ifndef SIMULINKMODELWRAPPER_H
#define SIMULINKMODELWRAPPER_H

#include <QObject>
#include <QTimer>

#include "MATLAB/Test2_ert_rtw/Test2.h"

class SimulinkModelWrapper : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double test2Output READ test2Output NOTIFY test2OutputChanged)

public:
    explicit SimulinkModelWrapper(QObject *parent = nullptr);
    ~SimulinkModelWrapper();

    double test2Output() const;
    double getStepTime() const;

    void shutdown();

public slots:
    void setInput(double value);

signals:
    void test2OutputChanged();

private:
    void executeStep();  // Declare the private method that will be connected to the timer's timeout signal.

    Test2 m_model;
    QTimer* m_step_timer;  // Declaring as a pointer.
};

#endif // SIMULINKMODELWRAPPER_H
