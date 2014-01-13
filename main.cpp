#include "lib/ui/mainwindow.h"
#include <QApplication>
#include <QFontDatabase>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv) ;
    app.setOrganizationName("P&G") ;
    app.setApplicationName("simon") ;
    app.setApplicationVersion("0.1");

    // Setting the font of the application
    QFontDatabase* fontdb = new QFontDatabase() ;
    fontdb->addApplicationFont(":/fonts/OpenSans-Regular.ttf") ;
    int id = fontdb->addApplicationFont(":/fonts/OpenSans-Bold.ttf") ;
    QString family = QFontDatabase::applicationFontFamilies(id).at(0) ;
    QFont* font = new QFont(family, 16) ;
    app.setFont(*font) ;

    app.setStyle("");

    MainWindow w ;
    w.show() ;
    w.setWindowIcon(QIcon(":/icons/simonicon.ico"));

    return app.exec() ;
}
