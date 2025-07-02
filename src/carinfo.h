#ifndef CARINFO_H
#define CARINFO_H

#include <QDialog>

#include "bmw.h"

namespace Ui {
class CarInfo;
}

class CarInfo : public QDialog
{
    Q_OBJECT

public:
    explicit CarInfo(std::shared_ptr<Car> car, QPixmap pixmap, QWidget *parent= nullptr);
    ~CarInfo();

private:
    Ui::CarInfo *ui;
};

#endif // CARINFO_H
