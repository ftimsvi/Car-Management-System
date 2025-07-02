#ifndef COMMENTS_H
#define COMMENTS_H

#include <QDialog>
#include <QFile>

namespace Ui {
class Comments;
}

class Comments : public QDialog
{
    Q_OBJECT

public:
    explicit Comments(QString filename, QWidget *parent = nullptr);
    ~Comments();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Comments *ui;
    QString filename2;
};

#endif // COMMENTS_H
