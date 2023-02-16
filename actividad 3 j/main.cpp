#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Neuronas");
    MainWindow w;
    w.show();
    return a.exec();
}
