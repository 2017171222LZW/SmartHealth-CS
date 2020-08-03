#ifndef DOCTORWINDOW_H
#define DOCTORWINDOW_H

#include <QMainWindow>
#include "customer.h"
#include "userverify.h"
#include "appointmentwindow.h"
#include <QVector>

namespace Ui {
class DoctorWindow;
}

class DoctorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoctorWindow(UserVerify *verify, QWidget *parent = 0);
    ~DoctorWindow();
    void addDoctorInformation(const Doctor &doctor);

private:
    void initDoctorTable();

signals:
    void back2Func();

private slots:
    void on_backBtn_clicked();

    void addDoctorImage(const QByteArray &data);

    void displayDoctor();

    void on_doctorTable_cellClicked(int row, int column);

private:
    Ui::DoctorWindow *ui;
    UserVerify *verify;
    QVector<Doctor> doctors;
    QVector<QByteArray*> docImages;
    AppointmentWindow *appointWindow;
};

#endif // DOCTORWINDOW_H
