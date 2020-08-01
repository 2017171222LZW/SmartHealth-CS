#ifndef CHATONLINEWINDOW_H
#define CHATONLINEWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "chatmessage/qnchatmessage.h"
#include "userverify.h"

namespace Ui {
class ChatOnlineWindow;
}

class ChatOnlineWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatOnlineWindow(UserVerify *verify, QWidget *parent = 0);
    ~ChatOnlineWindow();

    void dealMessage(QNChatMessage *messageW, QListWidgetItem *item, QString text, QString time, QNChatMessage::User_Type type);
    void dealMessageTime(QString curMsgTime);

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void on_pushButton_clicked();
    void showMsg(QString msg, int role=1);

private:
    Ui::ChatOnlineWindow *ui;
    UserVerify *verify;
};

#endif // CHATONLINEWINDOW_H
