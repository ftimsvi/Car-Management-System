#include "centeralaudi.h"
#include "ui_centeralaudi.h"

CenteralAudi::CenteralAudi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CenteralAudi)
{
    ui->setupUi(this);
}

CenteralAudi::~CenteralAudi()
{
    delete ui;
}

void CenteralAudi::on_pushButton_clicked()
{
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


void CenteralAudi::on_pushButton_12_clicked()
{
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


std::shared_ptr<Car> CenteralAudi::read_from_file(QString name2)
{
    QString filename = "Car.txt";
    QFile file(filename);

    std::shared_ptr<Car> car(new Audi());

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


int CenteralAudi::check_existing(QString name2)
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

