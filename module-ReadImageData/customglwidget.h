#ifndef CUSTOMGLWIDGET_H
#define CUSTOMGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <gl/GL.h>
#include <gl/GLU.h>

class CustomGLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit CustomGLWidget(QWidget *parent = 0);
    ~CustomGLWidget();

protected:
    void initializeGL() ;
    void paintGL() ;
    void resizeGL(int width, int height) ;
};

#endif // CUSTOMGLWIDGET_H
