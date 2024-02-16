#ifndef FH_H
#define FH_H

#include <QWidget>

namespace Ui {
class FH;
}

class FH : public QWidget
{
    Q_OBJECT

public:
    explicit FH(QWidget *parent = nullptr);
    ~FH();

private:
    Ui::FH *ui;
};

#endif // FH_H
