#ifndef BMW_H
#define BMW_H

#include "Car.h"

class BMW : public Car
{

public:
    explicit BMW();

    virtual QString getServicer();
    virtual QString getBrand();
    virtual QString getBrandPic();
    virtual QString getServicerPic();

signals:

};

#endif // BMW_H
