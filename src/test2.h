#ifndef TEST2_H
#define TEST2_H

#include <QDialog>

#include "bmw.h"
#include "carinfo.h"
#include "comments.h"
#include "request.h"

namespace Ui {
class Test2;
}

class Test2 : public QDialog
{
    Q_OBJECT

private:
    std::shared_ptr<Car> car2;
    QPixmap pix;
    QMap<std::shared_ptr<Car>, QString> fileName;

public:
    explicit Test2(std::shared_ptr<Car> car, QPixmap pixmap, QWidget *parent = nullptr);
    ~Test2();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Test2 *ui;
};

#endif // TEST2_H
