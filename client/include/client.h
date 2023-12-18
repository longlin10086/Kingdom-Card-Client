#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../ui/ui_clientwindow.h"
#include "../../communicator/communicator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class ClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();

private:
    Ui::ClientWindow *ui;

public slots:
    void ChangeText(SIGNALS signal);
};
#endif // MAINWINDOW_H
