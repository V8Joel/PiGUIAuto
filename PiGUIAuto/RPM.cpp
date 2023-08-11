#include "RPM.h"

RPM :: RPM()
{

}

#include <QGuiApplication>
#include <QQmlApplicationEngine>


int rpmgauge(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("PiGUIAuto", "rpmgauge");

    return app.exec();
}
