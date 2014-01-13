#include "qspushbutton.h"
#include "lib/ui/qsiconwidget.h"
#include <QHBoxLayout>
#include <QIcon>
#include <QLabel>
#include <QStyle>
#include <QApplication>

QSPushButton::QSPushButton(const QString & text, QWidget *parent) :
    QPushButton(text, parent)
{
    setStyleSheet(getQSS("qsbutton.qss")) ;
}

QSAddButton::QSAddButton(const QString &text, QWidget *parent) :
    QSPushButton("", parent)
{
    setAttribute(Qt::WA_LayoutUsesWidgetRect) ;
    QHBoxLayout* _layout = new QHBoxLayout ;
    _layout->setContentsMargins(0,0,0,0) ;
    _layout->setSpacing(0);
    setLayout(_layout) ;

    // Plus sign
    plusSign = new QLabel("+") ;
    plusSign->setMinimumWidth(50) ;
    plusSign->setObjectName("plussign") ;
    plusSign->setProperty("state", 0) ;
    plusSign->setStyleSheet(getQSS("qsaddsign.qss")) ;
    _layout->addWidget(plusSign) ;
    _layout->addSpacing(10) ;

    // Label
    buttonLabel = new QLabel(text, this) ;
    buttonLabel->setAlignment(Qt::AlignCenter) ;
    buttonLabel->setStyleSheet(getQSS("qslabel.qss"));
    _layout->addWidget(buttonLabel, 1) ;
    _layout->addSpacing(10) ;
}

QSize QSAddButton::sizeHint() const
{
    int w = plusSign->sizeHint().width() + buttonLabel->sizeHint().width() + 20 ;
    int h = std::max(plusSign->sizeHint().height(), buttonLabel->sizeHint().height()) ;
    return QSize(w, h) ;
}

void QSAddButton::enterEvent (QEvent* event)
{
    plusSign->setProperty("state", 1);
    plusSign->style()->unpolish(plusSign);
    plusSign->style()->polish(plusSign);
    plusSign->update();
}

void QSAddButton::leaveEvent(QEvent* event)
{
    plusSign->setProperty("state", 0);
    plusSign->style()->unpolish(plusSign);
    plusSign->style()->polish(plusSign);
    plusSign->update();
}

void QSAddButton::mousePressEvent(QMouseEvent* event)
{
    plusSign->setProperty("state", 2);
    plusSign->style()->unpolish(plusSign);
    plusSign->style()->polish(plusSign);
    plusSign->update();
}

void QSAddButton::mouseReleaseEvent(QMouseEvent* event)
{
    plusSign->setProperty("state", 0);
    plusSign->style()->unpolish(plusSign);
    plusSign->style()->polish(plusSign);
    plusSign->update();
}
