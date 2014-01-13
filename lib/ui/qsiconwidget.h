#ifndef QSICONWIDGET_H
#define QSICONWIDGET_H

#include <QFrame>
#include <QWidget>
#include <QIcon>
#include <QSize>
#include <QPoint>
#include <QPaintEvent>

class QSIconWidget : public QFrame
{
    Q_OBJECT
public:
    explicit QSIconWidget(QIcon icon, QWidget *parent = 0) ;

    QIcon widgetIcon ;

    QSize actualIconSize() ;
    QPoint actualIconPos() ;

protected:
    void paintEvent(QPaintEvent* event) ;

signals:

public slots:

};

#endif // QSICONWIDGET_H
