#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    updateButtonState();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int value){
    money += value;
    ui->lcdNumber->display(money);
    updateButtonState();
}

void Widget::updateButtonState() {
    ui->pbCaffee->setEnabled(money >= 100);
    ui->pbMilk->setEnabled(money >= 150);
    ui->pbTee->setEnabled(money >= 200);
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_pbCaffee_clicked()
{
    changeMoney(-100);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-150);
}


void Widget::on_pbTee_clicked()
{
    changeMoney(-200);
}

CoinCounts Widget::calculateCoins() {
    CoinCounts counts;
    int remain = money;

    counts.coin500 = remain / 500;
    remain %= 500;

    counts.coin100 = remain / 100;
    remain %= 100;

    counts.coin50 = remain / 50;
    remain %= 50;

    counts.coin10 = remain / 10;

    return counts;
}
void Widget::on_pbReset_clicked()
{
    QMessageBox mb;

    CoinCounts counts = calculateCoins();

    QString msgText = QString("500원: %1개\n100원: %2개\n50원: %3개\n10원: %4개")
                      .arg(counts.coin500)
                      .arg(counts.coin100)
                      .arg(counts.coin50)
                      .arg(counts.coin10);

    mb.information(this, "Result", msgText);
    changeMoney(-money);
    Q_ASSERT(money == 0);
}

