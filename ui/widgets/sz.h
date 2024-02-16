#ifndef SZ_H
#define SZ_H

#include <QWidget>

namespace Ui {
class sz;
}

class sz : public QWidget
{
    Q_OBJECT

public:
    explicit sz(QWidget *parent = nullptr);
    ~sz();

signals:
    void clicked();
private:
    Ui::sz *ui;
};

#endif // SZ_H
