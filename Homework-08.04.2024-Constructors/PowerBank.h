#pragma once
#include <iostream>
using namespace std;

class PowerBank {
    string brand;
    string color;
    int quantity_ports = 0;
    double capacity = 0;
    bool Type_C = false;
    bool USB = false;
    bool Micro_USB = false;
    bool charg = false;

public:
    PowerBank();
    PowerBank(string brand);
    PowerBank(string brand, string color);
    PowerBank(string brand, string color, double capacity);
    PowerBank(string brand, double capacity);
    PowerBank(double capacity, string color);
    PowerBank(double capacity);

    void Charging() const;
    void  PowerBankInfo() const;

    void SetBrand(string brand);
    void SetColor(string color);
    void SetQuantityPorts(int quantity_ports);
    void SetCapacity(double capacity);
    void SetTypeC(bool Type_C);
    void SetUSB(bool USB);
    void SetMicroUSB(bool Micro_USB);
    void SetCharg(bool charg);
    
    string GetBrand() const;
    string GetColor() const;
    int GetQuantityPorts() const;
    double GetCapacity() const;
    bool GetTypeC() const;
    bool GetUSB() const;
    bool GetMicroUSB() const;
    bool GetCharg() const;
};

