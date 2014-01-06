#include "lib/ui/mainwindow.h"
#include <QApplication>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv) ;
    app.setOrganizationName("P&G") ;
    app.setApplicationName("simon") ;

    // Setting the font of the application
    QFontDatabase* fontdb = new QFontDatabase() ;
    int id = fontdb->addApplicationFont(":/font/OpenSans-Regular.ttf") ;
    QString family = QFontDatabase::applicationFontFamilies(id).at(0) ;
    app.setFont(QFont(family, 16)) ;

    MainWindow w ;
    w.show() ;

    return app.exec() ;
}
