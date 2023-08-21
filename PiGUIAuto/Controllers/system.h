#ifndef SYSTEM_H
#define SYSTEM_H
#include <QObject>
///////////////////////////////////////////////////////
class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(bool bluetoothConnection READ bluetoothConnection WRITE setBluetoothConnection NOTIFY bluetoothConnectionChanged FINAL)
    Q_PROPERTY(bool wifiConnection READ wifiConnection WRITE setWifiConnection NOTIFY wifiConnectionChanged FINAL)

///////////////////////////////////////////////////////
public:
    System(QObject *parent = nullptr);

    bool carLocked() const;

    int outdoorTemp() const;

    QString userName() const;


    bool bluetoothConnection() const;


    bool wifiConnection() const;

///////////////////////////////////////////////////////
public slots:
    void setCarLocked(bool carLocked);

    void setOutdoorTemp(int outdoorTemp);

    void setUserName(QString userName);

    void setBluetoothConnection(bool BluetoothConnection);

    void setWifiConnection(bool WifiConnection);

///////////////////////////////////////////////////////
signals:

    void carLockedChanged(bool carLocked);

    void outdoorTempChanged(int outdoorTemp);

    void userNameChanged(QString userName);

    void bluetoothConnectionChanged(bool BluetoothConnection );

    void wifiConnectionChanged(bool WifiConnection);
///////////////////////////////////////////////////////
private:
    bool m_carLocked;
    int m_outdoorTemp;
    QString m_userName;
    bool m_bluetoothConnection;
    bool m_wifiConnection;
};
///////////////////////////////////////////////////////
#endif // SYSTEM_H
