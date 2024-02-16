#include "live.h"
#include "ui_live.h"

live::live(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::live)
{
    ui->setupUi(this);
    ui->live_btn->SetImg(":/drawable/live.png");
    connect(ui->live_btn,&btn::clicked,[=]{emit clicked();});
}

live::~live()
{
    delete ui;
}
