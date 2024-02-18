#include "sp.h"
#include "ui_sp.h"
#include "data/config.h"
#include "util/theme.h"
SP::SP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SP)
{
    ui->setupUi(this);
    QFont f =ui->sz_label->font();
    f.setPointSize(Title_Font_Size);
    ui->sz_label->setFont(f);
    connect(ui->back_btn,&FH::clicked,[=]{emit backMwin();});
    Theme::SetTheme(this);
    ui->cfg_input->SetText("配置地址");

}

SP::~SP()
{
    delete ui;
}
