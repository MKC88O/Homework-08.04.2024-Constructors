#pragma once
#include <iostream>
using namespace std;

class Sosed {
    string name;
    string shoes;
    string tool;
    bool sleeping = false;
    string mental_condition;
    string NotHumanNames[27] {
        "Lordik", "Barsik", "Murzik", "Rex", "Muhtar",
        "Bobik", "Sharik", "Pushok", "Zhuchka", "Bonya",
        "Tishka", "Ryzhik", "Belka", "Strelka", "Archi",
        "Beizi", "Chak", "Kit", "Simba", "Snezhok",
        "Tuzik", "Greta", "Volt", "Richi", "Kuzya",
        "Mus`ka", "Nafanya"
    };

public:
    Sosed();
    Sosed(string name);
    Sosed(string name, string shoes);
    Sosed(string name, string shoes, string tool);
    Sosed(string name, string shoes, string tool, string mental_condition);

    void Never_sleep();
    void About_myself() const;
    void Work() const;
    void printSosed();

    void SetName(string name);
    void SetShoes(string shoes);
    void SetTool(string tool);
    void SetSleeping(bool sleeping);
    void SetMentalCondition(string mental_condition);

    string GetName() const;
    string GetShoes() const;
    string GetTool() const;
    bool GetSleeping() const;
    string GetMentalCondition() const;
};

