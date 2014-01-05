#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* mainWidget = new QWidget(this) ;
    setCentralWidget(mainWidget) ;

    QVBoxLayout* mainLayout = new QVBoxLayout ;
    mainWidget->setLayout(mainLayout) ;

    QHBoxLayout* playRecordArea = new QHBoxLayout ;
    mainLayout->addLayout(playRecordArea) ;
    playButton = new QPushButton("Play") ;
    playRecordArea->addWidget(playButton) ;
    recordButton = new QPushButton("Record") ;
    playRecordArea->addWidget(recordButton) ;

    centralArea = new QStackedWidget ;
    mainLayout->addWidget(centralArea) ;

    QHBoxLayout* addButtonsLayout = new QHBoxLayout ;
    mainLayout->addLayout(addButtonsLayout) ;
    addFilterButton = new QPushButton("Add Filter") ;
    addButtonsLayout->addWidget(addFilterButton) ;
    addTinnitusButton = new QPushButton("Add Tinnitus") ;
    addButtonsLayout->addWidget(addTinnitusButton) ;
    addBackgroundNoiseButton = new QPushButton("Add Background Noise") ;
    addButtonsLayout->addWidget(addBackgroundNoiseButton) ;
}

