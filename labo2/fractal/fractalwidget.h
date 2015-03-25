#ifndef FRACTALWIDGET_H
#define FRACTALWIDGET_H

#include <QWidget>
#include <fractal.h>

class FractalWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FractalWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);

signals:

public slots:

private:
    NewtonFractal *fractal;
};

#endif // FRACTALWIDGET_H
