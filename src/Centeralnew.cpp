#include "Centeralnew.h"
#include "ui_Centeralnew.h"

int q=0;

CenteralNew::CenteralNew(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenteralNew)
{
    ui->setupUi(this);
}

CenteralNew::~CenteralNew()
{
    delete ui;
}

void CenteralNew::on_pushButton_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW i8 Coupe");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW i8 Coupe" << '\n' << "250" << '\n' << "4.4" << '\n' << "کوپه" << '\n' << "1499 cc" << '\n';
            stream << "هیبرید" << '\n' << "3" << '\n' << "اتوماتیک" << '\n' << "10,200,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW i8 Coupe"));

    QPixmap pixmap("picture/BMW i8 Coupe2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_2_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW 730li");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW 730li" << '\n' << "250" << '\n' << "6.1" << '\n' << "سدان" << '\n' << "1998 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "9,000,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW 730li"));

    QPixmap pixmap("picture/BMW 730li3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_3_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW 5-Series 530i");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW 5-Series 530i" << '\n' << "250" << '\n' << "6.2" << '\n' << "سدان" << '\n' << "1998 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "6,600,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW 5-Series 530i"));

    QPixmap pixmap("picture/BMW 5-Series 530i.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_10_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW X4 Xdrive28i");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW X4 Xdrive28i" << '\n' << "232" << '\n' << "6.2" << '\n' << "شاسی بلند" << '\n' << "1997 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "5,700,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW X4 Xdrive28i"));

    QPixmap pixmap("picture/BMW X4 Xdrive28i2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_4_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW Z4 Sdrive18i");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW Z4 Sdrive18i" << '\n' << "220" << '\n' << "8" << '\n' << "کروک" << '\n' << "1997 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "4,600,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

     std::shared_ptr<Car> car(read_from_file("BMW Z4 Sdrive18i"));

     QPixmap pixmap("picture/BMW Z4 Sdrive18i3.jpg");
     Test2* a = new Test2(car, pixmap, this);
     a->show();
}


void CenteralNew::on_pushButton_9_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW 650i GranCoupe");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW 650i GranCoupe" << '\n' << "250" << '\n' << "5" << '\n' << "سدان" << '\n' << "4395 cc" << '\n';
            stream << "بنزین سوز" << '\n' << "8" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "4,600,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

     std::shared_ptr<Car> car(read_from_file("BMW 650i GranCoupe"));

     QPixmap pixmap("picture/BMW 650i GranCoupe.jpg");
     Test2* a = new Test2(car, pixmap, this);
     a->show();
}


void CenteralNew::on_pushButton_5_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW 630i Cabriolet");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW 630i Cabriolet" << '\n' << "250" << '\n' << "7" << '\n' << "کروک" << '\n' << "2996 cc" << '\n';
            stream << "بنزین سوز" << '\n' << "6" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "4,000,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

     std::shared_ptr<Car> car(read_from_file("BMW 630i Cabriolet"));

     QPixmap pixmap("picture/BMW 630i Cabriolet2.jpg");
     Test2* a = new Test2(car, pixmap, this);
     a->show();
}


void CenteralNew::on_pushButton_8_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW X1 Xdrive20i");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW X1 Xdrive20i" << '\n' << "215" << '\n' << "8" << '\n' << "شاسی بلند" << '\n' << "1997 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "3,600,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW X1 Xdrive20i"));

    QPixmap pixmap("picture/BMW X1 Xdrive20i2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_6_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW 528i");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW 528i" << '\n' << "249" << '\n' << "6" << '\n' << "سدان" << '\n' << "1997 cc" << '\n';
            stream << "بنزینی دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "3,500,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW 528i"));

    QPixmap pixmap("picture/BMW 528i3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_7_clicked()
{
    q=1;

    int n;
    n=check_existing("BMW 320i");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "BMW 320i" << '\n' << "235" << '\n' << "7.3" << '\n' << "سدان" << '\n' << "1997 cc" << '\n';
            stream << "بنزین سوز" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "3,000,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("BMW 320i"));

    QPixmap pixmap("picture/BMW 320i3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_11_clicked()
{
    q=2;

    int n;
    n=check_existing("Audi Q5 2.0 Quattro");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Audi Q5 2.0 Quattro" << '\n' << "228" << '\n' << "6.9" << '\n' << "کراس اور" << '\n' << "1984 cc" << '\n';
            stream << "بنزین دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "295,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Audi Q5 2.0 Quattro"));

    QPixmap pixmap("picture/Audi Q5 2.0 Quattro2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_12_clicked()
{
    q=2;

    int n;
    n=check_existing("Audi TT 2.0TFSI");
    if(n==0)
    {
        QString filename = "Car.txt";
        QFile file(filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << "Audi TT 2.0TFSI" << '\n' << "240" << '\n' << "6" << '\n' << "کروک" << '\n' << "1984 cc" << '\n';
            stream << "بنزین دارای توربو" << '\n' << "4" << '\n' << "اتوماتیک تیپ ترونیک" << '\n' << "300,000,000" << '\n' << "3" << '\n';
        }
        file.close();
     }

    std::shared_ptr<Car> car(read_from_file("Audi TT 2.0TFSI"));

    QPixmap pixmap("picture/Audi TT 2.0TFSI2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralNew::on_pushButton_13_clicked()
{
    q=3;

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


void CenteralNew::on_pushButton_14_clicked()
{
    q=3;

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


void CenteralNew::on_pushButton_15_clicked()
{
    q=3;

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


void CenteralNew::on_pushButton_16_clicked()
{
    q=3;

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


void CenteralNew::on_pushButton_17_clicked()
{
    q=4;

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


void CenteralNew::on_pushButton_18_clicked()
{
    q=4;

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


void CenteralNew::on_pushButton_19_clicked()
{
    q=4;

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


void CenteralNew::on_pushButton_20_clicked()
{
    q=4;

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


std::shared_ptr<Car> CenteralNew::read_from_file(QString name2)
{
    QString filename = "Car.txt";
    QFile file(filename);

    std::shared_ptr<Car> car;

    if(q==1)
    {
        std::shared_ptr<Car> car2(new BMW());
        car=car2;
    }
    else if(q==2)
    {
        std::shared_ptr<Car> car2(new Audi());
        car=car2;
    }
    else if(q==3)
    {
        std::shared_ptr<Car> car2(new Porsche());
        car=car2;
    }
    else if(q==4)
    {
        std::shared_ptr<Car> car2(new Mercedes());
        car=car2;
    }

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


int CenteralNew::check_existing(QString name2)
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

