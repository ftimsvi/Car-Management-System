#ifndef CAR_H
#define CAR_H

#include <QObject>

class Car : public QObject
{
public:
    Car();

    void setName(QString name);
    void setMaxSpeed(QString maxSpeed);
    void setSpeed(QString speed);
    void setBodyClass(QString bodyclass);
    void setEngineVolume(QString engineVolume);
    void setEngineType(QString engineType);
    void setCylindeNumber(QString cylindeNumber);
    void setGreaboxType(QString greaboxType);
    void setPrice(QString price);
    void setNumber(int num);

    QString getName();
    QString getMaxSpeed();
    QString getSpeed();
    QString getBodycClass();
    QString getEngineVolume();
    QString getEngineType();
    QString getCylinderNumber();
    QString getGearboxType();
    QString getPrice();
    int getNumber();

    virtual QString getServicer();
    virtual QString getBrand();
    virtual QString getBrandPic();
    virtual QString getServicerPic();

private:
    QString name;
    QString maxSpeed;
    QString speed;
    QString bodyClass;
    QString engineVolume;
    QString engineType;
    QString cylinderNumber;
    QString gearboxType;
    QString price;
    int number;
};

#endif // CAR_H
