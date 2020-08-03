#ifndef APPOINTMENTBUTTON_H
#define APPOINTMENTBUTTON_H

#include <QPushButton>
#include "doctor.h"

class AppointmentButton : public QPushButton
{
    Q_OBJECT
public:
    explicit AppointmentButton(QWidget *parent = 0);

    Doctor getDoctor() const;
    void setDoctor(const Doctor &value);
    void _getDoctor(Doctor &doctor);

signals:

public slots:

private:
    Doctor doctor;
};

#endif // APPOINTMENTBUTTON_H
