#include "TV.h"

TV::TV() {
    SetBrand("NoName");
    SetModel("NoName3000");
    SetDiagonal(48);
    SetColor("Black");
}

TV::TV(string brand) {
    SetBrand(brand);
    SetModel("NoName3000");
    SetDiagonal(48);
    SetColor("Black");
}

TV::TV(string brand, string model) {
    SetBrand(brand);
    SetModel(model);
    SetDiagonal(48);
    SetColor("Black");
}

TV::TV(string brand, string model, string color) {
    SetBrand(brand);
    SetModel(model);
    SetDiagonal(48);
    SetColor(color);
}

TV::TV(string brand, string model, string color, double digonal) {
    SetBrand(brand);
    SetModel(model);
    SetDiagonal(digonal);
    SetColor(color);
}

void TV::TVInfo() const {
    cout << "TV Info:\n";
    cout << "\tBrand: " << brand << "\n";
    cout << "\tModel: " << model << "\n";
    cout << "\tDiagonal: " << diagonal << " inches" << "\n";
    cout << "\tColor: " << color << "\n";
}

void TV::TV_On() {
    cout << "The TV turns on...\n";
}

void TV::TV_Off() {
    cout << "The TV turns off\n";
}

void TV::changeChannel(int channel) {
    cout << "Changing channel to " << channel << "\n";
}

void TV::printTV() {
    TVInfo();
    cout << "\n";
    TV_On();
    changeChannel(1);
    TV_Off();
    cout << "\n\n";
}

void TV::SetBrand(string brand) {
    this->brand = brand;
}

string TV::GetBrand() const {
    return brand;
}

void TV::SetModel(string model) {
    this->model = model;
}

string TV::GetModel() const {
    return model;
}

void TV::SetDiagonal(double diagonal) {
    this->diagonal = diagonal;
}

double TV::GetDiagonal() const {
    return diagonal;
}

void TV::SetColor(string color) {
    this->color = color;
}

string TV::GetColor() const {
    return color;
}


