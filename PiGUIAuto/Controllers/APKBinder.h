#ifndef APKBINDER_H
#define APKBINDER_H

#include <QObject>
#include <QJniObject>

class APKBinder : public QObject
{
    Q_OBJECT

public:
    explicit APKBinder(QObject *parent = nullptr);

    Q_INVOKABLE void launchApp();

private:
    QJniObject m_javaObject;
};

#endif // APKBINDER_H
