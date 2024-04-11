#include "Automobile.h"

Automobile::Automobile() {
    SetBrand("Ford");
    SetModel("Fusion");
    SetEquipment("Titanium");
    SetEngineType("DVS");
    SetEngineVolume(2000.01);
    SetFuel("Gasoline");
    SetTransmision("Auto");
    SetPower(245);
    SetWheelDrive(2);
}

Automobile::Automobile(string brand) {
    SetBrand(brand);
    SetModel("Fusion");
    SetEquipment("Titanium");
    SetEngineType("DVS");
    SetEngineVolume(2000.01);
    SetFuel("Gasoline");
    SetTransmision("Auto");
    SetPower(245);
    SetWheelDrive(2);
}
Automobile::Automobile(string brand, string model) {
    SetBrand(brand);
    SetModel(model);
    SetEquipment("Titanium");
    SetEngineType("DVS");
    SetEngineVolume(2000.01);
    SetFuel("Gasoline");
    SetTransmision("Auto");
    SetPower(245);
    SetWheelDrive(2);
}

Automobile::Automobile(string brand, string model, string fuel) {
    SetBrand(brand);
    SetModel(model);
    SetEquipment("Titanium");
    SetEngineType("DVS");
    SetEngineVolume(2000.01);
    SetFuel(fuel);
    SetTransmision("Auto");
    SetPower(245);
    SetWheelDrive(2);
}

Automobile::Automobile(string brand, string model, string fuel, double engine_volume) {
    SetBrand(brand);
    SetModel(model);
    SetEquipment("Titanium");
    SetEngineType("DVS");
    SetEngineVolume(engine_volume);
    SetFuel(fuel);
    SetTransmision("Auto");
    SetPower(245);
    SetWheelDrive(2);
}

void Automobile::CarInfo() const {
    cout << "Car Information:\n";
    cout << "\t\tCar brand: " << brand << "\n";
    cout << "\t\tModel: " << model << "\n";
    cout << "\t\tCar equipment: " << equipment << "\n";
    cout << "\t\tEngine type: " << engine_type << "\n";
    cout << "\t\tEngine volume: " << engine_volume << " sm3\n";
    cout << "\t\tFuel: " << fuel << "\n";
    cout << "\t\tTransmision: " << transmision << "\n";
    cout << "\t\tEngine power: " << power << " hp\n";
    cout << "\t\tWheel drive: " << wheel_drive << " wheels\n";
    cout << "\n\n";
}

void Automobile::SetBrand(string brand) {
    for (int i = 0; i < 31; i++) {

        if (brand == carBrands[i]) {
            this->brand = brand;
            return;
        }
    }
    throw "ERROR!";
}

string Automobile::GetBrand() const {
    return brand;
}

void Automobile::SetModel(string model) {
    this->model = model;
}

string Automobile::GetModel() const {
    return model;
}

void Automobile::SetEquipment(string equipment) {
    this->equipment = equipment;
}

string Automobile::GetEquipment() const {
    return equipment;
}

void Automobile::SetEngineType(string engine_type) {
    this->engine_type = engine_type;
}

string Automobile::GetEngineType() const {
    return engine_type;
}

void Automobile::SetEngineVolume(double engine_volume) {
    this->engine_volume = engine_volume;
}

double Automobile::GetEngineVolume() const {
    return engine_volume;
}

void Automobile::SetFuel(string fuel) {
    this->fuel = fuel;
}

string Automobile::GetFuel() const {
    return fuel;
}

void Automobile::SetTransmision(string transmision) {
    this->transmision = transmision;
}

string Automobile::GetTransmision() const {
    return transmision;
}

void Automobile::SetPower(double power) {
    this->power = power;
}

double Automobile::GetPower() const {
    return power;
}

void Automobile::SetWheelDrive(int wheel_drive) {
    if (wheel_drive != 2 && wheel_drive != 4)
    {
        throw "ERROR!";
    }
    this->wheel_drive = wheel_drive;
}

int Automobile::GetWheelDrive() const {
    return wheel_drive;
}


    
