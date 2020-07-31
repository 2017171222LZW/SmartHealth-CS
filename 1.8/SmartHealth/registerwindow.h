#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QLineEdit>
#include <customer.h>
#include "userverify.h"

#define PAITIENT 0
#define DOCTOR   1
#define MANAGER  2

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = 0);
    ~RegisterWindow();
    void registerDoctor(const QByteArray &data);
    void registerUser(const QByteArray &data);

private:
    void reLogin();
    void clearPage();
    void initPage();
    void initDoctorItem();
    void showDocItem();
    void hideDocItem();

signals:
    void back2Login();
    void userRegister(const Customer* person);

private slots:
    void on_Cancel_clicked();
    void on_Register_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_Picture_clicked();

public slots:
    void registerSeccuss();
    void registerFail();

private:
    Ui::RegisterWindow *ui;
    QVector<QLineEdit* > page;
    QVector<QWidget* > doctorItem;
    QString file;
    UserVerify verify;
};

#endif // REGISTERWINDOW_H
