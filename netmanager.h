#ifndef NETMANAGER_H
#define NETMANAGER_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonArray>
#include <QtNetwork/QNetworkReply>
#include <string>
#include <iostream>
#include <QDebug>

class NetManager : public QObject
{
    Q_OBJECT
public:
    explicit NetManager(QObject *parent = nullptr);
    void run();
    
signals:
    
};

#endif // NETMANAGER_H
