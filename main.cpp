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
    fontdb->addApplicationFont(":/fonts/OpenSans-Regular.ttf") ;
    int id = fontdb->addApplicationFont(":/fonts/OpenSans-Bold.ttf") ;
    QString family = QFontDatabase::applicationFontFamilies(id).at(0) ;
    QFont* font = new QFont(family, 16) ;
    app.setFont(*font) ;

    MainWindow w ;
    w.show() ;

    return app.exec() ;
}
