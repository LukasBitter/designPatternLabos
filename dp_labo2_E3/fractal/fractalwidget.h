/**
    FractalWidget Class - Description File
    Purpose: This class is used to implement the paint methods for the Fractal class.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

#ifndef FRACTALWIDGET_H
#define FRACTALWIDGET_H

#include <QWidget>
#include <fractal.h>

class FractalWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FractalWidget(QWidget *parent = 0);

    //redefinitions
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *e);

signals:

public slots:

private:
    NewtonFractal *fractal;
};

#endif // FRACTALWIDGET_H
