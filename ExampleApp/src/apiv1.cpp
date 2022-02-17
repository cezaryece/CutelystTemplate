#include "apiv1.h"

using namespace Cutelyst;

ApiV1::ApiV1(QObject *parent) : Controller(parent)
{
}

ApiV1::~ApiV1()
{
}

void ApiV1::index(Context *c)
{
    c->response()->body() = "Matched Controller::ApiV1 in ApiV1. READY!";
}

