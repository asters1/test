#include "sp.h"
#include "ui_sp.h"
#include "data/config.h"

SP::SP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SP)
{
    ui->setupUi(this);
    QFont f =ui->sz_label->font();
    f.setPointSize(Title_Font_Size);
    ui->sz_label->setFont(f);
}

SP::~SP()
{
    delete ui;
}
