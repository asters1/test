#ifndef THEME_H
#define THEME_H

#include <QObject>
#include <QWidget>

class Theme : public QObject
{
    Q_OBJECT
public:
    explicit Theme(QObject *parent = nullptr);
    //设置主题
    static void SetTheme(QWidget *w);

signals:

};

#endif // THEME_H
