#ifndef REQUEST_H
#define REQUEST_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include "bmw.h"

namespace Ui {
class Request;
}

class Request : public QDialog
{
    Q_OBJECT

public:
    explicit Request(std::shared_ptr<Car> car, QWidget *parent = nullptr);
    ~Request();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Request *ui;
    std::shared_ptr<Car> car2;
};

#endif // REQUEST_H
