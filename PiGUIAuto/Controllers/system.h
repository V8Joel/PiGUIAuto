#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)

public:
    System(QObject *parent = nullptr);

    bool carLocked() const;

    int outdoorTemp() const;

    QString userName() const;


public slots:
    void setcarLocked(bool carLocked);

    void setOutdoorTemp(int outdoorTemp);

    void setUserName(QString userName);

signals:

    void carLockedChanged(bool carLocked);

    void outdoorTempChanged(int outdoorTemp);

    void userNameChanged(QString userName);

private:
    bool m_carLocked;
    int m_outdoorTemp;
    QString m_userName;
};

#endif // SYSTEM_H
