#include "loginwindow.h"
#include <QApplication>
#include <QChartView>


QT_CHARTS_USE_NAMESPACE
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();

    return a.exec();
}
