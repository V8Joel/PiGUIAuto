#include "system.h"

System::System(QObject *parent)
    : QObject(parent)
    , m_carLocked ( true )
    , m_outdoorTemp ( 20 )
    , m_userName ( "Ben" )
    , m_wifiStatus ( "" )
    , m_bluetoothStatus ( "" )
    , m_batteryStatus ( "" )
{

}

bool System::carLocked() const
{
    return m_carLocked;
}

int System::outdoorTemp() const
{
    return m_outdoorTemp;
}

QString System::userName() const
{
    return m_userName;
}

QString System::wifiStatus() const
{
    return m_wifiStatus;
}

QString System::bluetoothStatus() const
{
    return m_bluetoothStatus;
}

QString System::batteryStatus() const
{
    return m_batteryStatus;
}


void System::setCarLocked(bool carLocked)
{
    if (m_carLocked == carLocked)
        return;

    m_carLocked = carLocked;
    emit carLockedChanged(m_carLocked);
}

void System::setOutdoorTemp(int outdoorTemp)
{
    if (m_outdoorTemp == outdoorTemp)
        return;
    m_outdoorTemp = outdoorTemp;
    emit outdoorTempChanged(m_outdoorTemp);
}

void System::setUserName(QString userName)
{
    if (m_userName == userName)
        return;
    m_userName = userName;
    emit userNameChanged(m_userName);
}

void System::setWifiStatus(QString wifiStatus)
{
    if (m_wifiStatus == wifiStatus)
        return;
    m_wifiStatus = wifiStatus;
    emit wifiStatusChanged(m_wifiStatus);
}


void System::setBluetoothStatus(QString bluetoothStatus)
{
    if (m_bluetoothStatus == bluetoothStatus)
        return;
    m_bluetoothStatus = bluetoothStatus;
    emit bluetoothStatusChanged(m_bluetoothStatus);
}


void System::setBatteryStatus(QString batteryStatus)
{
    if (m_batteryStatus == batteryStatus)
        return;
    m_batteryStatus = batteryStatus;
    emit batteryStatusChanged(m_batteryStatus);
}
