#ifndef APIV1_H
#define APIV1_H

#include <Cutelyst/Controller>

using namespace Cutelyst;

class ApiV1 : public Controller
{
    Q_OBJECT
public:
    explicit ApiV1(QObject *parent = nullptr);
    ~ApiV1();

    C_ATTR(index, :Path :AutoArgs)
    void index(Context *c);
};

#endif //APIV1_H

