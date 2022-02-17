#include "netmanager.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonArray>
#include <QtNetwork/QNetworkReply>
#include <string>
#include <iostream>
#include <QDebug>

NetManager::NetManager(QObject *parent) : QObject(parent) { }

void NetManager::run()
{
    qDebug() << "value.toString()";
    QNetworkAccessManager *m_nam = new QNetworkAccessManager();
    QNetworkRequest request(QUrl("http://localhost:3000/api/v1"));
    QNetworkReply *reply = m_nam->get(request);
    qDebug() << "sending reply";
    QObject::connect(reply, &QNetworkReply::finished, this, [reply] {
        qDebug() << "reply " << (reply->error() == QNetworkReply::NoError);
        auto res = reply->readAll();
        qDebug() << res;
        const QJsonDocument doc = QJsonDocument::fromJson(res);
        const QJsonArray array = doc.array();
        
        for (const QJsonValue &value : array) {
            qDebug() << value.toString();
        }
        reply->deleteLater();
    });
}



