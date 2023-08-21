#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QJniObject>
#include <Controllers/system.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    System m_systemHandler;

    QQmlApplicationEngine engine;

    QQmlContext *context = engine.rootContext();
    context->setContextProperty("systemHandler", &m_systemHandler);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
