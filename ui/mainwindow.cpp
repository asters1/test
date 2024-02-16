#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "data/config.h"
#include "ui/pages/sp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(App_width,App_height);
    connect(ui->sz_btn,&sz::clicked,this,&MainWindow::LoadSetPage);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LoadSetPage()
{

    qDebug()<<"正在加载SetPage页面...";
    this->sp=new SP();
    InitPage(sp,"设置");
    qDebug()<<"加载SetPage页面完成!";
    connect(sp,&SP::backMwin,this,[=]{this->sp->close();this->show();});

}

void MainWindow::LoadLivePage()
{

}

void MainWindow::LoadHistoryPage()
{

}


void MainWindow::InitPage(QWidget *page,QString title)
{

    page->setGeometry(this->geometry());
    page->setWindowIcon(QIcon(App_Icon_Path));
    page->setWindowTitle(title);
    this->hide();
    page->show();
}
