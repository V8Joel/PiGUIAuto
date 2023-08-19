#include "SimulinkModelWrapper.h"
#include <QDebug>

SimulinkModelWrapper::SimulinkModelWrapper(QObject *parent)
    : QObject(parent)
{
    // Initialize the Test2 model
    m_model.initialize();

    m_step_timer = new QTimer(this);  // Create a new QTimer object and set its parent to `this`.

    // Connect the timer to execute the step function of the model
    connect(m_step_timer, &QTimer::timeout, this, &SimulinkModelWrapper::executeStep);

    // Start the timer using the model's step time (converted from seconds to milliseconds)
    m_step_timer->start(static_cast<int>(getStepTime() * 1000));
}

SimulinkModelWrapper::~SimulinkModelWrapper()
{
    // The QTimer will be automatically deleted since it has this QObject as its parent.
    // If there are additional resources you want to release, you can do so here.
}

double SimulinkModelWrapper::test2Output() const
{
    return m_model.rtY.Test2Out;
}

void SimulinkModelWrapper::setInput(double value)
{
    m_model.rtU.Data2In = value;
    qDebug() << "Setting Input:" << value;
    emit test2OutputChanged();
}

double SimulinkModelWrapper::getStepTime() const
{
    return m_model.rtP.model_step_time;
}

void SimulinkModelWrapper::executeStep()
{
    m_model.step();
    qDebug() << "Executed Step. Current Output:" << test2Output();
    // If there are other post-step operations or signals you want to emit after each step,
    // add them here.
}

void SimulinkModelWrapper::shutdown()
{
    // Stop the QTimer
    if(m_step_timer->isActive()) {
        m_step_timer->stop();
    }

    // Call the terminate function of the Test2 model
    m_model.terminate();

    qDebug() << "SimulinkModelWrapper shutdown completed.";
}
