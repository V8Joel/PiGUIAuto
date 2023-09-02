#ifndef SIMULINKMODELWRAPPER_H
#define SIMULINKMODELWRAPPER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include "ClusterControl.h" // Include the Simulink-generated header

class SimulinkModelWrapper : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int rpmOut READ rpmOut NOTIFY rpmOutChanged)



public:
    SimulinkModelWrapper(QObject* parent = nullptr);
    ~SimulinkModelWrapper();

    int rpmOut() const;

public slots:
    void stepModel10Hz();
    void stepModel100Hz();
    void shutdown();
    void rpmIn(int32_T sliderRPM);
    void setRpmOut(int newRpmOut);

signals: // Declare the signal here
    void stopTimerSignal();
    void rpmOutChanged();

private:
    BenchTest::ClusterControl model;
//    QThread* simulinkThread;
    QTimer* timer10Hz;
    QTimer* timer100Hz;
    int m_rpmOut;
};

#endif // SIMULINKMODELWRAPPER_H
