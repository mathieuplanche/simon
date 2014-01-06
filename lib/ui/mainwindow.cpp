#include "mainwindow.h"
#include "lib/ui/qspushbutton.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << this->font() ;

    setStyleSheet("QWidget {background-color: white}") ;
    QWidget* mainWidget = new QWidget(this) ;
    setCentralWidget(mainWidget) ;

    QVBoxLayout* mainLayout = new QVBoxLayout ;
    mainWidget->setLayout(mainLayout) ;

    QHBoxLayout* playRecordArea = new QHBoxLayout ;
    mainLayout->addLayout(playRecordArea) ;
    playButton = new QSPushButton("Play") ;
    playRecordArea->addWidget(playButton) ;
    recordButton = new QSPushButton("Record") ;
    playRecordArea->addWidget(recordButton) ;

    centralArea = new QStackedWidget ;
    mainLayout->addWidget(centralArea) ;

    QHBoxLayout* addButtonsLayout = new QHBoxLayout ;
    mainLayout->addLayout(addButtonsLayout) ;
    addFilterButton = new QSPushButton("Add Filter") ;
    addButtonsLayout->addWidget(addFilterButton) ;
    addTinnitusButton = new QSPushButton("Add Tinnitus") ;
    addButtonsLayout->addWidget(addTinnitusButton) ;
    addBackgroundNoiseButton = new QSPushButton("Add Background Noise") ;
    addButtonsLayout->addWidget(addBackgroundNoiseButton) ;
    // Same sized buttons
    int m = std::max(addFilterButton->sizeHint().width(), std::max(addTinnitusButton->sizeHint().width(), addBackgroundNoiseButton->sizeHint().width())) ;
    addFilterButton->setMinimumWidth(m) ;
    addTinnitusButton->setMinimumWidth(m) ;
    addBackgroundNoiseButton->setMinimumWidth(m) ;

}

