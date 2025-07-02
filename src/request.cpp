#include "request.h"
#include "ui_request.h"

Request::Request(std::shared_ptr<Car> car, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Request)
{
    ui->setupUi(this);

    car2 = car;
}

Request::~Request()
{
    delete ui;
}

void Request::on_pushButton_clicked()
{
    QString filename = "Requsest.txt";
    QFile file(filename);

    if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);

        stream << car2->getName() << '\n' << ui->lineEdit->text() << '\n' << ui->lineEdit_2->text() << '\n';
        stream << ui->lineEdit_3->text();

        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();

        QMessageBox* td = new QMessageBox(QMessageBox::Information, "Request accepted", "درخواست شما با موفقیت ثبت شد.\n", QMessageBox::Ok, this);
        td->setStyleSheet("background-color: rgb(225, 225, 255);");
        td->show();
    }
    file.close();
}

