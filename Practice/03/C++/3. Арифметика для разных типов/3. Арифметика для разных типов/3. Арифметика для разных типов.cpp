﻿#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a1, b1;
    cout << "Введите первую переменную\n";
    cin >> a1;
    cout << "Введите вторую переменную\n";
    cin >> b1;
    cout << a1 << "+" << b1 << "=" << a1 + b1 << "\n";
    cout << a1 << "-" << b1 << "=" << a1 - b1 << "\n";
    cout << a1 << "*" << b1 << "=" << a1 * b1 << "\n";
    cout << a1 << ":" << b1 << "=" << a1 / b1 << "\n";

    double a2, b2;
    cout << "Введите первую переменную\n";
    cin >> a2;
    cout << "Введите вторую переменную\n";
    cin >> b2;
    cout << a2 << "+" << b2 << "=" << a2 + b2 << "\n";
    cout << a2 << "-" << b2 << "=" << a2 - b2 << "\n";
    cout << a2 << "*" << b2 << "=" << a2 * b2 << "\n";
    cout << a2 << ":" << b2 << "=" << a2 / b2 << "\n";

    int a3; double b3;
    cout << "Введите первую переменную\n";
    cin >> a3;
    cout << "Введите вторую переменную\n";
    cin >> b3;
    cout << a3 << "+" << b3 << "=" << a3 + b3 << "\n";
    cout << a3 << "-" << b3 << "=" << a3 - b3 << "\n";
    cout << a3 << "*" << b3 << "=" << a3 * b3 << "\n";
    cout << a3 << ":" << b3 << "=" << a3 / b3 << "\n";

    double a4; int b4;
    cout << "Введите первую переменную\n";
    cin >> a4;
    cout << "Введите вторую переменную\n";
    cin >> b4;
    cout << a4 << "+" << b4 << "=" << a4 + b4 << "\n";
    cout << a4 << "-" << b4 << "=" << a4 - b4 << "\n";
    cout << a4 << "*" << b4 << "=" << a4 * b4 << "\n";
    cout << a4 << ":" << b4 << "=" << a4 / b4 << "\n";
    system("pause");
    return 0;
}