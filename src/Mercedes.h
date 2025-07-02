#ifndef MERCEDES_H
#define MERCEDES_H

#include "Car.h"

class Mercedes : public Car
{
public:
    Mercedes();

    virtual QString getServicer();
    virtual QString getBrand();
    virtual QString getBrandPic();
    virtual QString getServicerPic();
};

#endif // MERCEDES_H
