#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QStackedWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

protected:
    void closeEvent(QCloseEvent *event);

private:
    QPushButton* playButton ;
    QPushButton* recordButton ;

    QStackedWidget* centralArea ;
    QWidget* editionArea ;
    QWidget* overviewArea ;

    QPushButton* addFilterButton ;
    QPushButton* addTinnitusButton ;
    QPushButton* addBackgroundNoiseButton ;

};

#endif // MAINWINDOW_H
