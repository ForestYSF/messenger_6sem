#include "client.h"
#include "..\common_includes\commands.h"
#include "..\common_includes\std.h"
#include <QDebug>
Client::Client(int id, QObject *parent) : QThread(parent)
{
    user_id = QByteArray::number(id);
}

void Client::run()
{
    socket = new QTcpSocket();

    if (!socket->setSocketDescriptor(user_id.toInt()))
    {
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(receive()), Qt::QueuedConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(on_disconnected()), Qt::QueuedConnection);

    QByteArray message = ID;
    message += ' ' + user_id;
    send_message(ID, user_id, message);

    exec();
}

void Client::receive()
{
    const QByteArray message = socket->readAll();

    qDebug() << "Received message from client:" << message;

    if (!id_confirm)
    {
        if (message == PASSWORD)
        {
            id_confirm = true;
            qDebug() << "Password received and confirmed";
        }
        else
        {
            qDebug() << "Invalid password received. Disconnecting client.";
            on_disconnected();
        }
    }
    else
    {
        emit receive_message(message);
    }
}

void Client::send_message(QByteArray mode, QByteArray value, QByteArray message)
{
    if (!finished)
    {
        lock();
        if (mode == ID)
        {
            socket->write(message);
            socket->flush();
        }
        else if (mode == VALIDATION)
        {
            if (this->user_id == value)
            {
                QTextStream stream(message);
                QByteArray message_code[2];

                stream >> message_code[0] >> message_code[1];

                if (message_code[1] == GOOD)
                    stream >> this->username;

                socket->write(message);
                socket->flush();
            }
        }
        else if (mode == USER || mode == ALL)
        {
            socket->write(message);
            socket->flush();
        }
    }

    unlock();
}

void Client::on_disconnected()
{
    lock();

    QByteArray message = EXIT;
    message += ' ';

    finished = true;
    message += user_id + ' ' + this->username;

    emit receive_message(message);

    socket->deleteLater();

    unlock();
    exit(0);
}

void Client::set_username(const QByteArray username)
{
    this->username = username;
}

QByteArray Client::get_id()
{
    return user_id;
}

QByteArray Client::get_username()
{
    return username;
}
