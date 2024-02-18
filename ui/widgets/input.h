#ifndef INPUT_H
#define INPUT_H

#include <QWidget>

namespace Ui {
class INPUT;
}

class INPUT : public QWidget
{
    Q_OBJECT

public:
    explicit INPUT(QWidget *parent = nullptr);
    ~INPUT();
    void SetText(QString text);

private:
    Ui::INPUT *ui;
};

#endif // INPUT_H
