#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "SimulinkModelWrapper.h"

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    // Create an instance of your SimulinkModelWrapper
    SimulinkModelWrapper modelWrapper;

    QQmlApplicationEngine engine;

    // Set the SimulinkModelWrapper instance as a context property
    engine.rootContext()->setContextProperty("simulinkModel", &modelWrapper);

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("PiGUIAuto", "Main");

    // Since we have exposed simulinkModel as a context property, we don't need to find or connect it anymore.
    // The connections between QML signals and C++ slots should be set in the QML side.

    // Handle application's exit signal
    QObject::connect(&app, &QGuiApplication::aboutToQuit, [&modelWrapper]() {
        modelWrapper.shutdown();
    });

    return app.exec();
}
