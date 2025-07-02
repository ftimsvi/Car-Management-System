#ifndef AUDI_H
#define AUDI_H

#include "Car.h"

class Audi : public Car
{
public:
    Audi();

    virtual QString getServicer();
    virtual QString getBrand();
    virtual QString getBrandPic();
    virtual QString getServicerPic();
};

#endif // AUDI_H
