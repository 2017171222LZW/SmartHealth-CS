#ifndef DOCTOR_H
#define DOCTOR_H

#include <QObject>
#include <QString>

class Doctor
{
public:
    Doctor();
    Doctor(QString name, QString workTime, QString diploma, QString profession);

private:

public:

    QString getName() const;
    void setName(const QString &value);

    QString getDiploma() const;
    Doctor* setDiploma(const QString &value);

    QString getProfession() const;
    Doctor* setProfession(const QString &value);

    QString getWorkTime() const;
    Doctor* setWorkTime(const QString &value);

    QString getImage() const;
    void setImage(const QString &value);

    QString getBriefIntroduce() const;
    void setBriefIntroduce(const QString &value);

private:
    QString name;
    QString workTime;
    QString diploma;
    QString profession;
    QString image;
    QString briefIntroduce;
};

#endif // DOCTOR_H
