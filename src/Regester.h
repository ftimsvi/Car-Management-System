#ifndef REGESTER_H
#define REGESTER_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QLabel>

namespace Ui {
class Regester;
}

class Regester : public QWidget
{
    Q_OBJECT

public:
    explicit Regester(QWidget *parent = nullptr);
    ~Regester();

    int check_user(QString filename, QString user);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Regester *ui;
};

#endif // REGESTER_H
