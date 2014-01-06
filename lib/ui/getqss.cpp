#include "lib/ui/getqss.h"

QString getQSS(const std::string & filename)
{
    QFile styleFile((":/qss/" + filename).c_str()) ;
    styleFile.open(QFile::ReadOnly) ;
    QString style(styleFile.readAll()) ;

    return style ;
}


