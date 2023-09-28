#include "simulinkmodelwrapper.h"
#include <QDebug>

simulinkmodelwrapper::simulinkmodelwrapper(QObject* parent)
    : QObject(parent)
    //    , timer10Hz(new QTimer) // 10Hz Timer Constructor
    , timer100Hz(new QTimer) // 100Hz Timer Constructor
    , m_rpmOut (0)
{


    model.Initialize();

    // Set up the 10Hz timer
    //    timer10Hz->setInterval(100); // 10Hz
    //    timer10Hz->setTimerType(Qt::PreciseTimer);

    // Set up the 100Hz timer
    timer100Hz->setInterval(10); // 100Hz
    timer100Hz->setTimerType(Qt::PreciseTimer);

    //    connect(timer10Hz, &QTimer::timeout, this, &simulinkmodelwrapper::stepModel10Hz);
    connect(timer100Hz, &QTimer::timeout, this, &simulinkmodelwrapper::stepModel100Hz);

    //    timer10Hz->start();
    timer100Hz->start();
}


simulinkmodelwrapper::~simulinkmodelwrapper()
{
    emit stopTimerSignal(); // Emit the signal to stop the timer
    //    timer10Hz->stop(); // Explicitly stop the 10Hz timer
    timer100Hz->stop(); // Explicitly stop the 100Hz timer
}


//void simulinkmodelwrapper::stepModel10Hz()
//{
////    model.Model_Step_10Hz(); // Executes the Simulink 10Hz main code, based on the QTimer
//    qDebug() << "Simulink Model Stepped (10Hz)";
//}

void simulinkmodelwrapper::stepModel100Hz()
{
    model.Model_Step_100Hz(); // Executes the Simulink 10Hz main code, based on the QTimer
    setRpmOut(model.getRPM_Out());
    setSpeedOut(model.getSpeed_Out());
    //    qDebug() << "Simulink Model Stepped (100Hz)";
}

void simulinkmodelwrapper::rpmIn(int32_T sliderRPM)
{
    model.setRPM_In(sliderRPM);
    //    qDebug() << "SliderRPM value assigned to: " << sliderRPM;
}

int simulinkmodelwrapper::rpmOut() const
{

    qDebug() << "rpmOut Obtained: " << m_rpmOut;
    return m_rpmOut;
}

real_T simulinkmodelwrapper::speedOut() const
{
    qDebug() << "speedOut Obtained: " << m_speedOut;
    return m_speedOut;
}

void simulinkmodelwrapper::setRpmOut(int newRpmOut)
{
    if (m_rpmOut != newRpmOut) {
        m_rpmOut = newRpmOut;
        emit rpmOutChanged(newRpmOut);
    }
    qDebug() << "rpmOut Value Updated: " << newRpmOut;
}

void simulinkmodelwrapper::speedIn(real_T sliderSpeed)
{
    model.setSpeed_In(sliderSpeed);
}

void simulinkmodelwrapper::setSpeedOut(real_T newSpeedOut)
{
    if (m_speedOut != newSpeedOut) {
        m_speedOut = newSpeedOut;
        emit speedOutChanged(newSpeedOut);
    }
    qDebug() << "speedOut Value Updated: " << newSpeedOut;
}

void simulinkmodelwrapper::shutdown()
{
    //    if(timer10Hz) {
    //        timer10Hz->stop(); // Disables the QTimer to allow for a graceful shutdown
    //    }
    if(timer100Hz) {
        timer100Hz->stop(); // Disables the QTimer to allow for a graceful shutdown
    }

    model.Terminate();

    qDebug() << "Simulink Shutdown Completed";

}

