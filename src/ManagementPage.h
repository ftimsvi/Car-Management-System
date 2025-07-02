#ifndef MANAGEMENTPAGE_H
#define MANAGEMENTPAGE_H

#include <QMainWindow>

#include "Mainwindow.h"
#include "RequestBox.h"
#include "UserBox.h"

namespace Ui {
class ManagementPage;
}

class ManagementPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagementPage(QWidget *parent = nullptr);
    ~ManagementPage();

    void replace(QString name, QString price);

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::ManagementPage *ui;
};

#endif // MANAGEMENTPAGE_H
