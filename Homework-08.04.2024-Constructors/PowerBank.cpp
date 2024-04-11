#include "PowerBank.h"

PowerBank::PowerBank() {
    SetBrand("Noname");
    SetColor("Black");
    SetQuantityPorts(4);
    SetCapacity(20000);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}

PowerBank::PowerBank(string brand) {
    SetBrand(brand);
    SetColor("Black");
    SetQuantityPorts(4);
    SetCapacity(20000);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}

PowerBank::PowerBank(string brand, string color) {
    SetBrand(brand);
    SetColor(color);
    SetQuantityPorts(4);
    SetCapacity(20000);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}

PowerBank::PowerBank(string brand, string color, double capacity) {
    SetBrand(brand);
    SetColor(color);
    SetQuantityPorts(4);
    SetCapacity(capacity);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}

PowerBank::PowerBank(string brand, double capacity) {
    SetBrand(brand);
    SetColor("Black");
    SetQuantityPorts(4);
    SetCapacity(capacity);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}

PowerBank::PowerBank(double capacity, string color) {
    SetBrand("Noname");
    SetColor(color);
    SetQuantityPorts(4);
    SetCapacity(capacity);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}

PowerBank::PowerBank(double capacity) {
    SetBrand("Noname");
    SetColor("Black");
    SetQuantityPorts(4);
    SetCapacity(capacity);
    SetTypeC(true);
    SetUSB(false);
    SetMicroUSB(true);
    SetCharg(true);
}
void PowerBank::Charging() const {
    if ((Type_C || Micro_USB) && !USB && charg) {
        cout << "Power bank charge the device.\n\n";
    }
    else if (USB) {
        cout << "Power bank charging.\n\n";
    }
}

void  PowerBank::PowerBankInfo() const {
    cout << "Power Bank Info:\n";
    cout << "\t\tBrand: " << brand << "\n";
    cout << "\t\tColor: " << color << "\n";
    cout << "\t\tQuantity USB-ports: " << quantity_ports << "\n";
    cout << "\t\tCapacity: " << capacity << " mA/h\n";
    if (Type_C) {
        cout << "\t\tHave Type C-port \n";
    }
    if (Micro_USB) {
        cout << "\t\tHave Micro USB-port \n";
    }
    cout << "\n\n";
}

void PowerBank::SetBrand(string brand) {
    this->brand = brand;
}

string PowerBank::GetBrand() const {
    return brand;
}

void PowerBank::SetColor(string color) {
    this->color = color;
}

string PowerBank::GetColor() const {
    return color;
}

void PowerBank::SetQuantityPorts(int quantity_ports) {
    this->quantity_ports = quantity_ports;
}

int PowerBank::GetQuantityPorts() const {
    return quantity_ports;
}

void PowerBank::SetCapacity(double capacity) {
    this->capacity = capacity;
}

double PowerBank::GetCapacity() const {
    return capacity;
}

void PowerBank::SetTypeC(bool Type_C) {
    this->Type_C = Type_C;
}

bool PowerBank::GetTypeC() const {
    return Type_C;
}

void PowerBank::SetUSB(bool USB) {
    this->USB = USB;
}

bool PowerBank::GetUSB() const {
    return USB;
}

void PowerBank::SetMicroUSB(bool Micro_USB) {
    this->Micro_USB = Micro_USB;
}

bool PowerBank::GetMicroUSB() const {
    return Micro_USB;
}

void PowerBank::SetCharg(bool charg) {
    this->charg = charg;
}

bool PowerBank::GetCharg() const {
    return charg;
}

    
