#include "comments.h"
#include "ui_comments.h"

Comments::Comments(QString filename, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comments), filename2(filename)
{
    ui->setupUi(this);

    ui->messageslist->setFlow(QListView::TopToBottom);
    ui->messageslist->setGridSize(QSize(501, 50));
    ui->messageslist->setResizeMode(QListView::Adjust);
    ui->messageslist->setViewMode(QListView::ListMode);
    ui->messageslist->setWrapping(false);

    QFile file(filename);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        while (!stream.atEnd())
        {
            auto    item = new QListWidgetItem("", ui->messageslist);
            auto    item2 = new QListWidgetItem("", ui->messageslist);
            auto    name = new QTextEdit(stream.readLine()+":");
            QFont f1 = name->font();
            f1.setPointSize(15);
            name->setFont(f1);
            auto    text = new QTextEdit(stream.readLine());
            name->setMinimumSize(480, 49);
            text->setMinimumSize(480, 51);
            text->setStyleSheet("background-color : rgba(143, 143, 143,50%); color : white;");
            ui->messageslist->setItemWidget(item, name);
            ui->messageslist->setItemWidget(item2, text);

        }
    }
}

Comments::~Comments()
{
    delete ui;
}

void Comments::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString text= ui->textEdit->toPlainText();

    if(name!="" && text!="")
    {
        ui->messageslist->setFlow(QListView::TopToBottom);
        ui->messageslist->setGridSize(QSize(501, 50));
        ui->messageslist->setResizeMode(QListView::Adjust);
        ui->messageslist->setViewMode(QListView::ListMode);
        ui->messageslist->setWrapping(false);

        //QString filename = "Comments.txt";
        QFile file(filename2);

        if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << name << '\n' << text << '\n';
        }
        file.close();

        auto    item = new QListWidgetItem("", ui->messageslist);
        auto    item2 = new QListWidgetItem("", ui->messageslist);
        auto    name2 = new QTextEdit(name+":");
        QFont f1 = name2->font();
        f1.setPointSize(15);
        name2->setFont(f1);
        auto    text2 = new QTextEdit(text);
        text2->setStyleSheet("background-color : rgba(143, 143, 143,50%); color : white; ");
        name2->setMinimumSize(480, 49);
        text2->setMinimumSize(480, 51);
        ui->messageslist->setItemWidget(item, name2);
        ui->messageslist->setItemWidget(item2, text2);

        ui->lineEdit->clear();
        ui->textEdit->clear();

    }
}

