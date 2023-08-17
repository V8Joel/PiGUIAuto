#include "system.h"

///////////////////////////////////////////////////////
System::System(QObject *parent)
    : QObject(parent)
    , m_carLocked ( true )
    , m_outdoorTemp ( 20 )
    , m_userName ( "Ben" )
{

}
///////////////////////////////////////////////////////
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

bool System::bluetoothConnection() const
{
    return m_bluetoothConnection;
}

bool System::wifiConnection() const
{
    return m_wifiConnection;
}

///////////////////////////////////////////////////////
void System::setcarLocked(bool carLocked)
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

void System::setbluetoothConnection(bool BluetoothConnection)
{
    if (m_bluetoothConnection == BluetoothConnection)
        return;
    m_bluetoothConnection = BluetoothConnection;
    emit bluetoothConnectionChanged(m_bluetoothConnection);
}

void System::setWifiConnection(bool WifiConnection)
{
    if (m_wifiConnection == WifiConnection)
        return;
    m_wifiConnection = WifiConnection;
    emit wifiConnectionChanged(m_wifiConnection);
}

///////////////////////////////////////////////////////
