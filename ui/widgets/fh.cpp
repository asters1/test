#include "fh.h"
#include "ui_fh.h"

FH::FH(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FH)
{
    ui->setupUi(this);
    ui->fh_btn->SetImg(":/drawable/shangyibu.png");
    connect(ui->fh_btn,&btn::clicked,[=]{emit clicked();});
}

FH::~FH()
{
    delete ui;
}
