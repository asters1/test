#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui/pages/sp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void LoadSetPage();
    void LoadLivePage();
    void LoadHistoryPage();
    void InitPage(QWidget *page,QString title);

signals:
    void backMwin();

private:
    Ui::MainWindow *ui;
    SP *sp;
};
#endif // MAINWINDOW_H
