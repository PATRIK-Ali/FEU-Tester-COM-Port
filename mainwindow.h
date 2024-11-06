#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "./ui_mainwindow.h"

#include <QMainWindow>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_PowerOffButton_Obj_released();
    void on_PowerOnButton_Obj_released();
    void on_RX1OffButton_Obj_released();
    void on_RX1OnButton_Obj_released();
    void on_RX2OffButton_Obj_released();
    void on_RX2OnButton_Obj_released();
    void on_Filter1Button_Obj_released();
    void on_Filter2Button_Obj_released();
    void on_Filter3Button_Obj_released();
    void on_Filter4Button_Obj_released();
    void on_Att1StepUpButton_Obj_released();
    void on_Att1StepDownButton_Obj_released();
    void on_Att2StepUpButton_Obj_released();
    void on_Att2StepDownButton_Obj_released();
    void on_PortRefreshButton_Obj_released();
    void on_COMComboBox_Obj_activated(int index);
    void on_BaudComboBox_Obj_activated(int index);
    void on_ConnectButton_Obj_released();
    void on_Atten1Edit_Obj_editingFinished();
    void on_Atten2Edit_Obj_editingFinished();
    void on_DisconnectButton_Obj_released();
};
#endif // MAINWINDOW_H
