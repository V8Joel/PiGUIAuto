#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(QString wifiStatus READ wifiStatus WRITE setWifiStatus NOTIFY wifiStatusChanged FINAL)
    Q_PROPERTY(QString bluetoothStatus READ bluetoothStatus WRITE setBluetoothStatus NOTIFY bluetoothStatusChanged FINAL)
    Q_PROPERTY(QString batteryStatus READ batteryStatus WRITE setBatteryStatus NOTIFY batteryStatusChanged FINAL)


public:
    System(QObject *parent = nullptr);

    bool carLocked() const;

    int outdoorTemp() const;

    QString userName() const;

    QString wifiStatus() const;

    QString bluetoothStatus() const;

    QString batteryStatus() const;

public slots:
    void setCarLocked(bool carLocked);

    void setOutdoorTemp(int outdoorTemp);

    void setUserName(QString userName);

    void setWifiStatus(QString wifiStatus);

    void setBluetoothStatus(QString bluetoothStatus);

    void setBatteryStatus(QString batteryStatus);

signals:

    void carLockedChanged(bool carLocked);

    void outdoorTempChanged(int outdoorTemp);

    void userNameChanged(QString userName);

    void wifiStatusChanged(QString wifiStatus);

    void bluetoothStatusChanged(QString bluetoothStatus);

    void batteryStatusChanged(QString batteryStatus);

private:
    bool m_carLocked;
    int m_outdoorTemp;
    QString m_userName;
    QString m_wifiStatus;
    QString m_bluetoothStatus;
    QString m_batteryStatus;
};

#endif // SYSTEM_H
