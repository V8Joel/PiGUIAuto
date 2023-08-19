#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "SimulinkModelWrapper.h"

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    // Register the SimulinkModelWrapper with QML
    qmlRegisterType<SimulinkModelWrapper>("com.mycompany", 1, 0, "SimulinkModelWrapper");

    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("PiGUIAuto", "Main");

    return app.exec();
}
