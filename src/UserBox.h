#ifndef USERBOX_H
#define USERBOX_H

#include <QDialog>

namespace Ui {
class UserBox;
}

class UserBox : public QDialog
{
    Q_OBJECT

public:
    explicit UserBox(QWidget *parent = nullptr);
    ~UserBox();

    void setUser(QString name);
    void setPass(QString name);
    void setPhone(QString name);
    void setName(QString name);
    void setLastName(QString name);
    void setAge(QString name);

private:
    Ui::UserBox *ui;
};

#endif // USERBOX_H
