#include "sz.h"
#include "ui_sz.h"
#include <QDebug>

sz::sz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sz)
{
    ui->setupUi(this);
    ui->sz_label->SetImg(":/drawable/shezhi.png");

    connect(ui->sz_label,&btn::clicked,[=]{emit clicked();});
}

sz::~sz()
{
    delete ui;
}

