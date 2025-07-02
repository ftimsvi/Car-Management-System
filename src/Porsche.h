#ifndef PORSCHE_H
#define PORSCHE_H

#include "Car.h"

class Porsche : public Car
{
public:
    Porsche();

    virtual QString getServicer();
    virtual QString getBrand();
    virtual QString getBrandPic();
    virtual QString getServicerPic();
};

#endif // PORSCHE_H
