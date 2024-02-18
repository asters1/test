#include "screenutil.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QApplication>
#include <QPoint>
#include "data/config.h"

ScreenUtil::ScreenUtil(QObject *parent)
    : QObject{parent}
{


}



QPoint ScreenUtil::GetScreenCenter(QSize ws)

{
//    qDebug()<<ws;
    //起点坐标 X=-100,Y=-100
     QPoint p;
    QDesktopWidget *desktop = QApplication::desktop();
    QRect screenGeometry = desktop->screenGeometry();

//    qDebug() << "屏幕宽度：" << screenGeometry.width();
//    qDebug() << "屏幕高度：" << screenGeometry.height();
    int X= screenGeometry.width()/2-ws.width()/2;
    int Y= screenGeometry.height()/2-ws.height()/2;
//    qDebug()<<X;
//    qDebug()<<Y;
    p.setX(X);
    p.setY(Y);

    return p;


}
