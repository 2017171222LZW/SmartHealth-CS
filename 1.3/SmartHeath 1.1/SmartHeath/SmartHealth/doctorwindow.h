#ifndef DOCTORWINDOW_H
#define DOCTORWINDOW_H

#include <QMainWindow>
#include "doctor.h"

namespace Ui {
class DoctorWindow;
}

class DoctorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoctorWindow(QWidget *parent = 0);
    ~DoctorWindow();
    void addDoctorInformation(const  Doctor &doctor);

private:
    void initDoctorTable();

signals:
    void back2Func();

private slots:
    void on_backBtn_clicked();

private:
    Ui::DoctorWindow *ui;
};

#endif // DOCTORWINDOW_H
