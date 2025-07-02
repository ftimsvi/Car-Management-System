#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>

//#include "Mainwindow.h"
#include "test.h"
#include "ForgetPass.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

signals:
    void closeMain();

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    int check_usr_and_pass(QString user, QString pass, QString filename);

public slots:
    void welcome();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_3_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
