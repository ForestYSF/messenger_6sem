#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <QThread>
#include <QQueue>

class Task_manager : public QThread
{
    Q_OBJECT

public:
    explicit Task_manager(QObject *parent = 0);  // Конструктор задачника

signals:
    void login_true();  // Сигнал успешного входа
    void login_false();  // Сигнал неудачного входа
    void login_duplicate();  // Сигнал дублирования логина
    void signup_true();  // Сигнал успешной регистрации
    void signup_false();  // Сигнал неудачной регистрации
    void contact_online(QByteArray);  // Сигнал о контакте онлайн
    void contact_offline(QByteArray);  // Сигнал о контакте офлайн
    void update_log(QString);  // Сигнал обновления журнала
    void create_log(QByteArray, QByteArray);  // Сигнал создания журнала
    void someone_connected(QByteArray);  // Сигнал о подключении к серверу
    void someone_disconnected(QByteArray);  // Сигнал о отключении от сервера
    void receive_message(QByteArray, QByteArray, QString);  // Сигнал получения сообщения
    void add_contacts(QStringList);  // Сигнал добавления контактов
    void set_username(QByteArray);  // Сигнал установки имени пользователя
    void set_user_id(QByteArray);  // Сигнал установки ID пользователя
    void reconnect();  // Сигнал переподключения

private slots:
    void on_add_task(QByteArray);  // Слот для добавления задачи
    void on_lock();  // Слот для блокировки
    void on_unlock();  // Слот для разблокировки

private:
    QQueue<QByteArray> receive_queue;  // Очередь полученных задач
    bool lock = false;  // Флаг блокировки

private:
    void handle_task();  // Обработка задачи

public:
    void run();  // Основная функция потока
    void disconnect();  // Отключение от сервера
};

#endif

