#include "theme.h"
#include "data/config.h"

Theme::Theme(QObject *parent)
    : QObject{parent}
{

}

void Theme::SetTheme(QWidget *w)
{
    w->setStyleSheet("background:"+Win_BackGround_Color);
}
