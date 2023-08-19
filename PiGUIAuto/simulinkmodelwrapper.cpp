#include <QObject>
#include "SimulinkModelWrapper.h"

SimulinkModelWrapper::SimulinkModelWrapper(QObject *parent)
    : QObject(parent)
{
    // Any initialization you'd like to do.
}

SimulinkModelWrapper::~SimulinkModelWrapper()
{
    // Cleanup, if necessary.
}

double SimulinkModelWrapper::test2Output() const
{
    return m_model.rtY.Test2Out;
}

void SimulinkModelWrapper::setInput(double value)
{
    m_model.rtU.Data2In = value;
    m_model.step();
    emit test2OutputChanged();
}
