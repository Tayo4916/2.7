﻿// 2.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Из трехзначного числа х вычли его последнюю цифру.
//Когда результат разделили на 10, а к частному слева 
//приписали последнюю цифру числа х, то получили 237.
//Найти число х.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int x, y, z, a, b, c;
    cout << "Преобразованиями получили число 237.\n";
    x = 37 * 10 + 2;
    cout << "Число х: " << x << endl;
    z = 372 - 2;
    a = z / 10;
    b = 372 % 10;
    cout << "(После проверки) преобразованное число:  " << b << a << endl;
    _getch();
}
