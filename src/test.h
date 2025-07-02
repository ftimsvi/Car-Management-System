#ifndef TEST_H
#define TEST_H

#include <QMainWindow>

#include "Mainwindow.h"
#include "Centeralnew.h"
#include "centeralyear.h"
#include "profile.h"
#include "centeralaudi.h"
#include "centeralporsche.h"
#include "centeralmercedes.h"

namespace Ui {
class Test;
}

class Test : public QMainWindow
{
    Q_OBJECT

public:
    explicit Test(QString user, QWidget *parent = nullptr);
    ~Test();
    QString getUserName();

private slots:
    void on_action_4_triggered();

    void on_action_triggered();

    void on_radioButton_5_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::Test *ui;
    QString username;
};

#endif // TEST_H
