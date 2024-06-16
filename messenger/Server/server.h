#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QVector>
#include <QMap>
#include <QtSql>

#include "client.h"
#include "task_manager.h"

class Server : public QTcpServer
{
    Q_OBJECT

public:
    explicit Server(QObject *parent = 0);  // Конструктор сервера

private:
    int server_port = 8084;  // Порт сервера
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");  // Объект базы данных SQLite

signals:
    void send_message(QByteArray, QByteArray, QByteArray);  // Сигнал для отправки сообщения клиенту

private slots:
    void on_send_message(QByteArray, QByteArray, QByteArray);  // Слот для отправки сообщения

protected:
    void incomingConnection(qintptr user_id);  // Обработчик входящего подключения клиента
};

#endif
