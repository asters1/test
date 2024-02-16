#ifndef SP_H
#define SP_H

#include <QWidget>

namespace Ui {
class SP;
}

class SP : public QWidget
{
    Q_OBJECT

public:
    explicit SP(QWidget *parent = nullptr);
    ~SP();
signals:
    void backMwin();

private:
    Ui::SP *ui;
};

#endif // SP_H
