#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickItem>
#include "simulinkmodelwrapper.h"

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    simulinkmodelwrapper modelWrapper;

    engine.rootContext()->setContextProperty("modelWrapper", &modelWrapper);

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("PiGUIAuto", "Main");

    // Get the root QML object without detaching temporary
    auto rootObjects = engine.rootObjects();
    if (!rootObjects.isEmpty()) {
        QObject* rootObject = rootObjects.first();
        QQuickItem* mainItem = qobject_cast<QQuickItem*>(rootObject);

        // Connect the signal to a QML function
        QObject::connect(&modelWrapper, &simulinkmodelwrapper::rpmOutChanged, rootObject, [rootObject](int value) {
            QMetaObject::invokeMethod(rootObject, "onRpmOutChanged", Q_ARG(QVariant, value));
        });

    }

    // Handle application's exit signal with a context
    QObject::connect(&app, &QGuiApplication::aboutToQuit, &modelWrapper, [&modelWrapper]() {
        modelWrapper.shutdown();

    });

    return app.exec();
}
