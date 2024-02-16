#ifndef SS_H
#define SS_H

#include <QWidget>

namespace Ui {
class ss;
}

class ss : public QWidget
{
    Q_OBJECT

public:
    explicit ss(QWidget *parent = nullptr);
    ~ss();

signals:
    void clicked();
private:
    Ui::ss *ui;
};

#endif // SS_H
