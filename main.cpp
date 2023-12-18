#include "client/client.h"
#include "server/server.h"

#include <QApplication>
#include <QtConcurrent/QtConcurrent>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ServerWindow ServerWindow;
    ServerWindow.setWindowTitle("Server");
    ServerWindow.show();

    // Client
    MainWindow ClientWindow;
    ClientWindow.setWindowTitle("Client");
    ClientWindow.show();

    // Close
//    QObject::connect(&a, &QApplication::lastWindowClosed, &a, &QApplication::quit);

    return a.exec();
}
