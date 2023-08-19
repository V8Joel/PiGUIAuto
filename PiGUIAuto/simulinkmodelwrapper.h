#ifndef SIMULINKMODELWRAPPER_H
#define SIMULINKMODELWRAPPER_H

#include <QObject>
#include "MATLAB/Test2_ert_rtw/Test2.h"

class SimulinkModelWrapper : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double test2Output READ test2Output NOTIFY test2OutputChanged)

public:
    explicit SimulinkModelWrapper(QObject *parent = nullptr);
    ~SimulinkModelWrapper();

    double test2Output() const;

public slots:
    void setInput(double value);

signals:
    void test2OutputChanged();

private:
    Test2 m_model;
};

#endif // SIMULINKMODELWRAPPER_H
