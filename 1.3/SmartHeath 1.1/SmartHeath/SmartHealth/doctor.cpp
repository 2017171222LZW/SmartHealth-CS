#include "doctor.h"

Doctor::Doctor()
{

}

Doctor::Doctor(QString name, QString workTime, QString diploma, QString profession)
{
    this->diploma = diploma;
    this->name = name;
    this->workTime = workTime;
    this->profession = profession;
}

QString Doctor::getName() const
{
    return name;
}

void Doctor::setName(const QString &value)
{
    name = value;
}

QString Doctor::getDiploma() const
{
    return diploma;
}

Doctor* Doctor::setDiploma(const QString &value)
{
    diploma = value;
    return this;
}

QString Doctor::getProfession() const
{
    return profession;
}

Doctor* Doctor::setProfession(const QString &value)
{
    profession = value;
    return this;
}

QString Doctor::getWorkTime() const
{
    return workTime;
}

Doctor* Doctor::setWorkTime(const QString &value)
{
    workTime = value;
    return this;
}

QString Doctor::getImage() const
{
    return image;
}

void Doctor::setImage(const QString &value)
{
    image = value;
}
