#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>

#include "ManagementPage.h"

namespace Ui {
class Management;
}

class Management : public QWidget
{
    Q_OBJECT

signals:
    void closeMain();

public:
    explicit Management(QWidget *parent = nullptr);
    ~Management();

public slots:
    void welcome();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Management *ui;
};

#endif // MANAGEMENT_H
