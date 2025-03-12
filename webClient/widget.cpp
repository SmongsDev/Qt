#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // socket_.connected();
    QObject::connect(&socket_, &QAbstractSocket::connected, this, &Widget::doConnected);
    QObject::disconnect(&socket_, &QAbstractSocket::disconnected, this, &Widget::doDisconnected);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::doConnected()
{
    ui->pteMessage->insertPlainText("Connected!");
}

void Widget::doDisconnected()
{
    ui->pteMessage->insertPlainText("Disconnected!");
}

void Widget::on_pbConnect_clicked()
{
    socket_.connectToHost(ui->leHost->text(), ui->lePort->text().toUShort());
}


void Widget::on_pbDisconnect_clicked()
{
    socket_.disconnectFromHost();
}


void Widget::on_pbClear_clicked()
{
    ui->pteMessage->clear();
}


void Widget::on_pbSend_clicked()
{
    socket_.write(ui->pteSend->toPlainText().toUtf8());
}

