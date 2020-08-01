#ifndef PASSWORDWINDOW_H
#define PASSWORDWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QWidget>

namespace Ui {
class PasswordWindow;
}

class PasswordWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PasswordWindow(QWidget *parent = 0);
    ~PasswordWindow();

private:
    Ui::PasswordWindow *ui;
    QVector<QWidget*> page1;
    QVector<QWidget*> page2;
    void initPage1();
    void initPage2();

signals:
    void back2Login();
    void userPassword(QString telephone, QString id);
    void ChangeUserPasswd(QString id, QString telephone, QString passwd);
private slots:
    void on_okBtn_clicked();
    void on_nextBtn_clicked();
    void elementShow(QVector<QWidget*> page);
    void elementHide(QVector<QWidget*> page);
    void on_backBtn_clicked();

public slots:
    void PasswdSeccuss();
    void PasswdFail();
    void changeSeccuss();
    void changeFail();
};

#endif // PASSWORDWINDOW_H
