#include "management.h"
#include "ui_management.h"

Management::Management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Management)
{
    ui->setupUi(this);

    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    setWindowTitle("Management");
}

Management::~Management()
{
    delete ui;
}

void Management::on_pushButton_4_clicked()
{
    Management::close();
}


void Management::on_pushButton_3_clicked()
{
    if(ui->lineEdit_4->text() == "password" && ui->lineEdit_3->text() == "user")
    {
        welcome();
    }
    else
    {
        QMessageBox* incrt_pass = new QMessageBox();
        incrt_pass->setIcon(QMessageBox::Warning);
        incrt_pass->setWindowTitle("Problem in login");
        incrt_pass->setText("Invalid password!!");
        incrt_pass->setStandardButtons(QMessageBox::Ok);
        incrt_pass->show();
        connect(incrt_pass, &QMessageBox::buttonClicked, incrt_pass, &QMessageBox::deleteLater);
    }
}


void Management::welcome()
{
    ManagementPage* manage = new ManagementPage();
    Management::close();
    manage->show();
    emit closeMain();
}


void Management::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->lineEdit_4->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    }
}

