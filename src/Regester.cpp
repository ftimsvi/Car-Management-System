#include "Regester.h"
#include "ui_Regester.h"

Regester::Regester(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Regester)
{
    ui->setupUi(this);

    setWindowTitle("Register");
}

Regester::~Regester()
{
    delete ui;
}

void Regester::on_pushButton_clicked()
{
    int age = ui->spinBox->value();
    if(age < 18)
    {
        QMessageBox* under_age = new QMessageBox(QMessageBox::Warning, "Age Warnning", "Im sorry, but you are not allowed to regester:((", QMessageBox::Ok, this);
        under_age->setDefaultButton(QMessageBox::Ok);
        under_age->show();
        connect(under_age, &QMessageBox::buttonClicked, under_age, &QMessageBox::deleteLater);
    }
    else
    {
        if(ui->lineEdit_6->text().length() < 8)
        {
            ui->lineEdit_6->setStyleSheet("QLineEdit#lineEdit_6{border-color:rgb(255, 0, 0)}");
            ui->label_8->setStyleSheet("QLabel#label_8{color:rgb(255, 0, 0)}");
            ui->label_8->setText("Password is too short!!");
        }
        else
        {
            QString name = ui->lineEdit->text();
            QString family = ui->lineEdit_2->text();
            QString phone = ui->lineEdit_3->text();
            QString user = ui->lineEdit_5->text();
            QString pass = ui->lineEdit_6->text();
            int age = ui->spinBox->value();

            QString filename = "Data.txt";
            QFile file(filename);
            if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            {
                QTextStream stream(&file);
                int ans = check_user(filename, user);
                if(ans==1)
                {
                    stream << user << '\n' << pass << '\n' << phone << '\n' << name << '\n' << family << '\n' << age << '\n';
                    Regester::close();

                    QMessageBox* congratulations = new QMessageBox();
                    congratulations->setStyleSheet("QMessageBox#congratulations{color:rgb(225, 225, 225)}");
                    congratulations->setIcon(QMessageBox::Information);
                    congratulations->setWindowTitle("congratulations");
                    congratulations->setText("Your registration was successful");
                    congratulations->setStandardButtons(QMessageBox::Ok);
                    congratulations->setDefaultButton(QMessageBox::Ok);
                    congratulations->show();
                    connect(congratulations, &QMessageBox::buttonClicked, congratulations, &QMessageBox::deleteLater);
                }
                else
                {
                    QMessageBox* dplct_user = new QMessageBox();
                    dplct_user->setIcon(QMessageBox::Warning);
                    dplct_user->setWindowTitle("Duplicate password");
                    dplct_user->setText("Sorry, this username has already been selected");
                    dplct_user->setStandardButtons(QMessageBox::Ok);
                    dplct_user->show();
                    connect(dplct_user, &QMessageBox::buttonClicked, dplct_user, &QMessageBox::deleteLater);
                }
            }
            file.close();
        }
    }
}

void Regester::on_pushButton_2_clicked()
{
    Regester::close();
}

int Regester::check_user(QString filename, QString user)
{
    QFile file(filename);
    QString user2;
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
                    file.close();
                    return 0;
                }
            }
            else
                user2 = stream.readLine();
            i+=1;
        }
    }
    file.close();
    return 1;
}

