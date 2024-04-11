#include "Mouse.h"

Mouse::Mouse() {
    SetBrand("NoName");
    SetModel("NoName8000ZX");
    SetColor("Black");
    SetWireless(true);
    SetLeftButton(false);
    SetRightButton(true);
    SetScrol(true);
}

Mouse::Mouse(string brand) {
    SetBrand(brand);
    SetModel("NoName8000ZX");
    SetColor("Black");
    SetWireless(true);
    SetLeftButton(false);
    SetRightButton(true);
    SetScrol(true);
}

Mouse::Mouse(string brand, string model) {
    SetBrand(brand);
    SetModel(model);
    SetColor("Black");
    SetWireless(true);
    SetLeftButton(false);
    SetRightButton(true);
    SetScrol(true);
}

Mouse::Mouse(string brand, string model, string color) {
    SetBrand(brand);
    SetModel(model);
    SetColor(color);
    SetWireless(true);
    SetLeftButton(false);
    SetRightButton(true);
    SetScrol(true);
}

Mouse::Mouse(bool wireless) {
    SetBrand("NoName");
    SetModel("NoName8000ZX");
    SetColor("Black");
    SetWireless(wireless);
    SetLeftButton(false);
    SetRightButton(true);
    SetScrol(true);
}

void Mouse::Press_left_button() const {
    if (left_button) {
        cout << "Perform an action.\n";
    }
}

void Mouse::Press_right_button() const {
    if (right_button) {
        cout << "Show context menu.\n";
    }
}

void Mouse::Scrol() const {
    if (scrol) {
        cout << "Scroll....scrol...scrol...scrol...\n";
    }
}

void Mouse::MouseInfo() const {
    cout << "Mouse Info:\n";
    cout << "\tBrand: " << brand << "\n";
    cout << "\tModel: " << model << "\n";
    cout << "\tColor: " << color << "\n";
    if (wireless) {
        cout << "\tWired or wireless:  wireless.\n";
    }
    else {
        cout << "\tWired or wireless:  wired.\n";
    }
}

void Mouse::SetBrand(string brand) {
    this->brand = brand;
}

string Mouse::GetBrand() const {
    return brand;
}

void Mouse::SetModel(string model) {
    this->model = model;
}

string Mouse::GetModel() const {
    return model;
}

void Mouse::SetColor(string color) {
    this->color = color;
}

string Mouse::GetColor() const {
    return color;
}

void Mouse::SetWireless(bool wireless) {
    this->wireless = wireless;
}

bool Mouse::GetWireless() const {
    return wireless;
}

void Mouse::SetLeftButton(bool left_button) {
    this->left_button = left_button;
}

bool Mouse::GetLeftButton() const {
    return left_button;
}

void Mouse::SetRightButton(bool right_button) {
    this->right_button = right_button;
}

bool Mouse::GetRightButton() const {
    return right_button;
}

void Mouse::SetScrol(bool scrol) {
    this->scrol = scrol;
}

bool Mouse::GetScrol() const {
    return scrol;
}

