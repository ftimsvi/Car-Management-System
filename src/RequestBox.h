#ifndef REQUESTBOX_H
#define REQUESTBOX_H

#include <QDialog>

namespace Ui {
class RequestBox;
}

class RequestBox : public QDialog
{
    Q_OBJECT

public:
    explicit RequestBox(QWidget *parent = nullptr);
    ~RequestBox();

    void setCarName(QString name);
    void setName(QString name);
    void setLastName(QString name);
    void setPhone(QString phone);

private:
    Ui::RequestBox *ui;
};

#endif // REQUESTBOX_H
