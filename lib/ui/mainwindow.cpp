#include "mainwindow.h"
#include "lib/ui/qspushbutton.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setStyleSheet("MainWindow {background-color: white}") ;
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

    centralArea = new QFrame ;
    centralArea->setStyleSheet("QFrame { border: 1px solid #d4d4d4 ; border-radius: 4px }");
    centralArea->setMinimumHeight(100);
    mainLayout->addWidget(centralArea) ;

    QHBoxLayout* addButtonsLayout = new QHBoxLayout ;
    mainLayout->addLayout(addButtonsLayout) ;
    addFilterButton = new QSAddButton("Add Filter") ;
    addFilterButton->setFixedHeight(75) ;
    addButtonsLayout->addWidget(addFilterButton) ;
    addTinnitusButton = new QSAddButton("Add Tinnitus") ;
    addTinnitusButton->setFixedHeight(75) ;
    addButtonsLayout->addWidget(addTinnitusButton) ;
    addBackgroundNoiseButton = new QSAddButton("Add Background Noise") ;
    addBackgroundNoiseButton->setFixedHeight(75) ;
    addButtonsLayout->addWidget(addBackgroundNoiseButton) ;
    // Same sized buttons
    int m = std::max(addFilterButton->sizeHint().width(), std::max(addTinnitusButton->sizeHint().width(), addBackgroundNoiseButton->sizeHint().width())) ;
    addFilterButton->setMinimumWidth(m) ;
    addTinnitusButton->setMinimumWidth(m) ;
    addBackgroundNoiseButton->setMinimumWidth(m) ;

}

