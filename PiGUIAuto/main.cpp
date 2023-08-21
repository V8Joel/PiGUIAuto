#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <Controllers/system.h>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    System m_systemHandler;

    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("PiGUIAuto", "Main");

    QQmlContext * context( engine.rootContext() );
    context->setContextProperty("systemHandler", &m_systemHandler);

    return app.exec();
}
