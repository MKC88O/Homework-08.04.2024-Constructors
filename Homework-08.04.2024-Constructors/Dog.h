#pragma once
#include <iostream>
using namespace std;

class Dog {
    string name;
    string color;
    string bread;
    string favoriteFood;
    double weight;
    string humanNames[100]{
        "Alexandr", "Kostya", "Roma", "Anya", "Lena",
        "Ivan", "Marina", "Sergey", "Olya", "Dima",
        "Tanya", "Andrey", "Natasha", "Vova", "Katya",
        "Artem", "Yulya", "Maxim", "Vika", "Pavlik",
        "Sveta", "Nikita", "Nina", "Denis", "Eva"
    };

public:
    
    Dog();
    Dog(string name, string color, string bread);
    Dog(string name, string color, string bread, double weight);
    Dog(string name, string color, string bread, string favorite_food);
    Dog(string color, string bread);

    void Bark() const;
    void Growl() const;
    void Walk();
    void Eat() const;
    void Sleep() const;
    void Print();

    void SetName(string name);
    void SetColor(string color);
    void SetBread(string bread);
    void SetFavoriteFood(string favorite_food);
    void SetWeight(double weight);

    string GetName() const;
    string GetColor() const;
    string GetBread() const;
    string GetFavoriteFood() const;
    double GetWeight() const;
};

