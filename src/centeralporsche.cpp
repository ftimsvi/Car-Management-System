#include "centeralporsche.h"
#include "ui_centeralporsche.h"

CenteralPorsche::CenteralPorsche(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenteralPorsche)
{
    ui->setupUi(this);
}

CenteralPorsche::~CenteralPorsche()
{
    delete ui;
}


void CenteralPorsche::on_pushButton_13_clicked()
{
    int n;
    n=check_existing("Porsche Macan 2.0T");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Porsche Macan 2.0T" << '\n' << "229" << '\n' << "6.7" << '\n' << "کروک" << '\n' << "1984 cc" << '\n';
            stream << "بنزین دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک دو کلاچه" << '\n' << "8,560,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Porsche Macan 2.0T"));

    QPixmap pixmap("picture/Porsche Macan 2.0T2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralPorsche::on_pushButton_14_clicked()
{
    int n;
    n=check_existing("Porsche Boxter 718 s");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Porsche Boxter 718 s" << '\n' << "285" << '\n' << "4.4" << '\n' << "کروک" << '\n' << "2497 cc" << '\n';
            stream << "بنزین دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک دو کلاچه" << '\n' << "5,560,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Porsche Boxter 718 s"));

    QPixmap pixmap("picture/Porsche Boxter 718 s3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralPorsche::on_pushButton_15_clicked()
{
    int n;
    n=check_existing("Porsche Panamera Turbo");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Porsche Panamera Turbo" << '\n' << "306" << '\n' << "4" << '\n' << "سدان" << '\n' << "4806 cc" << '\n';
            stream << "بنزین سوز" << '\n' << "8" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "5,000,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Porsche Panamera Turbo"));

    QPixmap pixmap("picture/Porsche Panamera Turbo.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralPorsche::on_pushButton_16_clicked()
{
    int n;
    n=check_existing("Porsche Cayenne V6");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Porsche Cayenne V6" << '\n' << "230" << '\n' << "8" << '\n' << "شاسی بلند" << '\n' << "3598 cc" << '\n';
            stream << "بنزین سوز" << '\n' << "6" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "3,000,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Porsche Cayenne V6"));

    QPixmap pixmap("picture/Porsche Cayenne V6.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


std::shared_ptr<Car> CenteralPorsche::read_from_file(QString name2)
{
    QString filename = "Car.txt";
    QFile file(filename);

    std::shared_ptr<Car> car(new Porsche());

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        while (!stream.atEnd())
        {
            if(stream.readLine() == name2)
            {
                car->setName(name2);
                car->setMaxSpeed(stream.readLine());
                car->setSpeed(stream.readLine());
                car->setBodyClass(stream.readLine());
                car->setEngineVolume(stream.readLine());
                car->setEngineType(stream.readLine());
                car->setCylindeNumber(stream.readLine());
                car->setGreaboxType(stream.readLine());
                car->setPrice(stream.readLine());
                car->setNumber((stream.readLine()).split(" ")[0].toInt());
                break;
            }
            else
            {
                for(int i=0; i<9; i++)
                {
                    stream.readLine();
                }
            }
        }
    }
    file.close();
    return car;
}


int CenteralPorsche::check_existing(QString name2)
{
    QString filename = "Car.txt";
    QFile file(filename);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        while (!stream.atEnd())
        {
            if(stream.readLine() == name2)
            {
                file.close();
                return 1;
            }
            else
            {
                for(int i=0; i<9; i++)
                {
                    stream.readLine();
                }
            }
        }
    }
    file.close();
    return 0;
}

