#include "mainwindow.h"
#include <QSerialPortInfo>
#include <QSerialPort>

#include <QApplication>

//QMessageBox *Message_Dialog_P;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QMessageBox Message_Dialog;
    //Message_Dialog_P = &Message_Dialog;
    w.show();
    return a.exec();
}
