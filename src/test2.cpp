#include "test2.h"
#include "ui_test2.h"

Test2::Test2(std::shared_ptr<Car> car, QPixmap pixmap, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Test2)
{
    ui->setupUi(this);

    car2= car;
    pix= pixmap;
    fileName[car2]= car->getName()+".txt";

    ui->pushButton_5->animateClick();
}


Test2::~Test2()
{
    delete ui;
}


void Test2::on_pushButton_5_clicked()
{
    //ui->scrollArea->setWidget(new CarInfo(car2, pix, this));
    ui->scrollArea->takeWidget();

    CarInfo* ci= new CarInfo(car2, pix, this);
    ui->scrollArea->setWidget(ci);
}


void Test2::on_pushButton_3_clicked()
{
    //ui->scrollArea->setWidget(new Comments());
    ui->scrollArea->takeWidget();

    Comments* co= new Comments(fileName[car2]);
    ui->scrollArea->setWidget(co);
}


void Test2::on_pushButton_2_clicked()
{
    ui->scrollArea->takeWidget();

    Request* re = new Request(car2);
    ui->scrollArea->setWidget(re);
}

