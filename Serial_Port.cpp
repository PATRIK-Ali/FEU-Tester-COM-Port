#include "Serial_Port.h"


QSerialPortInfo Serial_Port_Info;
QSerialPort Serial_Port;
// QList Ports_Available = Serial_Port_Info.availablePorts();
// QList Baud_Rates = Serial_Port_Info.standardBaudRates();

void Serial_Port_Send_TotalData(Total_Data_t *P)
{
    Serial_Port.write((char *)P, 4);
}
