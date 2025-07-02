#include "ForgetPass.h"
#include "ui_ForgetPass.h"

ForgetPass::ForgetPass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgetPass)
{
    ui->setupUi(this);

    ui->lineEdit_3->setPlaceholderText("your password is : ");

    ui->pushButton_2->setFlat(1);
}

ForgetPass::~ForgetPass()
{
    delete ui;
}

void ForgetPass::on_pushButton_clicked()
{
    QString user = ui->lineEdit->text();
    QString phone = ui->lineEdit_2->text();
    QString user2;

    QString filename = "Data.txt";
    QFile file(filename);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        int i=0;
        while (!stream.atEnd())
        {
            if(i%6 == 0)
            {
                user2 = stream.readLine();
                int x = QString::compare(user, user2, Qt::CaseInsensitive);
                if(x==0)
                {
                    QString pass = stream.readLine();
                    QString phone2 = stream.readLine();
                    int y = QString::compare(phone, phone2, Qt::CaseInsensitive);
                    if(y==0)
                    {
                        ui->lineEdit_3->setText(pass);
                    }
                }
            }
            else
                user2 = stream.readLine();
            i+=1;
        }
    }
}


void ForgetPass::on_pushButton_2_clicked()
{
    ForgetPass::close();
    Login* newlogin = new Login();
    newlogin->show();
}

