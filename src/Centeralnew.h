#ifndef CENTERALNEW_H
#define CENTERALNEW_H

#include <QWidget>
#include <QFile>

#include "test2.h"
#include "Car.h"
#include "Audi.h"
#include "Porsche.h"
#include "Mercedes.h"

namespace Ui {
class CenteralNew;
}

class CenteralNew : public QWidget
{
    Q_OBJECT

public:
    explicit CenteralNew(QWidget *parent = nullptr);
    ~CenteralNew();

    std::shared_ptr<Car> read_from_file(QString name2);
    int check_existing(QString name2);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

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
    Ui::CenteralNew *ui;
};

#endif // CENTERALNEW_H
