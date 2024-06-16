#ifndef CONNECTION_H
#define CONNECTION_H

#include <QTcpSocket>

#include "user.h"

class Connection : public QTcpSocket
{
    Q_OBJECT

public:
    explicit Connection(QObject *parent = 0);  // Конструктор соединения
    ~Connection();  // Деструктор соединения

    QString server_ip = "127.0.0.1";  // IP адрес сервера по умолчанию
    int server_port = 8084;  // Порт сервера по умолчанию

private:
    QTcpSocket* socket = new QTcpSocket(this);  // Сокет для соединения
    User *user;  // Указатель на пользователя
    bool status = false;  // Статус соединения
    QByteArray destination;  // Целевой пункт назначения

signals:
    void connected();  // Сигнал о установлении соединения
    void disconnected();  // Сигнал о разъединении
    void error();  // Сигнал об ошибке
    void add_task(QByteArray);  // Сигнал о добавлении задачи

private slots:
    void receive_message();  // Слот для приема сообщений
    void on_socket_connected();  // Обработчик установки соединения
    void on_socket_error(QAbstractSocket::SocketError socketError);  // Обработчик ошибки соединения
    void on_socket_change(QAbstractSocket::SocketState socketState);  // Обработчик изменения состояния сокета
    void on_set_username(QByteArray);  // Установка имени пользователя
    void on_set_user_id(QByteArray);  // Установка ID пользователя

public:
    bool send_message(QByteArray message);  // Отправка сообщения
    void set_user(User *);  // Установка объекта пользователя
    bool get_status();  // Получение текущего статуса соединения
    void set_destination(QByteArray);  // Установка целевого пункта назначения
    QByteArray get_destination();  // Получение текущего целевого пункта назначения
};

#endif

