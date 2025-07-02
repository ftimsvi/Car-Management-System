#include "UserBox.h"
#include "ui_UserBox.h"

UserBox::UserBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserBox)
{
    ui->setupUi(this);
}

UserBox::~UserBox()
{
    delete ui;
}

void UserBox::setUser(QString name)
{
    ui->label_3->setText(name);
    return;
}

void UserBox::setPass(QString name)
{
    ui->label_8->setText(name);
    return;
}

void UserBox::setPhone(QString name)
{
    ui->label_9->setText(name);
    return;
}

void UserBox::setName(QString name)
{
    ui->label_10->setText(name);
    return;
}

void UserBox::setLastName(QString name)
{
    ui->label_11->setText(name);
    return;
}

void UserBox::setAge(QString name)
{
    ui->label_12->setText(name);
    return;
}
