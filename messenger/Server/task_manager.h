#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <QThread>
#include <QQueue>
#include <QFile>

// Подключение общих заголовочных файлов
#include "..\common_includes\std.h"

class Task_manager : public QThread
{
    Q_OBJECT

public:
    explicit Task_manager();  // Конструктор задачника

signals:
    void send_message(QByteArray, QByteArray, QByteArray);  // Сигнал для отправки сообщения

private slots:
    void on_add_task(QByteArray);  // Слот для добавления задачи
    void on_lock();  // Слот для блокировки
    void on_unlock();  // Слот для разблокировки

private:
    QQueue<QByteArray> receive_queue;  // Очередь полученных задач
    bool lock = false;  // Флаг блокировки
    bool file_mode = false;  // Флаг режима файла
    QByteArray file_buffer;  // Буфер файла
    QByteArray file_path;  // Путь к файлу
    int file_size;  // Размер файла

private:
    void handle_task();  // Обработка задачи
    bool validate_user(QByteArray, QByteArray);  // Проверка пользователя
    bool validate_signup(QByteArray, QByteArray);  // Проверка регистрации пользователя
    QByteArray get_log(QByteArray, QByteArray);  // Получение журнала сообщений
    bool update_log(QByteArray, QByteArray, QByteArray);  // Обновление журнала сообщений
    QByteArray get_log_part(QByteArray, QByteArray, unsigned int, unsigned int);  // Получение части журнала сообщений
    unsigned int log_line_count(QByteArray, QByteArray);  // Подсчет количества строк в журнале сообщений
    QByteArray find_contact(QByteArray, int count = max_contact_search);  // Поиск контактов
    bool find_user(QByteArray);  // Поиск пользователя
    void add_user(QByteArray);  // Добавление пользователя
    void delete_user(QByteArray);  // Удаление пользователя
    void disconnect();  // Отключение пользователя

public:
    void run();  // Основная функция потока
};

#endif
