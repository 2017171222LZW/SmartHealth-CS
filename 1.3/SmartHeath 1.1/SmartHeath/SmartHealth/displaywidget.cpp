#include "displaywidget.h"
#include <QPainter>

DisplayWidget::DisplayWidget(QWidget *parent) : QWidget(parent)
{

}

void DisplayWidget::paintEvent(QPaintEvent *even)
{
    if(!this->img.isNull()){
        QPainter painter(this);
        painter.drawImage(this->rect(),this->img);
    }

}

void DisplayWidget::displayPicture(const QString img)
{
    this->img.load(img);
    update();
}
