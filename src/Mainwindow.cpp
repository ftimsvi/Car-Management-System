#include "Mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(1520,800));
    ui->label->resize(this->size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QMessageBox* exit_msg = new QMessageBox(QMessageBox::Warning, "Quit", "Are you sure you want to quit app?:(", QMessageBox::Yes, this);
    exit_msg->addButton(QMessageBox::No);
    exit_msg->setDefaultButton(QMessageBox::No);
    if(exit_msg->exec() == QMessageBox::Yes)
    {
        MainWindow::close();
    }
    else
    {
        exit_msg->close();
    }
}

void MainWindow::on_pushButton_clicked()
{
    Login* lgn = new Login();
    lgn->show();
    connect(lgn, &Login::closeMain, this, &MainWindow::close);
}

void MainWindow::on_pushButton_2_clicked()
{
    Regester* rgstr = new Regester();
    rgstr->show();
}

void MainWindow::closeMainWindow()
{
    MainWindow::close();
}

void MainWindow::on_pushButton_3_clicked()
{
    Management* mngmt = new Management();
    mngmt->show();
    connect(mngmt, &Management::closeMain, this, &MainWindow::close);
}

