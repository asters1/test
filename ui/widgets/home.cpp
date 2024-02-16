#include "home.h"
#include "ui_home.h"
#include "data/config.h"

home::home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    QFont f= ui->home_btn->font();
    f.setPointSize(Title_Font_Size);
    ui->home_btn->setFont(f);
    connect(ui->home_btn,&btn::clicked,[=]{emit clicked();});
}

home::~home()
{
    delete ui;
}
