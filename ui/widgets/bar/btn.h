#ifndef BTN_H
#define BTN_H

#include <QWidget>
#include <QLabel>

class btn : public QLabel
{
    Q_OBJECT
public:
    explicit btn(QWidget *parent = nullptr);

    void SetImg(QString path);
    virtual void mouseReleaseEvent(QMouseEvent *);

signals:
    void clicked();
};

#endif // BTN_H
