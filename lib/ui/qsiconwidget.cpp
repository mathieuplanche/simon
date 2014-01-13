#include "qsiconwidget.h"
#include <QPainter>

QSIconWidget::QSIconWidget(QIcon icon, QWidget *parent) :
    QFrame(parent), widgetIcon(icon)
{
}

void QSIconWidget::paintEvent(QPaintEvent *event)
{
    // Computing icon size
    QSize iconSize = this->actualIconSize() ;
    int w = iconSize.width() ;
    int h = iconSize.height() ;
    QPoint iconPos = this->actualIconPos() ;
    int x = iconPos.x() ;
    int y = iconPos.y() ;

    // Drawing painter
    QPainter* painter = new QPainter(this) ;
    painter->setRenderHint(painter->Antialiasing) ;
    painter->drawPixmap(x, y, w, h, widgetIcon.pixmap(w, h));
}

QSize QSIconWidget::actualIconSize()
{
    QSize size = this->size() ;
    QSize iconSize = widgetIcon.actualSize(size) ;
    int w = iconSize.width() ;
    int h = iconSize.height() ;
    return QSize(w, h) ;
}

QPoint QSIconWidget::actualIconPos()
{
    QSize size = this->size() ;
    QSize iconSize = this->actualIconSize() ;
    int x = (size.width() - iconSize.width()) / 2 ;
    int y = (size.height() - iconSize.height()) / 2 ;
    return QPoint(x, y) ;
}
