#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H

#include <QWidget>

class DisplayWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DisplayWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *even);

signals:

public slots:
    void displayPicture(const QString img);

private:
    QImage img;
};

#endif // DISPLAYWIDGET_H
