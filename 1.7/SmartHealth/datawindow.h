#ifndef DATAWINDOW_H
#define DATAWINDOW_H

#include <QMainWindow>
#include "userverify.h"

namespace Ui {
class DataWindow;
}

class DataWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataWindow(UserVerify *verify, QWidget *parent = 0);
    ~DataWindow();

    void cleanWindow(void);

    QString getUsername() const;
    void setUsername(const QString &value);

private slots:
    void on_backBtn_clicked();

    void on_commitPushButton_clicked();

    void dealReplyFeatureCommit(QByteArray data);

signals:
    void back2Func();
    void commitPersonFeature(QByteArray array);

private:
    Ui::DataWindow *ui;
    UserVerify *verify;
    QString username;
};

#endif // DATAWINDOW_H
