#include "centeralmercedes.h"
#include "ui_centeralmercedes.h"

CenteralMercedes::CenteralMercedes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenteralMercedes)
{
    ui->setupUi(this);
}

CenteralMercedes::~CenteralMercedes()
{
    delete ui;
}

void CenteralMercedes::on_pushButton_17_clicked()
{
    int n;
    n=check_existing("Mercedes Benz AMG GT Coupe");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Mercedes Benz AMG GT Coupe" << '\n' << "302" << '\n' << "4" << '\n' << "کوپه" << '\n' << "3982 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "8" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "1,358,175,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Mercedes Benz AMG GT Coupe"));

    QPixmap pixmap("picture/Mercedes Benz AMG GT Coupe.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralMercedes::on_pushButton_18_clicked()
{
    int n;
    n=check_existing("Mercedes Benz SLS AMG coupe");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Mercedes Benz SLS AMG coupe" << '\n' << "317" << '\n' << "3.8" << '\n' << "کوپه" << '\n' << "6208 cc" << '\n';
            stream << "بنزین سوز" << '\n' << "8" << '\n' << "اتوماتیک دو کلاچه" << '\n' << "1,253,700,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Mercedes Benz SLS AMG coupe"));

    QPixmap pixmap("picture/Mercedes Benz SLS AMG coupe3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralMercedes::on_pushButton_19_clicked()
{
    int n;
    n=check_existing("Mercedes Benz S500 Coupe");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Mercedes Benz S500 Coupe" << '\n' << "250" << '\n' << "4.6" << '\n' << "کوپه" << '\n' << "4663 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "8" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "626,850,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Mercedes Benz S500 Coupe"));

    QPixmap pixmap("picture/Mercedes Benz S500 Coupe2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralMercedes::on_pushButton_20_clicked()
{
    int n;
    n=check_existing("Mercedes Benz AMG S63 Coupe");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Mercedes Benz AMG S63 Coupe" << '\n' << "250" << '\n' << "4.2" << '\n' << "کوپه" << '\n' << "5461 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "8" << '\n' << "اتوماتیک دو کلاچه" << '\n' << "723,384,900" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Mercedes Benz AMG S63 Coupe"));

    QPixmap pixmap("picture/Mercedes Benz AMG S63 Coupe2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


std::shared_ptr<Car> CenteralMercedes::read_from_file(QString name2)
{
    QString filename = "Car.txt";
    QFile file(filename);

    std::shared_ptr<Car> car(new Mercedes());

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


int CenteralMercedes::check_existing(QString name2)
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

