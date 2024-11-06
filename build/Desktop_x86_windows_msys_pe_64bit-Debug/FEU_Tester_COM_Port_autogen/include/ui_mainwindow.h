/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *Port_Settings_Group_Obj;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *COMComboBox_Obj;
    QComboBox *BaudComboBox_Obj;
    QComboBox *DataComboBox_Obj;
    QComboBox *StopComboBox_Obj;
    QComboBox *ParityComboBox_Obj;
    QPushButton *ConnectButton_Obj;
    QPushButton *DisconnectButton_Obj;
    QPushButton *PortRefreshButton_Obj;
    QGroupBox *Commands_Group_Obj;
    QPushButton *PowerOffButton_Obj;
    QPushButton *PowerOnButton_Obj;
    QPushButton *RX1OffButton_Obj;
    QPushButton *RX2OffButton_Obj;
    QPushButton *RX2OnButton_Obj;
    QPushButton *RX1OnButton_Obj;
    QPushButton *Filter3Button_Obj;
    QPushButton *Filter1Button_Obj;
    QPushButton *Filter4Button_Obj;
    QPushButton *Filter2Button_Obj;
    QPushButton *Att1StepUpButton_Obj;
    QPushButton *Att1StepDownButton_Obj;
    QPushButton *Att2StepDownButton_Obj;
    QPushButton *Att2StepUpButton_Obj;
    QLineEdit *Atten1Edit_Obj;
    QLineEdit *Atten2Edit_Obj;
    QTextBrowser *CommandsTextBrowser_Obj;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(798, 352);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Port_Settings_Group_Obj = new QGroupBox(centralwidget);
        Port_Settings_Group_Obj->setObjectName("Port_Settings_Group_Obj");
        Port_Settings_Group_Obj->setGeometry(QRect(10, 10, 201, 281));
        label = new QLabel(Port_Settings_Group_Obj);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 36, 53, 35));
        label_2 = new QLabel(Port_Settings_Group_Obj);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 73, 53, 35));
        label_3 = new QLabel(Port_Settings_Group_Obj);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 111, 53, 35));
        label_4 = new QLabel(Port_Settings_Group_Obj);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 150, 53, 35));
        label_5 = new QLabel(Port_Settings_Group_Obj);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 189, 53, 35));
        COMComboBox_Obj = new QComboBox(Port_Settings_Group_Obj);
        COMComboBox_Obj->setObjectName("COMComboBox_Obj");
        COMComboBox_Obj->setGeometry(QRect(90, 40, 72, 24));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(COMComboBox_Obj->sizePolicy().hasHeightForWidth());
        COMComboBox_Obj->setSizePolicy(sizePolicy);
        COMComboBox_Obj->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        BaudComboBox_Obj = new QComboBox(Port_Settings_Group_Obj);
        BaudComboBox_Obj->setObjectName("BaudComboBox_Obj");
        BaudComboBox_Obj->setGeometry(QRect(90, 78, 72, 24));
        DataComboBox_Obj = new QComboBox(Port_Settings_Group_Obj);
        DataComboBox_Obj->setObjectName("DataComboBox_Obj");
        DataComboBox_Obj->setGeometry(QRect(90, 116, 72, 24));
        StopComboBox_Obj = new QComboBox(Port_Settings_Group_Obj);
        StopComboBox_Obj->setObjectName("StopComboBox_Obj");
        StopComboBox_Obj->setGeometry(QRect(90, 155, 72, 24));
        ParityComboBox_Obj = new QComboBox(Port_Settings_Group_Obj);
        ParityComboBox_Obj->setObjectName("ParityComboBox_Obj");
        ParityComboBox_Obj->setGeometry(QRect(90, 194, 72, 24));
        ConnectButton_Obj = new QPushButton(Port_Settings_Group_Obj);
        ConnectButton_Obj->setObjectName("ConnectButton_Obj");
        ConnectButton_Obj->setGeometry(QRect(10, 240, 80, 24));
        DisconnectButton_Obj = new QPushButton(Port_Settings_Group_Obj);
        DisconnectButton_Obj->setObjectName("DisconnectButton_Obj");
        DisconnectButton_Obj->setGeometry(QRect(110, 240, 80, 24));
        PortRefreshButton_Obj = new QPushButton(Port_Settings_Group_Obj);
        PortRefreshButton_Obj->setObjectName("PortRefreshButton_Obj");
        PortRefreshButton_Obj->setGeometry(QRect(170, 40, 21, 24));
        Commands_Group_Obj = new QGroupBox(centralwidget);
        Commands_Group_Obj->setObjectName("Commands_Group_Obj");
        Commands_Group_Obj->setGeometry(QRect(230, 10, 551, 281));
        PowerOffButton_Obj = new QPushButton(Commands_Group_Obj);
        PowerOffButton_Obj->setObjectName("PowerOffButton_Obj");
        PowerOffButton_Obj->setGeometry(QRect(20, 30, 80, 24));
        PowerOnButton_Obj = new QPushButton(Commands_Group_Obj);
        PowerOnButton_Obj->setObjectName("PowerOnButton_Obj");
        PowerOnButton_Obj->setGeometry(QRect(20, 70, 80, 24));
        RX1OffButton_Obj = new QPushButton(Commands_Group_Obj);
        RX1OffButton_Obj->setObjectName("RX1OffButton_Obj");
        RX1OffButton_Obj->setGeometry(QRect(140, 30, 80, 24));
        RX2OffButton_Obj = new QPushButton(Commands_Group_Obj);
        RX2OffButton_Obj->setObjectName("RX2OffButton_Obj");
        RX2OffButton_Obj->setGeometry(QRect(140, 70, 80, 24));
        RX2OnButton_Obj = new QPushButton(Commands_Group_Obj);
        RX2OnButton_Obj->setObjectName("RX2OnButton_Obj");
        RX2OnButton_Obj->setGeometry(QRect(230, 70, 80, 24));
        RX1OnButton_Obj = new QPushButton(Commands_Group_Obj);
        RX1OnButton_Obj->setObjectName("RX1OnButton_Obj");
        RX1OnButton_Obj->setGeometry(QRect(230, 30, 80, 24));
        Filter3Button_Obj = new QPushButton(Commands_Group_Obj);
        Filter3Button_Obj->setObjectName("Filter3Button_Obj");
        Filter3Button_Obj->setGeometry(QRect(350, 70, 80, 24));
        Filter1Button_Obj = new QPushButton(Commands_Group_Obj);
        Filter1Button_Obj->setObjectName("Filter1Button_Obj");
        Filter1Button_Obj->setGeometry(QRect(350, 30, 80, 24));
        Filter4Button_Obj = new QPushButton(Commands_Group_Obj);
        Filter4Button_Obj->setObjectName("Filter4Button_Obj");
        Filter4Button_Obj->setGeometry(QRect(440, 70, 80, 24));
        Filter2Button_Obj = new QPushButton(Commands_Group_Obj);
        Filter2Button_Obj->setObjectName("Filter2Button_Obj");
        Filter2Button_Obj->setGeometry(QRect(440, 30, 80, 24));
        Att1StepUpButton_Obj = new QPushButton(Commands_Group_Obj);
        Att1StepUpButton_Obj->setObjectName("Att1StepUpButton_Obj");
        Att1StepUpButton_Obj->setGeometry(QRect(320, 120, 91, 24));
        Att1StepDownButton_Obj = new QPushButton(Commands_Group_Obj);
        Att1StepDownButton_Obj->setObjectName("Att1StepDownButton_Obj");
        Att1StepDownButton_Obj->setGeometry(QRect(320, 180, 91, 24));
        Att2StepDownButton_Obj = new QPushButton(Commands_Group_Obj);
        Att2StepDownButton_Obj->setObjectName("Att2StepDownButton_Obj");
        Att2StepDownButton_Obj->setGeometry(QRect(430, 180, 91, 24));
        Att2StepUpButton_Obj = new QPushButton(Commands_Group_Obj);
        Att2StepUpButton_Obj->setObjectName("Att2StepUpButton_Obj");
        Att2StepUpButton_Obj->setGeometry(QRect(430, 120, 91, 24));
        Atten1Edit_Obj = new QLineEdit(Commands_Group_Obj);
        Atten1Edit_Obj->setObjectName("Atten1Edit_Obj");
        Atten1Edit_Obj->setGeometry(QRect(330, 150, 71, 24));
        Atten1Edit_Obj->setReadOnly(false);
        Atten2Edit_Obj = new QLineEdit(Commands_Group_Obj);
        Atten2Edit_Obj->setObjectName("Atten2Edit_Obj");
        Atten2Edit_Obj->setGeometry(QRect(440, 150, 71, 24));
        Atten2Edit_Obj->setReadOnly(false);
        Atten2Edit_Obj->setClearButtonEnabled(false);
        CommandsTextBrowser_Obj = new QTextBrowser(Commands_Group_Obj);
        CommandsTextBrowser_Obj->setObjectName("CommandsTextBrowser_Obj");
        CommandsTextBrowser_Obj->setGeometry(QRect(20, 110, 261, 151));
        CommandsTextBrowser_Obj->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        line_2 = new QFrame(Commands_Group_Obj);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(120, 30, 3, 61));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line = new QFrame(Commands_Group_Obj);
        line->setObjectName("line");
        line->setGeometry(QRect(330, 30, 3, 61));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(Commands_Group_Obj);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(347, 100, 171, 20));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 798, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Port_Settings_Group_Obj->setTitle(QCoreApplication::translate("MainWindow", "Port Settings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "COM:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Baud rate:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Data bits:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Stop bit:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Parity bit:", nullptr));
        ConnectButton_Obj->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        DisconnectButton_Obj->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        PortRefreshButton_Obj->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        Commands_Group_Obj->setTitle(QCoreApplication::translate("MainWindow", "Commands", nullptr));
        PowerOffButton_Obj->setText(QCoreApplication::translate("MainWindow", "Power OFF", nullptr));
        PowerOnButton_Obj->setText(QCoreApplication::translate("MainWindow", "Power ON", nullptr));
        RX1OffButton_Obj->setText(QCoreApplication::translate("MainWindow", "RX1 OFF", nullptr));
        RX2OffButton_Obj->setText(QCoreApplication::translate("MainWindow", "RX2 OFF", nullptr));
        RX2OnButton_Obj->setText(QCoreApplication::translate("MainWindow", "RX2 ON", nullptr));
        RX1OnButton_Obj->setText(QCoreApplication::translate("MainWindow", "RX1 ON", nullptr));
        Filter3Button_Obj->setText(QCoreApplication::translate("MainWindow", "Filter 3", nullptr));
        Filter1Button_Obj->setText(QCoreApplication::translate("MainWindow", "Filter 1", nullptr));
        Filter4Button_Obj->setText(QCoreApplication::translate("MainWindow", "Filter 4", nullptr));
        Filter2Button_Obj->setText(QCoreApplication::translate("MainWindow", "Filter 2", nullptr));
        Att1StepUpButton_Obj->setText(QCoreApplication::translate("MainWindow", "Att1 Step Up", nullptr));
        Att1StepDownButton_Obj->setText(QCoreApplication::translate("MainWindow", "Att1 Step Down", nullptr));
        Att2StepDownButton_Obj->setText(QCoreApplication::translate("MainWindow", "Att2 Step Down", nullptr));
        Att2StepUpButton_Obj->setText(QCoreApplication::translate("MainWindow", "Att2 Step Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
