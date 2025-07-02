#include "RequestBox.h"
#include "ui_RequestBox.h"

RequestBox::RequestBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RequestBox)
{
    ui->setupUi(this);
}

RequestBox::~RequestBox()
{
    delete ui;
}

void RequestBox::setCarName(QString name)
{
    ui->label_14->setText(name);
    return;
}

void RequestBox::setName(QString name)
{
    ui->label_15->setText(name);
    return;
}

void RequestBox::setLastName(QString name)
{
    ui->label_16->setText(name);
    return;
}

void RequestBox::setPhone(QString phone)
{
    ui->label_17->setText(phone);
}
