#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setAttribute(Qt::WA_DeleteOnClose) ;

    QWidget* mainWidget = new QWidget ;
    setCentralWidget(mainWidget) ;

    QVBoxLayout* mainLayout = new QVBoxLayout ;
    mainWidget->setLayout(mainLayout) ;

    QHBoxLayout* playRecordArea = new QHBoxLayout ;
    mainLayout->addLayout(playRecordArea) ;

    centralArea = new QStackedWidget() ;
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

MainWindow::~MainWindow()
{
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    qDebug()<<"test" ;
    event->accept();
}
