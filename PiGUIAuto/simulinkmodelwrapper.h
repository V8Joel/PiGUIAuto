#ifndef SIMULINKMODELWRAPPER_H
#define SIMULINKMODELWRAPPER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include "ClusterControl.h" // Include the Simulink-generated header

class simulinkmodelwrapper : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int rpmOut READ rpmOut NOTIFY rpmOutChanged)
    Q_PROPERTY(real_T speedOut READ speedOut  NOTIFY speedOutChanged)



public:
    simulinkmodelwrapper(QObject* parent = nullptr);
    ~simulinkmodelwrapper();

    int32_T rpmOut() const;
    real_T speedOut() const;

public slots:
//    void stepModel10Hz();
    void stepModel100Hz();
    void shutdown();
    void rpmIn(int32_T sliderRPM);
    void setRpmOut(int32_T newRpmOut);
    void speedIn(real_T sliderSpeed);
    void setSpeedOut(real_T newSpeedOut);

signals: // Declare the signal here
    void stopTimerSignal();
    void rpmOutChanged(int32_T newRpmValue);
    void speedOutChanged (real_T newSpeedValue);

private:
    BenchTest::ClusterControl model;
//    QThread* simulinkThread;
//    QTimer* timer10Hz;
    QTimer* timer100Hz;
    int32_T m_rpmOut;
    real_T m_speedOut;
};

#endif // SIMULINKMODELWRAPPER_H
