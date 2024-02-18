#include "ui/mainwindow.h"
#include "util/screenutil.h"
#include "data/config.h"
#include <QApplication>
#include <QDir>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("CatVodOpen");
    w.setWindowIcon(QIcon(App_Icon_Path));
    QSize ws =w.size();
    w.move(ScreenUtil::GetScreenCenter(ws));
    w.show();
    return a.exec();
}
