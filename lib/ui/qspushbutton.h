#ifndef QSPUSHBUTTON_H
#define QSPUSHBUTTON_H

#include <QPushButton>
#include <QString>
#include "lib/ui/getqss.h"

class QSPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit QSPushButton(const QString & text = "", QWidget *parent = 0);

signals:

public slots:

};

#endif // QSPUSHBUTTON_H
