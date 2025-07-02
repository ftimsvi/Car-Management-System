#include "Login.h"
#include "ui_Login.h"

#include <QTimer>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    setWindowTitle("Login");

    ui->pushButton_3->setFlat(1);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString user = ui->lineEdit->text();
    QString pass = ui->lineEdit_2->text();

    QString filename = "Data.txt";
    int ans = check_usr_and_pass(user, pass, filename);
    if(ans==0)
    {
        QMessageBox* incrt_pasorusr = new QMessageBox();
        incrt_pasorusr->setIcon(QMessageBox::Warning);
        incrt_pasorusr->setWindowTitle("Problem in login");
        incrt_pasorusr->setText("Invalid username or password!!");
        incrt_pasorusr->setStandardButtons(QMessageBox::Ok);
        incrt_pasorusr->show();
        connect(incrt_pasorusr, &QMessageBox::buttonClicked, incrt_pasorusr, &QMessageBox::deleteLater);
    }
    else
    {
        QPixmap pic("picture/login4.png");
        ui->label_3->setPixmap(pic);
        QTimer timer;
        timer.singleShot(3000, this, &Login::welcome);
        //welcome();
    }
}

void Login::on_pushButton_2_clicked()
{
    Login::close();
}

int Login::check_usr_and_pass(QString user, QString pass, QString filename)
{
    QFile file(filename);
    QString user2;
    QString pass2;
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
                    pass2 = stream.readLine();
                    int y = QString::compare(pass, pass2, Qt::CaseInsensitive);
                    if(y==0)
                    {
                        file.close();
                        return 1;
                    }
                }
            }
            else
                user2 = stream.readLine();
            i+=1;
        }
    }
    file.close();
    return 0;
}

void Login::welcome()
{
    Test* tst = new Test(ui->lineEdit->text());
    Login::close();
    //MainWindow a;
    //a.closeMainWindow();
    tst->show();
    emit closeMain();
}

void Login::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
}


void Login::on_pushButton_3_clicked()
{
    Login::close();
    ForgetPass* forget = new ForgetPass();
    forget->show();
}

