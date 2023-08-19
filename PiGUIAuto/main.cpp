#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickItem>

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

    // Get the root QML object
    QObject* rootObject = engine.rootObjects().first();
    QQuickItem* mainItem = qobject_cast<QQuickItem*>(rootObject);

    if(mainItem) {
        QObject::connect(mainItem, SIGNAL(sliderValueChanged(double)), &modelWrapper, SLOT(setInput(double)));
    }

    // Handle application's exit signal
    QObject::connect(&app, &QGuiApplication::aboutToQuit, [&modelWrapper]() {
        modelWrapper.shutdown();
    });

    return app.exec();
}
