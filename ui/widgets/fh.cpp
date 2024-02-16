#include "fh.h"
#include "ui_fh.h"

FH::FH(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FH)
{
    ui->setupUi(this);
}

FH::~FH()
{
    delete ui;
}
