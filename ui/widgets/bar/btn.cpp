#include "btn.h"
#include <QLabel>
#include "data/config.h"
#include <QDebug>

btn::btn(QWidget *parent)
    : QLabel{parent}
{
    QSizePolicy policy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    this->setSizePolicy(policy);
    this->setCursor(Qt::PointingHandCursor);

}

void btn::SetImg(QString path)
{
    QPixmap pix;
    pix.load(path);
    pix=pix.scaled(Icon_Bar_width,Icon_Bar_height,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    this->setPixmap(pix);
    setMouseTracking(true);
}

void btn::mouseReleaseEvent(QMouseEvent *)
{
//    qDebug()<<"bbb";
    emit clicked();
}
