#ifndef USER_H
#define USER_H

#include <QByteArray>
#include <QVector>

class User
{
public:
    User();  // Конструктор пользователя

private:
    QByteArray username, user_id, password;  // Логин, ID пользователя и пароль
    QVector<QByteArray> current_contacts;  // Вектор текущих контактов пользователя

public:
    void add_contact(QByteArray);  // Добавление контакта в список текущих контактов
    void remove_contact(QByteArray);  // Удаление контакта из списка текущих контактов
    bool find_contact(QByteArray);  // Поиск контакта в списке текущих контактов
    void clear_contacts();  // Очистка списка текущих контактов
    void set_user_id(QByteArray);  // Установка ID пользователя
    void set_username(QByteArray);  // Установка логина пользователя
    void set_password(QByteArray);  // Установка пароля пользователя
    QByteArray get_username();  // Получение логина пользователя
    QByteArray get_user_id();  // Получение ID пользователя
    QByteArray get_password();  // Получение пароля пользователя
};

#endif
