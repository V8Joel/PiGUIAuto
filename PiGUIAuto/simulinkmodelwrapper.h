#ifndef SIMULINKMODELWRAPPER_H
#define SIMULINKMODELWRAPPER_H

#include <QObject>
#include <QTimer>
#include <QThread>
#include "ClusterControl.h" // Include the Simulink-generated header

class SimulinkModelWrapper : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double rpmInput READ rpmInput WRITE setRpmInput NOTIFY rpmInputChanged)
    Q_PROPERTY(double rpmOutput READ rpmOutput NOTIFY rpmOutputChanged)

public:
    SimulinkModelWrapper(QObject* parent = nullptr);
    ~SimulinkModelWrapper();

public slots:
    void stepModel();
    void setRpmInput(double rpm);
    double rpmInput() const;
    double rpmOutput() const;
    void shutdown();

signals: // Declare the signal here
    void stopTimerSignal();
    void rpmInputChanged(double rpm);
    void rpmOutputChanged(double rpm);

private:
    BenchTest::ClusterControl model;
    QThread* simulinkThread;
    QTimer* timer;
};

#endif // SIMULINKMODELWRAPPER_H
