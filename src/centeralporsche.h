#ifndef CENTERALPORSCHE_H
#define CENTERALPORSCHE_H

#include <QWidget>
#include <QFile>

#include "Porsche.h"
#include "test2.h"

namespace Ui {
class CenteralPorsche;
}

class CenteralPorsche : public QWidget
{
    Q_OBJECT

public:
    explicit CenteralPorsche(QWidget *parent = nullptr);
    ~CenteralPorsche();

    std::shared_ptr<Car> read_from_file(QString name2);
    int check_existing(QString name2);

private slots:
    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

private:
    Ui::CenteralPorsche *ui;
};

#endif // CENTERALPORSCHE_H
