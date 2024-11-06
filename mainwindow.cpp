#include "mainwindow.h"
// #include <QSerialPortInfo>
// #include <QSerialPort>
#include "Serial_Port.h"
#include <QMessageBox>
#include <cstdint>

// uint8_t Data1 = 0;
// uint8_t Data2 = 0;
// uint8_t Data3 = 0;
// uint8_t Data4 = 0;
Total_Data_t Total_Data;
QByteArray QArray;
uint8_t Atten1 = 0;
uint8_t Atten2 = 0;
char Str[50];
QString QStr;
extern QSerialPortInfo Serial_Port_Info;
extern QSerialPort Serial_Port;
QList Ports_Available = Serial_Port_Info.availablePorts();
QList Baud_Rates = Serial_Port_Info.standardBaudRates();
char User_COM[10];
char User_Baud[10];
char User_DataBits[10];
char User_StopBit[10];
char User_Parity[10];
//extern QMessageBox *Message_Dialog_P;
void Command_String(void);

void Command_String(void)
{
    QArray.setRawData((char *)&Total_Data, 4);
    //sprintf()
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
}

MainWindow::~MainWindow() {}

void MainWindow::on_PowerOffButton_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 & 0b11111110;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_PowerOnButton_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 | 0b00000001;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_RX1OffButton_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 & 0b11111101;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_RX1OnButton_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 | 0b00000010;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_RX2OffButton_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 & 0b11111011;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_RX2OnButton_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 | 0b00000100;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Filter1Button_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 & 0b11001111;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Filter2Button_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 & 0b11001111;
    Total_Data.Data1 = Total_Data.Data1 | 0b00010000;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Filter3Button_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 & 0b11001111;
    Total_Data.Data1 = Total_Data.Data1 | 0b00100000;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Filter4Button_Obj_released()
{
    Total_Data.Data1 = Total_Data.Data1 | 0b00110000;
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Att1StepUpButton_Obj_released()
{
    Atten1++;
    if(Atten1 > 63) {Atten1 = 63;}
    Total_Data.Data2 = Atten1;
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%f", (float)Atten1/2);
    Atten1Edit_Obj->setText(Str);
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Att1StepDownButton_Obj_released()
{
    Atten1--;
    if(Atten1 > 63) {Atten1 = 0;}
    Total_Data.Data2 = Atten1;
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%f", (float)Atten1/2);
    Atten1Edit_Obj->setText(Str);
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Att2StepUpButton_Obj_released()
{
    Atten2++;
    if(Atten2 > 31) {Atten2 = 31;}
    Total_Data.Data3 = Atten2;
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%f", (float)Atten2/2);
    Atten2Edit_Obj->setText(Str);
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_Att2StepDownButton_Obj_released()
{
    Atten2--;
    if(Atten2 > 31) {Atten2 = 0;}
    Total_Data.Data3 = Atten2;
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%f", (float)Atten2/2);
    Atten2Edit_Obj->setText(Str);
    Serial_Port_Send_TotalData(&Total_Data);
    memset(Str, 0, sizeof(Str));
    sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
    CommandsTextBrowser_Obj->insertPlainText(Str);
}


void MainWindow::on_PortRefreshButton_Obj_released()
{
    char L=0;
    char Ports_Count = 0;
    char Baud_Count = 0;
    char Str[50];
    char COM_Str[500];
    char Baud_Str[50];
    QVariant Variant;

    COMComboBox_Obj->clear();
    BaudComboBox_Obj->clear();

    Ports_Available = Serial_Port_Info.availablePorts();
    Baud_Rates = Serial_Port_Info.standardBaudRates();

    Ports_Count = Ports_Available.count();
    Baud_Count = Baud_Rates.count();

    //textBrowser->insertPlainText(Ports_Available.at(1).description()); textBrowser->insertPlainText("\r\n");
    //textBrowser->insertPlainText(Ports_Available.at(1).portName()); textBrowser->insertPlainText("\r\n");

    for(L=0; L<Ports_Count; L++)
    {
        sprintf(Str, "%s --> %s\r\n", Ports_Available.at(L).description().toLocal8Bit().data(), Ports_Available.at(L).portName().toLocal8Bit().data());
        strncat(COM_Str, Str, 50);
        // COMComboBox_Obj->insertItem(L, COM_Str, NULL);
        COMComboBox_Obj->insertItem(L, Ports_Available.at(L).portName(), Ports_Available.at(L).description());
    }

    for(L=0; L<Baud_Count; L++)
    {
        sprintf(Baud_Str, "%d", Baud_Rates.at(L));
        BaudComboBox_Obj->insertItem(L, Baud_Str, NULL);
    }

    DataComboBox_Obj->insertItem(0, "8", NULL);
    DataComboBox_Obj->insertItem(1, "7", NULL);
    DataComboBox_Obj->insertItem(2, "6", NULL);
    DataComboBox_Obj->insertItem(3, "5", NULL);

    StopComboBox_Obj->insertItem(0, "One", NULL);
    StopComboBox_Obj->insertItem(1, "One & Half", NULL);
    StopComboBox_Obj->insertItem(2, "Two", NULL);

    ParityComboBox_Obj->insertItem(0, "NoParity", NULL);
    ParityComboBox_Obj->insertItem(1, "EvenParity", NULL);
    ParityComboBox_Obj->insertItem(2, "OddParity", NULL);
    ParityComboBox_Obj->insertItem(3, "SpaceParity", NULL);
    ParityComboBox_Obj->insertItem(4, "MarkParity", NULL);

    //Message_Dialog_P->setText(COM_Str);
    //Message_Dialog_P->exec();
}


void MainWindow::on_COMComboBox_Obj_activated(int index)
{
    sprintf(User_COM, "%s", COMComboBox_Obj->currentText().toLocal8Bit().data());
    statusbar->showMessage(COMComboBox_Obj->currentData().toString(), 3000);
    //statusbar->showMessage(User_COM, 3000);
}


void MainWindow::on_BaudComboBox_Obj_activated(int index)
{
    sprintf(User_Baud, "%s", BaudComboBox_Obj->currentText().toLocal8Bit().data());
    statusbar->showMessage(User_Baud, 3000);
}


void MainWindow::on_ConnectButton_Obj_released()
{
    Serial_Port.setPortName(User_COM);
    Serial_Port.setBaudRate(atoi(User_Baud));
    //sprintf(User_DataBits, "%s", DataComboBox_Obj->currentText().toLocal8Bit().data());
    Serial_Port.setDataBits(QSerialPort::Data8); //Serial_Port.setDataBits((QSerialPort::DataBits)atoi(User_DataBits));
    Serial_Port.setStopBits(QSerialPort::OneStop);
    Serial_Port.setParity(QSerialPort::NoParity);
    Serial_Port.setFlowControl(QSerialPort::NoFlowControl);
    //Serial_Port.setReadBufferSize(256);
    Serial_Port.open(QIODeviceBase::ReadWrite);
    memset(&Total_Data, 0, sizeof(Total_Data));
}


void MainWindow::on_Atten1Edit_Obj_editingFinished()
{
    double Num = 0;
    Num = atof(Atten1Edit_Obj->text().toLocal8Bit().data());
    if( (Num>=0) && (Num<=31.5))
    {
        Atten1 = (uint8_t)(Num*2);
        Total_Data.Data2 = Atten1;
        Serial_Port_Send_TotalData(&Total_Data);
        memset(Str, 0, sizeof(Str));
        sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
        CommandsTextBrowser_Obj->insertPlainText(Str);
    }
    else
    {
        Atten1Edit_Obj->setText("Invalid");
    }
}


void MainWindow::on_Atten2Edit_Obj_editingFinished()
{
    double Num = 0;
    Num = atof(Atten2Edit_Obj->text().toLocal8Bit().data());
    if( (Num>=0) && (Num<=15.5))
    {
        Atten2 = (uint8_t)(Num*2);
        Total_Data.Data3 = Atten2;
        Serial_Port_Send_TotalData(&Total_Data);
        memset(Str, 0, sizeof(Str));
        sprintf(Str, "%02X-%02X-%02X-%02X\r\n",Total_Data.Data1, Total_Data.Data2, Total_Data.Data3, Total_Data.Data4);
        CommandsTextBrowser_Obj->insertPlainText(Str);
    }
    else
    {
        Atten2Edit_Obj->setText("Invalid");
    }
}


void MainWindow::on_DisconnectButton_Obj_released()
{
    Serial_Port.close();
}

