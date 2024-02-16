#ifndef LIVE_H
#define LIVE_H

#include <QWidget>

namespace Ui {
class live;
}

class live : public QWidget
{
    Q_OBJECT

public:
    explicit live(QWidget *parent = nullptr);
    ~live();

signals:
    void clicked();
private:
    Ui::live *ui;
};

#endif // LIVE_H
