#ifndef QSPUSHBUTTON_H
#define QSPUSHBUTTON_H

#include <QPushButton>
#include <QString>
#include "lib/ui/getqss.h"
#include "lib/ui/qsiconwidget.h"
#include <QLabel>

class QSPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit QSPushButton(const QString & text = "", QWidget *parent = 0);

signals:

public slots:

};

class QSAddButton : public QSPushButton
{
    Q_OBJECT
public:
    explicit QSAddButton(const QString & text = "", QWidget *parent = 0) ;

protected:
    virtual QSize sizeHint() const ;
    virtual void enterEvent(QEvent* event) ;
    virtual void leaveEvent(QEvent *event) ;
    virtual void mousePressEvent(QMouseEvent *event) ;
    virtual void mouseReleaseEvent(QMouseEvent *event) ;

private:
    QLabel* plusSign ;
    QLabel* buttonLabel ;
};

#endif // QSPUSHBUTTON_H
