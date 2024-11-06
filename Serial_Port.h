#ifndef SERIAL_PORT_H
#define SERIAL_PORT_H

#include <cstdint>
#include <QSerialPortInfo>
#include <QSerialPort>

extern QSerialPortInfo Serial_Port_Info;
extern QSerialPort Serial_Port;
// extern QList Ports_Available = Serial_Port_Info.availablePorts();
// extern QList Baud_Rates = Serial_Port_Info.standardBaudRates();

typedef struct
{
    uint8_t Data1;
    uint8_t Data2;
    uint8_t Data3;
    uint8_t Data4;
}Total_Data_t;

void Serial_Port_Send_TotalData(Total_Data_t *P);

#endif // SERIAL_PORT_H
