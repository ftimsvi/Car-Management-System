#include "carinfo.h"
#include "ui_carinfo.h"

CarInfo::CarInfo(std::shared_ptr<Car> car, QPixmap pixmap, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarInfo)
{
    ui->setupUi(this);

    ui->label_11->setPixmap(pixmap);
    ui->label_11->setMask(pixmap.mask());
    ui->label_11->setScaledContents(1);

    ui->label_2->setText(car->getBodycClass());
    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_6->setText(car->getEngineVolume());
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_8->setText(car->getEngineType());
    ui->label_8->setAlignment(Qt::AlignCenter);
    ui->label_9->setText(car->getCylinderNumber());
    ui->label_9->setAlignment(Qt::AlignCenter);
    ui->label_10->setText(car->getGearboxType());
    ui->label_10->setAlignment(Qt::AlignCenter);
    ui->label_16->setText(car->getMaxSpeed());
    ui->label_16->setAlignment(Qt::AlignCenter);
    ui->label_17->setText(car->getSpeed());
    ui->label_17->setAlignment(Qt::AlignCenter);
    ui->label_14->setText(car->getPrice());
    ui->label_18->setText(car->getBrand());
    ui->label_20->setText(car->getServicer());
    QPixmap brandpic(car->getBrandPic());
    ui->label_19->setPixmap(brandpic);
    QPixmap servicerpic(car->getServicerPic());
    ui->label_21->setPixmap(servicerpic);

}

CarInfo::~CarInfo()
{
    delete ui;
}

