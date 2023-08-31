#include "APKBinder.h"
#include <QtGlobal>
#include <QtCore/private/qandroidextras_p.h>
#include <QJniObject>
#include <QDebug>

APKBinder::APKBinder(QObject *parent) : QObject(parent)
{
    // Constructor implementation...
}

void APKBinder::launchApp()
{
    qDebug() << "APKBinder::launchApp called"; // Debug statement

    auto activity = QJniObject(QNativeInterface::QAndroidApplication::context());
    QAndroidIntent serviceIntent(activity.object(),
                                 "com/example/androidservice/QtAndroidService");
    QJniObject result = activity.callObjectMethod(
        "startService",
        "(Landroid/content/Intent;)Landroid/content/ComponentName;",
        serviceIntent.handle().object());

    if (result.isValid()) {
        qDebug() << "Service started successfully";

    } else {
        qDebug() << "Failed to start service";
    }
}
