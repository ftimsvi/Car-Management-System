#include "centeralyear.h"
#include "ui_centeralyear.h"

CenteralYear::CenteralYear(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenteralYear)
{
    ui->setupUi(this);
}

CenteralYear::~CenteralYear()
{
    delete ui;
}

void CenteralYear::on_pushButton_5_clicked()
{
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

     std::shared_ptr<BMW> car(read_from_file("BMW 630i Cabriolet"));

     QPixmap pixmap("picture/BMW 630i Cabriolet2.jpg");
     Test2* a = new Test2(car, pixmap, this);
     a->show();
}


void CenteralYear::on_pushButton_8_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW X1 Xdrive20i"));

    QPixmap pixmap("picture/BMW X1 Xdrive20i2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralYear::on_pushButton_7_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW 320i"));

    QPixmap pixmap("picture/BMW 320i3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralYear::on_pushButton_4_clicked()
{
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

     std::shared_ptr<BMW> car(read_from_file("BMW Z4 Sdrive18i"));

     QPixmap pixmap("picture/BMW Z4 Sdrive18i3.jpg");
     Test2* a = new Test2(car, pixmap, this);
     a->show();
}


void CenteralYear::on_pushButton_6_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW 528i"));

    QPixmap pixmap("picture/BMW 528i3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralYear::on_pushButton_9_clicked()
{
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

     std::shared_ptr<BMW> car(read_from_file("BMW 650i GranCoupe"));

     QPixmap pixmap("picture/BMW 650i GranCoupe.jpg");
     Test2* a = new Test2(car, pixmap, this);
     a->show();
}


void CenteralYear::on_pushButton_10_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW X4 Xdrive28i"));

    QPixmap pixmap("picture/BMW X4 Xdrive28i2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralYear::on_pushButton_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW i8 Coupe"));

    QPixmap pixmap("picture/BMW i8 Coupe2.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralYear::on_pushButton_19_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW 730li"));

    QPixmap pixmap("picture/BMW 730li3.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


void CenteralYear::on_pushButton_20_clicked()
{
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

    std::shared_ptr<BMW> car(read_from_file("BMW 5-Series 530i"));

    QPixmap pixmap("picture/BMW 5-Series 530i.jpg");
    Test2* a = new Test2(car, pixmap, this);
    a->show();
}


std::shared_ptr<BMW> CenteralYear::read_from_file(QString name2)
{
    QString filename = "Car.txt";
    QFile file(filename);

    std::shared_ptr<BMW> car(new BMW());

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


int CenteralYear::check_existing(QString name2)
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

