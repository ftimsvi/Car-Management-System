#include "Car.h"

Car::Car()
{

}

void Car::setName(QString name)
{
    this->name = name;
}

void Car::setMaxSpeed(QString maxSpeed)
{
    this->maxSpeed = maxSpeed;
}

void Car::setSpeed(QString speed)
{
    this->speed = speed;
}

void Car::setBodyClass(QString bodyclass)
{
    this->bodyClass = bodyclass;
}

void Car::setEngineVolume(QString engineVolume)
{
    this->engineVolume = engineVolume;
}

void Car::setEngineType(QString engineType)
{
    this->engineType = engineType;
}

void Car::setCylindeNumber(QString cylinderNumber)
{
    this->cylinderNumber = cylinderNumber;
}

void Car::setGreaboxType(QString gearboxType)
{
    this->gearboxType = gearboxType;
}

void Car::setPrice(QString price)
{
    this->price = price;
}

void Car::setNumber(int num)
{
    this->number = num;
}

QString Car::getName()
{
    return this->name;
}

QString Car::getMaxSpeed()
{
    return this->maxSpeed;
}

QString Car::getSpeed()
{
    return this->speed;
}

QString Car::getBodycClass()
{
    return this->bodyClass;
}

QString Car::getEngineVolume()
{
    return this->engineVolume;
}

QString Car::getEngineType()
{
    return this->engineType;
}

QString Car::getCylinderNumber()
{
    return this->cylinderNumber;
}

QString Car::getGearboxType()
{
    return this->gearboxType;
}

QString Car::getPrice()
{
    return this->price;
}

int Car::getNumber()
{
    return this->number;
}

QString Car::getServicer()
{
    return "";
}

QString Car::getBrand()
{
    return "";
}

QString Car::getBrandPic()
{
    return "";
}

QString Car::getServicerPic()
{
    return "";
}
