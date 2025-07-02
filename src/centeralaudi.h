#ifndef CENTERALAUDI_H
#define CENTERALAUDI_H

#include <QWidget>
#include <QFile>

#include "Audi.h"
#include "test2.h"

namespace Ui {
class CenteralAudi;
}

class CenteralAudi : public QWidget
{
    Q_OBJECT

public:
    explicit CenteralAudi(QWidget *parent = nullptr);
    ~CenteralAudi();

    std::shared_ptr<Car> read_from_file(QString name2);
    int check_existing(QString name2);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::CenteralAudi *ui;
};

#endif // CENTERALAUDI_H
