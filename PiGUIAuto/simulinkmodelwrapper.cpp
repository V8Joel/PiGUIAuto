#include "SimulinkModelWrapper.h"
#include <QDebug>

SimulinkModelWrapper::SimulinkModelWrapper(QObject* parent)
    : QObject(parent), timer(new QTimer)
{
    model.Initialize();

    // Set up the timer
    timer->setInterval(100); // 10Hz
    timer->setTimerType(Qt::PreciseTimer);

    connect(timer, &QTimer::timeout, this, &SimulinkModelWrapper::stepModel);
    connect(this, &SimulinkModelWrapper::rpmInputChanged, this, &SimulinkModelWrapper::stepModel);

    timer->start();
}


SimulinkModelWrapper::~SimulinkModelWrapper()
{
    emit stopTimerSignal(); // Emit the signal to stop the timer
    timer->stop(); // Explicitly stop the timer here
}

double SimulinkModelWrapper::rpmInput() const
{
    return model.ClusterControl_U.RPM_In;
}

double SimulinkModelWrapper::rpmOutput() const
{
    return model.ClusterControl_Y.RPM_Out;
}

void SimulinkModelWrapper::setRpmInput(double rpm)
{
    if(model.ClusterControl_U.RPM_In != rpm) {
        model.ClusterControl_U.RPM_In = rpm;
        emit rpmInputChanged(rpm);
    }
}

void SimulinkModelWrapper::stepModel()
{
    model.Model_Step_10Hz();
    emit rpmOutputChanged(model.ClusterControl_Y.RPM_Out);
}

void SimulinkModelWrapper::shutdown()
{
    if(timer) {
        timer->stop();
    }

}
