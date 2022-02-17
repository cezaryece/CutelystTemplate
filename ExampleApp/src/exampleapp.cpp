#include "exampleapp.h"

#include "root.h"
#include "apiv1.h"

using namespace Cutelyst;

ExampleApp::ExampleApp(QObject *parent) : Application(parent)
{
}

ExampleApp::~ExampleApp()
{
}

bool ExampleApp::init()
{
    new ApiV1(this);
    //new Root(this);

    return true;
}

