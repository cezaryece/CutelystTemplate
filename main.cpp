#include <QCoreApplication>
#include "netmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    auto netm = new NetManager();
    netm->run();
    return a.exec();
}
