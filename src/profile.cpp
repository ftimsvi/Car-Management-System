#include "profile.h"
#include "ui_profile.h"

#include "QPainter"
#include "QPainterPath"

Profile::Profile(QString user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);

    QString filename = "Data.txt";
    QFile file(filename);
    QString user2;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        int i=0;
        while (!stream.atEnd())
        {
            if(i%6 == 0)
            {
                user2 = stream.readLine();
                int x = QString::compare(user, user2, Qt::CaseInsensitive);
                if(x==0)
                {
                    ui->label_11->setText(user2);
                    user2 = stream.readLine();
                    ui->label_13->setText(user2);
                    i+=1;
                    user2 = stream.readLine();
                    ui->label_7->setText(user2);
                    i+=1;
                    user2 = stream.readLine();
                    ui->label_3->setText(user2);
                    i+=1;
                    user2 = stream.readLine();
                    ui->label_5->setText(user2);
                    i+=1;
                    user2 = stream.readLine();
                    ui->label_9->setText(user2);
                    i+=1;
                }
            }
            else
                user2 = stream.readLine();
            i+=1;
        }
    }
    file.close();
}

Profile::~Profile()
{
    delete ui;
}
