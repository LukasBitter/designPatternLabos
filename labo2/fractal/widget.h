#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <fractalwidget.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    FractalWidget *fw;
};

#endif // WIDGET_H
