#ifndef SCREENUTIL_H
#define SCREENUTIL_H

#include <QObject>

#include <QWidget>

class ScreenUtil : public QObject
{
    Q_OBJECT
public:
    explicit ScreenUtil(QObject *parent = nullptr);
    //ws为窗口的大小,在屏幕中心显示
    static QPoint GetScreenCenter(QSize ws);

signals:

};

#endif // SCREENUTIL_H
