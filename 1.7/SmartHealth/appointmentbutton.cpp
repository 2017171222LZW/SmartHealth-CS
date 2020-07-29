#include "appointmentbutton.h"

AppointmentButton::AppointmentButton(QWidget *parent) : QPushButton(parent)
{

}

Doctor AppointmentButton::getDoctor() const
{
    return doctor;
}

void AppointmentButton::setDoctor(const Doctor &value)
{
    doctor = value;
}

void AppointmentButton::_getDoctor(Doctor &doctor)
{
    doctor = this->doctor;
}
