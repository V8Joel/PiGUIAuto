#include "SimulinkModelWrapper.h"
#include <QDebug>

SimulinkModelWrapper::SimulinkModelWrapper(QObject* parent)
    : QObject(parent)
//    , timer10Hz(new QTimer) // 10Hz Timer Constructor
    , timer100Hz(new QTimer) // 100Hz Timer Constructor
    , m_rpmOut (0)
{


    model.Initialize();

//    // Set up the 10Hz timer
//    timer10Hz->setInterval(100); // 10Hz
//    timer10Hz->setTimerType(Qt::PreciseTimer);

    // Set up the 100Hz timer
    timer100Hz->setInterval(10); // 100Hz
    timer100Hz->setTimerType(Qt::PreciseTimer);

//    connect(timer10Hz, &QTimer::timeout, this, &SimulinkModelWrapper::stepModel10Hz);
    connect(timer100Hz, &QTimer::timeout, this, &SimulinkModelWrapper::stepModel100Hz);

//    timer10Hz->start();
    timer100Hz->start();
}


SimulinkModelWrapper::~SimulinkModelWrapper()
{
    emit stopTimerSignal(); // Emit the signal to stop the timer
//    timer10Hz->stop(); // Explicitly stop the 10Hz timer
    timer100Hz->stop(); // Explicitly stop the 100Hz timer
}


//void SimulinkModelWrapper::stepModel10Hz()
//{
//    model.Model_Step_10Hz(); // Executes the Simulink 10Hz main code, based on the QTimer
//    qDebug() << "Simulink Model Stepped (10Hz)";
//}

void SimulinkModelWrapper::stepModel100Hz()
{
    model.Model_Step_100Hz(); // Executes the Simulink 10Hz main code, based on the QTimer
    setRpmOut(model.getRPM_Out());
    qDebug() << "Simulink Model Stepped (100Hz)";
}


void SimulinkModelWrapper::shutdown()
{
//    if(timer10Hz) {
//        timer10Hz->stop(); // Disables the QTimer to allow for a graceful shutdown
//    }
    if(timer100Hz) {
        timer100Hz->stop(); // Disables the QTimer to allow for a graceful shutdown
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
