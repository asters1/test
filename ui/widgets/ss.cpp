#include "ss.h"
#include "ui_ss.h"

ss::ss(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ss)
{
    ui->setupUi(this);
    ui->ss_btn->SetImg(":/drawable/sousuo.png");

    connect(ui->ss_btn,&btn::clicked,[=]{emit clicked();});
}

ss::~ss()
{
    delete ui;
}
