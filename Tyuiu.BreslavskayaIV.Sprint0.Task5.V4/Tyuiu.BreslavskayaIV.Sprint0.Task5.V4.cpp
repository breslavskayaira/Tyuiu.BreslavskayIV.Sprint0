// Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.cpp : Defines the functions for the static library.
//

#include <iostream>
#include "pch.h"
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    float b;
    float c;
    ISprint0Task5* date = new Service5();
    std::cout << "Расстояние до дачи: ";
    cin >> a;
    cout << "Расход бензина на 100 км: ";
    cin >> b;
    cout << "Цена за литр бензина: ";
    cin >> c;
    cout << "Стоимость бензина: ";
    cout << " Result =" << date->Zadacha(a, b, c);
    cout << endl;
}
