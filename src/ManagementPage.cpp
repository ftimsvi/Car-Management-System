#include "ManagementPage.h"
#include "ui_ManagementPage.h"


ManagementPage::ManagementPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagementPage)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("قیمت را وارد کنید(تومان)");

    ui->listWidget->setFlow(QListView::TopToBottom);
    ui->listWidget->setGridSize(QSize(375, 140));
    ui->listWidget->setResizeMode(QListView::Adjust);
    ui->listWidget->setViewMode(QListView::ListMode);
    ui->listWidget->setWrapping(false);

    QString filename = "Requsest.txt";
    QFile file(filename);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        while (!stream.atEnd())
        {
            auto    item = new QListWidgetItem("", ui->listWidget);
            RequestBox* box = new RequestBox();
            box->setCarName(stream.readLine());
            box->setName(stream.readLine());
            box->setLastName(stream.readLine());
            box->setPhone(stream.readLine());
            box->setMinimumSize(400,133);
            ui->listWidget->setItemWidget(item, box);
        }
    }
    file.close();


    ui->listWidget_2->setFlow(QListView::TopToBottom);
    ui->listWidget_2->setGridSize(QSize(390, 220));
    ui->listWidget_2->setResizeMode(QListView::Adjust);
    ui->listWidget_2->setViewMode(QListView::ListMode);
    ui->listWidget_2->setWrapping(false);

    QString filename2 = "Data.txt";
    QFile file2(filename2);
    if(file2.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file2);

        while (!stream.atEnd())
        {
            auto item2 = new QListWidgetItem("", ui->listWidget_2);
            UserBox* box = new UserBox();
            box->setUser(stream.readLine());
            box->setPass(stream.readLine());
            box->setPhone(stream.readLine());
            box->setName(stream.readLine());
            box->setLastName(stream.readLine());
            box->setAge(stream.readLine());
            box->setMinimumSize(390,220);
            ui->listWidget_2->setItemWidget(item2, box);
        }
    }
    file.close();
}

ManagementPage::~ManagementPage()
{
    delete ui;
}

void ManagementPage::replace(QString name, QString price)
{
    QString name1;
    QString filename = "Car.txt";
    QFile file(filename);
    QFile file2("car2.txt");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text) && file2.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QTextStream out(&file2);

        while (!in.atEnd())
        {
            name1= in.readLine();
            out << name1 << '\n';
            if(name==name1)
            {
                for(int i=1; i<8; i++)
                {
                    out << in.readLine() << '\n';
                }
                out << price << '\n';
                in.readLine();
                out << in.readLine() << '\n';
            }
            else
            {
                for(int i=1; i<10; i++)
                {
                    out << in.readLine() << '\n';
                }
            }
        }
    }
    file.close();

    ui->lineEdit->clear();
    file.remove();
    file2.rename("Car.txt");
}

void ManagementPage::on_action_triggered()
{
    MainWindow* exit = new MainWindow();
    ManagementPage::close();
    exit->show();
}


void ManagementPage::on_pushButton_clicked()
{
    replace("BMW i8 Coupe", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_2_clicked()
{
    replace("BMW 730li", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_3_clicked()
{
    replace("BMW 5-Series-530i", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_4_clicked()
{
    replace("BMW X4 Xdrive28i", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_5_clicked()
{
    replace("BMW Z4 Sdrive 18i", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_6_clicked()
{
    replace("BMW 650i GranCoupe", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_7_clicked()
{
    replace("BMW 630i Cabriolet", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_8_clicked()
{
    replace("BMW X1 Xdrive20i", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_9_clicked()
{
    replace("BMW 528i", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_10_clicked()
{
    replace("BMW 320i", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_11_clicked()
{
    replace("Audi Q5 2.0 Quattro", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_12_clicked()
{
    replace("Audi TT 2.0TFSI", ui->lineEdit->text());
}

void ManagementPage::on_pushButton_13_clicked()
{
    replace("Porsche Macan 2.0T ", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_14_clicked()
{
    replace("Porsche Boxter 718 s ", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_15_clicked()
{
    replace("Porsche Panamera Turbo", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_16_clicked()
{
    replace("Porsche Cayenne V6", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_17_clicked()
{
    replace("Mercedes Benz AMG GT Coupe", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_18_clicked()
{
    replace("Mercedes Benz SLK350", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_19_clicked()
{
    replace("Mercedes Benz S500 Coupe", ui->lineEdit->text());
}


void ManagementPage::on_pushButton_20_clicked()
{
    replace("Mercedes Benz AMG S63 Coupe", ui->lineEdit->text());
}

