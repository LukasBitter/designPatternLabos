#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <fractalwidget.h>
#include <QPushButton>
#include <qlabel.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void draw();

private:
    FractalWidget *fw;
    QPushButton *redraw;
    QLabel *label;
    QWidget *controlWidget;
};

#endif // WIDGET_H
