#ifndef CLIENT_H
#define CLIENT_H

#include <QThread>
#include <QTcpSocket>

class Client : public QThread
{
    Q_OBJECT

public:
    explicit Client(int id, QObject *parent = 0);  // Конструктор для инициализации клиента с заданным id
    void run();  // Основная функция потока, устанавливает соединение и запускает цикл обработки событий

private:
    QTcpSocket *socket;  // Сокет для подключения клиента
    QByteArray username;  // Имя пользователя
    QByteArray destination;  // Место назначения
    QByteArray user_id;  // ID пользователя
    bool finished = false;  // Флаг завершения работы клиента
    bool id_confirm = false;  // Флаг подтверждения идентификации пользователя

signals:
    void error(QTcpSocket::SocketError socketerror);  // Сигнал ошибки сокета
    void receive_message(QByteArray);  // Сигнал получения сообщения
    void lock();  // Сигнал блокировки (для синхронизации)
    void unlock();  // Сигнал разблокировки (для синхронизации)

private slots:
    void receive();  // Слот для обработки входящих сообщений
    void on_disconnected();  // Слот для обработки отключения клиента

public slots:
    void send_message(QByteArray, QByteArray, QByteArray);  // Слот для отправки сообщения

public:
    QByteArray get_id();  // Геттер для получения ID пользователя
    void set_username(const QByteArray);  // Сеттер для установки имени пользователя
    QByteArray get_username();  // Геттер для получения имени пользователя
};

#endif
