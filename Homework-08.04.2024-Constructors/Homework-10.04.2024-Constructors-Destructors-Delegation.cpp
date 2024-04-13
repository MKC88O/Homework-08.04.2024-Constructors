// Homework-10.04.2024-Constructors-Destructors-Delegation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include "Dog.h"
#include "PowerBank.h"
#include "Mouse.h"
#include "TV.h"
#include "Automobile.h"
#include "Sosed.h"

using namespace std;

int main()
{
    srand(time(0));
    ////////////////////////////////////////////////////////////////////////////                  DOG                    ///////////////////////////////////////////////////////////////// 
    Dog dog;
    dog.Print();

    Dog Belka("Grey", "Mops");
    Belka.Print();

    Dog Strelka("Strelka", "brown", "taxa");
    Strelka.Print();

    Dog Lordik("Lordik", "ginger", "Pikines", "oladushki");
    Lordik.Print();
   
    Dog Tuzik("Tuzik", "Black","Dvor`Ter`er", 25);
    Tuzik.Print();

    Dog copyDog = dog;
    copyDog.Print();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                  SOSED                    ///////////////////////////////////////////////////////////////

    Sosed sosed;
    sosed.printSosed();

    Sosed Petya("Petya");
    Petya.printSosed();

    Sosed Volodya("Volodya", "tapochki");
    Volodya.printSosed();

    Sosed Maxim("Maxim", "Krosovki", "notebook");
    Maxim.printSosed();

    Sosed Vasya("Vasya", "sapogi", "drel'", "normal'nyi patsan");
    Vasya.printSosed();
    
    Sosed copySosed = sosed;
    copySosed.printSosed();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                  AUTOMOBILE                    //////////////////////////////////////////////////////////

    Automobile car;
    car.CarInfo();

    Automobile car1("VAZ");
    car1.CarInfo();

    Automobile car2("VAZ", "2101");
    car2.CarInfo();

    Automobile car3("VAZ", "2101", "propan");
    car3.CarInfo();

    Automobile car4("VAZ", "2101", "propan", 1300);
    car4.CarInfo();

    Automobile copyCar = car4;
    copyCar.CarInfo();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                      TV                        //////////////////////////////////////////////////////////

    TV tv;
    tv.printTV();

    TV Samsung("Samsung");
    Samsung.printTV();

    TV LG("LG", "lg-800");
    LG.printTV();

    TV Philips("Philips", "Ph-800", "Gray");
    Philips.printTV();

    TV Xiaomi("Xiaomi", "Xi-800", "White", 60);
    Xiaomi.printTV();

    TV copyTV = tv;
    copyTV.printTV();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                      POWER BANK                        //////////////////////////////////////////////////////////

    PowerBank PB;
    PB.Charging();
    PB.PowerBankInfo();

    PowerBank PB1(25000);
    PB1.Charging();
    PB1.PowerBankInfo();

    PowerBank PB2(30020, "Yelow");
    PB2.Charging();
    PB2.PowerBankInfo();

    PowerBank PB3("PB3", 35020);
    PB3.Charging();
    PB3.PowerBankInfo();

    PowerBank PB4("PB4", "Green", 40000);
    PB4.Charging();
    PB4.PowerBankInfo();

    PowerBank PB5("PB5", "ReD");
    PB5.Charging();
    PB5.PowerBankInfo();
    
    PowerBank PB6("PB6");
    PB6.Charging();
    PB6.PowerBankInfo();

    PowerBank copyPB = PB;
    copyPB.PowerBankInfo();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////                      MOUSE                        //////////////////////////////////////////////////////////

    Mouse mouse;
    mouse.Press_left_button();
    mouse.Press_right_button();
    mouse.Scrol();
    cout << "\n";
    mouse.MouseInfo();

    Mouse mouse1(0);
    mouse1.MouseInfo();

    Mouse mouse2("Brand", "model");
    mouse2.MouseInfo();
   
    Mouse mouse3("Brand", "model", "gray");
    mouse3.MouseInfo();

    Mouse mouse4(string("Brand"));
    mouse4.MouseInfo();

    Mouse copyMouse = mouse;
    copyMouse.MouseInfo();
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
