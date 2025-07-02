#include "test.h"
#include "ui_test.h"

Test::Test(QString user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Test)
{
    ui->setupUi(this);

    username = user;

    this->setFixedSize(QSize(1520,800));
    //ui->label->resize(this->size());
    ui->radioButton_5->animateClick();
}

Test::~Test()
{
    delete ui;
}

void Test::on_action_4_triggered()
{
    MainWindow* exit = new MainWindow();
    Test::close();
    exit->show();
}


void Test::on_action_triggered()
{
    Profile* show_profile = new Profile(this->getUserName());
    show_profile->show();
}


QString Test::getUserName()
{
    return this->username;
}


void Test::on_radioButton_5_clicked()
{
    ui->scrollArea->takeWidget();
    ui->scrollArea->setWidget(new CenteralNew());
}


void Test::on_radioButton_clicked()
{
    ui->scrollArea->takeWidget();
    ui->scrollArea->setWidget(new CenteralYear());
}


void Test::on_radioButton_3_clicked()
{
    ui->scrollArea->takeWidget();
    ui->scrollArea->setWidget(new CenteralAudi());
}


void Test::on_radioButton_2_clicked()
{
    ui->scrollArea->takeWidget();
    ui->scrollArea->setWidget(new CenteralPorsche());
}


void Test::on_radioButton_4_clicked()
{
    ui->scrollArea->takeWidget();
    ui->scrollArea->setWidget(new CenteralMercedes());
}

