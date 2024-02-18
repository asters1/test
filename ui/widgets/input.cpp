#include "input.h"
#include "ui_input.h"
#include "data/config.h"
#include <QDebug>

INPUT::INPUT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::INPUT)
{
    ui->setupUi(this);
    QFont f= ui->name_label->font();
    f.setPointSize(Name_Input_Font_Size);
    ui->name_label->setFont(f);
    QFont ft= ui->text_input->font();
    ft.setPointSize(Input_Font_Size);
    ui->text_input->setFont(ft);

}

INPUT::~INPUT()
{
    delete ui;
}

void INPUT::SetText(QString text)
{
    ui->name_label->setText(text);
}

