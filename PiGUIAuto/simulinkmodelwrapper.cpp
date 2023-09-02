#include "SimulinkModelWrapper.h"
#include <QDebug>

SimulinkModelWrapper::SimulinkModelWrapper(QObject* parent)
    : QObject(parent)
    , timer(new QTimer)
    , m_rpmOut (0)
{


    model.Initialize();

    // Set up the timer
    timer->setInterval(100); // 10Hz
    timer->setTimerType(Qt::PreciseTimer);

    connect(timer, &QTimer::timeout, this, &SimulinkModelWrapper::stepModel);
//    connect(this, &SimulinkModelWrapper::rpmInputChanged, this, &SimulinkModelWrapper::stepModel);

    timer->start();
}


SimulinkModelWrapper::~SimulinkModelWrapper()
{
    emit stopTimerSignal(); // Emit the signal to stop the timer
    timer->stop(); // Explicitly stop the timer here
}


void SimulinkModelWrapper::stepModel()
{
    model.Model_Step_10Hz(); // Executes the Simulink main code, based on the QTimer
    setRpmOut(model.getRPM_Out()); // calls the getRPM_Out function from Simulink to obtain the new value
    qDebug() << "Simulink Model Stepped";
}


void SimulinkModelWrapper::shutdown()
{
    if(timer) {
        timer->stop(); // Disables the QTimer to allow for a graceful shutdown
    }
    qDebug() << "Simulink Shutdown Completed";

}

void SimulinkModelWrapper::rpmIn(int32_T sliderRPM)
{
    model.setRPM_In(sliderRPM);
    qDebug() << "SliderRPM value assigned to: " << sliderRPM;
}

int SimulinkModelWrapper::rpmOut() const
{
    return m_rpmOut;
    qDebug() << "rpmOut Obtained: " << m_rpmOut;
}

void SimulinkModelWrapper::setRpmOut(int newRpmOut)
{
    if (m_rpmOut != newRpmOut) {
        m_rpmOut = newRpmOut;
        emit rpmOutChanged();
    }
    qDebug() << "rpmOut Value Updated: " << newRpmOut;
}
