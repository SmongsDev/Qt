#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // socket_.readyRead();
    QObject::connect(&socket_, &QAbstractSocket::connected, this, &Widget::doConnected);
    QObject::connect(&socket_, &QAbstractSocket::disconnected, this, &Widget::doDisconnected);
    QObject::connect(&socket_, &QIODevice::readyRead, this, &Widget::doReadyRead);
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

void Widget::doReadyRead()
{
    ui->pteMessage->insertPlainText(socket_.readAll());
}

void Widget::on_pbConnect_clicked()
{
    QString host = ui->leHost->text();
    ushort port = ui->lePort->text().toUShort();

    if (ui->rbTCP->isChecked())
    {
        socket_.connectToHost(host, port);
    }
    else if(ui->rbSSL->isChecked())
    {
        socket_.connectToHostEncrypted(host, port);
    }
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


void Widget::on_rbTCP_clicked()
{
    ui->lePort->setText("80");
}


void Widget::on_rbSSL_clicked()
{
    ui->lePort->setText("443");
}

