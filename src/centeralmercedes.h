#ifndef CENTERALMERCEDES_H
#define CENTERALMERCEDES_H

#include <QWidget>
#include <QFile>

#include "Mercedes.h"
#include "test2.h"

namespace Ui {
class CenteralMercedes;
}

class CenteralMercedes : public QWidget
{
    Q_OBJECT

public:
    explicit CenteralMercedes(QWidget *parent = nullptr);
    ~CenteralMercedes();

    std::shared_ptr<Car> read_from_file(QString name2);
    int check_existing(QString name2);

private slots:
    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::CenteralMercedes *ui;
};

#endif // CENTERALMERCEDES_H
