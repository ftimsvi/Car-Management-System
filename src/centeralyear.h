#ifndef CENTERALYEAR_H
#define CENTERALYEAR_H

#include <QWidget>

#include "test2.h"

namespace Ui {
class CenteralYear;
}

class CenteralYear : public QWidget
{
    Q_OBJECT

public:
    explicit CenteralYear(QWidget *parent = nullptr);
    ~CenteralYear();

    std::shared_ptr<BMW> read_from_file(QString name2);
    int check_existing(QString name2);

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::CenteralYear *ui;
};

#endif // CENTERALYEAR_H
