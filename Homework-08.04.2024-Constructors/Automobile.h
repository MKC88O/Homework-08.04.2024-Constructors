#pragma once
#include <iostream>
using namespace std;

class Automobile {
    string brand;
    string model;
    string equipment;
    string engine_type;
    double engine_volume = 0;
    string fuel;
    string transmision;
    double power = 0;
    int wheel_drive = 0;

    string carBrands[31]{
        "Toyota", "Honda", "BMW", "Ford", "Chevrolet",
        "Volkswagen", "Tesla", "Audi", "Mercedes", "Subaru",
        "Nissan", "Jeep", "Hyundai", "Kia", "Mazda",
        "Lexus", "Porsche", "Volvo", "Jaguar", "Land Rover",
        "Chevrolet", "Ferrari", "Lamborgini", "Moskvich", "VAZ",
        "ZAZ", "Opel", "Reno", "Peugeot", "Seat", "Suzuki"

    };

public:
    Automobile();
    Automobile(string brand);
    Automobile(string brand, string model);
    Automobile(string brand, string model, string fuel);
    Automobile(string brand, string model, string fuel, double engine_volume);

    void CarInfo() const;

    void SetBrand(string brand);
    void SetModel(string model);
    void SetEquipment(string equipment);
    void SetEngineType(string engine_type);
    void SetEngineVolume(double engine_volume);
    void SetFuel(string fuel);
    void SetTransmision(string transmision);
    void SetPower(double power);
    void SetWheelDrive(int wheel_drive);

    string GetBrand() const;
    string GetModel() const;
    string GetEquipment() const;
    string GetEngineType() const;
    double GetEngineVolume() const;
    string GetFuel() const;
    string GetTransmision() const;
    double GetPower() const;
    int GetWheelDrive() const;
};

