#ifndef FORGETPASS_H
#define FORGETPASS_H

#include <QDialog>
#include <QFile>

#include "Login.h"

namespace Ui {
class ForgetPass;
}

class ForgetPass : public QDialog
{
    Q_OBJECT

public:
    explicit ForgetPass(QWidget *parent = nullptr);
    ~ForgetPass();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ForgetPass *ui;
};

#endif // FORGETPASS_H
