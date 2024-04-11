#include "Sosed.h"

Sosed::Sosed() {
    SetName("Arkadiy");
    SetShoes("Chugunnye Bashmaki");
    SetTool("Perforator");
    SetSleeping(true);
    SetMentalCondition("CRAZYYY!");
}

Sosed::Sosed(string name) {
    SetName(name);
    SetShoes("Chugunnye Bashmaki");
    SetTool("Perforator");
    SetSleeping(true);
    SetMentalCondition("CRAZYYY!");
}

Sosed::Sosed(string name, string shoes) {
    SetName(name);
    SetShoes(shoes);
    SetTool("Perforator");
    SetSleeping(true);
    SetMentalCondition("CRAZYYY!");
}

Sosed::Sosed(string name, string shoes, string tool) {
    SetName(name);
    SetShoes(shoes);
    SetTool(tool);
    SetSleeping(true);
    SetMentalCondition("CRAZYYY!");
}

Sosed::Sosed(string name, string shoes, string tool, string mental_condition) {
    SetName(name);
    SetShoes(shoes);
    SetTool(tool);
    SetSleeping(true);
    SetMentalCondition(mental_condition);
}

void Sosed::Never_sleep() {
    cout << "A-HA-HA!!! NO, NO, NO\n";
}

void Sosed::About_myself() const {
    cout << "My name is " << name << ", i am a " << mental_condition << " And i have a " << tool << "\n";
}

void Sosed::Work() const {
    cout << "I'll put my on now " << shoes << " and take my " << tool << "\n";
    cout << "I urgently need to do something. NOW!\n";
}

void Sosed::printSosed() {
    if (GetSleeping()) {
        Never_sleep();
        About_myself();
        Work();
        cout << "\n\n";
    }
}

void Sosed::SetName(string name) {
    for (int i = 0; i < 27; i++) {
        if (name == NotHumanNames[i]) {
            throw "ERROR!";
        }
        this->name = name;
    }
}

string Sosed::GetName() const {
    return name;
}

void Sosed::SetShoes(string shoes) {
    this->shoes = shoes;
}

string Sosed::GetShoes() const {
    return shoes;
}

void Sosed::SetTool(string tool) {

    this->tool = tool;

}

string Sosed::GetTool() const {
    return tool;
}

void Sosed::SetSleeping(bool sleeping) {

    this->sleeping = sleeping;

}

bool Sosed::GetSleeping() const {
    return sleeping;
}

void Sosed::SetMentalCondition(string mental_condition) {

    this->mental_condition = mental_condition;

}

string Sosed::GetMentalCondition() const {
    return mental_condition;
}


  
