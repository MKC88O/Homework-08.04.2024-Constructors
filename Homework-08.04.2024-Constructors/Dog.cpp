#include "Dog.h"
#include <iostream>

Dog::Dog() {
    SetName("Benya");
    SetFavoriteFood("meat");
    SetBread("Pikines ");
    SetWeight(6);
    SetColor("beige");
}

Dog::Dog(string name, string color, string bread) {
    SetName(name);
    SetFavoriteFood("meat");
    SetBread(bread);
    SetWeight(6);
    SetColor(color);
}

Dog::Dog(string name, string color, string bread, double weight) {
    SetName(name);
    SetFavoriteFood("meat");
    SetBread(bread);
    SetWeight(weight);
    SetColor(color);
}

Dog::Dog(string name, string color, string bread, string favorite_food) {
    SetName(name);
    SetFavoriteFood(favorite_food);
    SetBread(bread);
    SetWeight(6);
    SetColor(color);
}

Dog::Dog(string color, string bread) {
    SetName("Lordik");
    SetFavoriteFood("meat");
    SetBread(bread);
    SetWeight(6);
    SetColor(color);
}


 void Dog::Bark() const {
     cout << bread << " " << name << " : " << "Tyav-Tyav...\n";
 }  

 void Dog::Growl() const {
     cout << bread << " " << name << " : " << "R-R-R-R-R-R...\n";
 }

 void Dog::Walk() {
     cout << " loves to walk in the park.";
 }

 void Dog::Eat() const {
     cout << bread << " " << name << " love eat " << favoriteFood << ".\n";
 }

 void Dog::Sleep() const {
     cout << bread << " " << name << " went to sleep.\n";
 }

 void Dog::Print() {
     cout << name << " color is " << color << ".\n";
     if (weight < 8) {
         Bark();
     }
     else {
         Growl();
     }
     cout << name << "";
     Walk();
     cout << name << " was " << weight << " kg.\n";
     Eat();
     cout << name << " now " << weight + 1 << " kg.\n";
     cout << "And ";
     Sleep();
     cout << "\n\n";
 }

 void Dog::SetName(string name) {
     for (int i = 0; i < 25; i++) {
         if (name == humanNames[i]) {
             throw "ERROR!";
         }
         this->name = name;
     }

 }

 string Dog::GetName() const {
     return name;
 }

 void Dog::SetColor(string color) {
     if (color == "Orange" || color == "Green" || color == "Blue" ||
         color == "Pink" || color == "Red" || color == "Salatovyi" ||
         color == "Malinovyi") {
         throw "ERROR!";
     }
     this->color = color;
 }

 string Dog::GetColor() const {
     return color;
 }

 void Dog::SetBread(string bread) {

     this->bread = bread;
 }

 string Dog::GetBread() const {
     return bread;
 }

 void Dog::SetFavoriteFood(string favorite_food) {
     if (favorite_food == "Krosovki") {
         throw "ERROR!";
     }
     this->favoriteFood = favorite_food;
 }

 string Dog::GetFavoriteFood() const {
     return favoriteFood;
 }

 void Dog::SetWeight(double weight) {
     if (weight < 0 || weight > 100) {
         throw "ERROR!";
     }
     this->weight = weight;
 }

 double Dog::GetWeight() const {
     return weight;
 }



   
