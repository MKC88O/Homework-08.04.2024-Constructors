#pragma once
#include <iostream>
using namespace std;

class TV {
    string brand;
    string model;
    double diagonal = 0;
    string color;

public:
    TV();
    TV(string brand);
    TV(string brand, string model);
    TV(string brand, string model, string color);
    TV(string brand, string model, string color, double digonal);

    void TVInfo() const;
    void TV_On();
    void TV_Off();
    void changeChannel(int channel);
    void printTV();

    void SetBrand(string brand);
    void SetModel(string model);
    void SetDiagonal(double diagonal);
    void SetColor(string color);

    string GetBrand() const;
    string GetModel() const;
    double GetDiagonal() const;
    string GetColor() const;
};
