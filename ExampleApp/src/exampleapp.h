#ifndef EXAMPLEAPP_H
#define EXAMPLEAPP_H

#include <Cutelyst/Application>

using namespace Cutelyst;

class ExampleApp : public Application
{
    Q_OBJECT
    CUTELYST_APPLICATION(IID "ExampleApp")
public:
    Q_INVOKABLE explicit ExampleApp(QObject *parent = nullptr);
    ~ExampleApp();

    bool init();
};

#endif //EXAMPLEAPP_H

