#include "qspushbutton.h"

QSPushButton::QSPushButton(const QString & text, QWidget *parent) :
    QPushButton(text, parent)
{
    setStyleSheet(getQSS("qsbutton.qss")) ;
}
