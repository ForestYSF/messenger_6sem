#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtSql>
#include <QMovie>

#include "ui_window.h"
#include "connection.h"
#include "task_manager.h"
#include "user.h"
#include "contact.h"

#define MAX_CONTACTS 50

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);

private:
    Ui::WindowClass ui; // Интерфейс окна
    Connection *connection; // Указатель на объект соединения
    User user; // Объект текущего пользователя
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); // База данных SQLite
    int window_width; // Ширина окна
    QStringList contacts_found; // Список найденных контактов
    bool delete_mode = false; // Режим удаления контактов
    QMap<QString, Contact*> chat_map; // Словарь чатов
    QQueue<Contact*> contact_queue; // Очередь контактов
    Task_manager *task_manager; // Управляющий объект задачами
    int log_count = 0; // Счетчик логов
    QMovie *status_gif = new QMovie(":/Resources/loading.gif"); // Гифка статуса загрузки

signals:
    void lock(); // Сигнал блокировки интерфейса
    void unlock(); // Сигнал разблокировки интерфейса

private slots:
    void on_socket_connected(); // Подключение сокета
    void on_socket_error(); // Ошибка сокета
    void on_send_button_clicked(); // Обработка клика по кнопке отправки
    void on_login_button_clicked(); // Обработка клика по кнопке входа
    void on_login_signup_clicked(); // Обработка клика по кнопке регистрации на экране входа
    void on_signup_login_clicked(); // Обработка клика по кнопке входа на экране регистрации
    void on_signup_button_clicked(); // Обработка клика по кнопке регистрации
    void on_add_button_clicked(); // Обработка клика по кнопке добавления контакта
    void on_contact_button_clicked(); // Обработка клика по кнопке контакта
    void on_0_clicked();
    void on_1_clicked();
    void on_2_clicked();
    void on_3_clicked();
    void on_4_clicked();
    void on_smile_button_clicked();
    void on_smile_button_2_clicked();
    void on_smile_button_3_clicked();
    void on_smile_button_4_clicked();
    void on_smile_button_5_clicked();
    void on_smile_button_6_clicked();
    void on_smile_button_7_clicked();
    void on_login_true(); // Успешный вход
    void on_login_false(); // Неуспешный вход
    void on_login_duplicate(); // Дубликат входа
    void on_signup_true(); // Успешная регистрация
    void on_signup_false(); // Неуспешная регистрация
    void on_receive_message(QByteArray, QByteArray, QString); // Получение сообщения
    void on_update_log(QString); // Обновление лога
    void on_create_log(QByteArray, QByteArray); // Создание лога
    void on_contacts_itemSelectionChanged(); // Изменение выделения контактов
    void on_input_textChanged(); // Изменение текста ввода
    void on_actionLog_out_triggered(); // Триггер выхода из лога
    void auto_scroll(int, int); // Автоматическая прокрутка
    void on_add_line_textChanged(const QString &arg1); // Изменение текста добавления
    void on_add_contacts(QStringList); // Добавление контактов
    void on_contact_online(QByteArray); // Контакт онлайн
    void on_contact_offline(QByteArray); // Контакт офлайн
    void on_someone_disconnected(QByteArray); // Какой-то пользователь отключился
    void on_someone_connected(QByteArray); // Какой-то пользователь подключился
    void on_delete_contact(); // Удаление контакта
    void ShowContextMenu(const QPoint &pos); // Показ контекстного меню

private:
    void add_emoticon(QString); // Добавление смайла
    void color_notify(QByteArray); // Уведомление о цвете
    void keyPressEvent(QKeyEvent * e); // Обработка нажатия клавиши
    void clear_layout(QLayout*); // Очистка макета
    void format_output(QString, QString, QByteArray, QString); // Форматирование вывода
    void refresh_contacts(); // Обновление контактов
    void update_log_history(QByteArray, QByteArray, QString); // Обновление истории логов
    void save_contact(QString); // Сохранение контакта
    void load_log(QString contact); // Загрузка лога контакта
};

#endif
