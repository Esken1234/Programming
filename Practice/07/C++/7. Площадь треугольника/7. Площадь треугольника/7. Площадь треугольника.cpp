#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int i;
    double a, b, c, p, xa, xb, xc, ya, yb, yc;

    cout << "Выберите метод вычисления площади треугольника. Введите 1 для вычисления через длины сторон. Введите 2 для вычисления через координаты вершин.\n";
    cin >> i;
    if (i == 1) {
        cout << "Введите длины сторон a, b и c\n";
        cin >> a;
        cin >> b;
        cin >> c;

        if ((a < b + c) && (b < a + c) && (c < b + a)) {
            p = (a+b+c)/2;
            cout <<"Площадь треугольника равна " <<sqrt(p*(p-a)*(p-b)*(p-c))<<"\n";
        }
        else cout<<"\nТакого треугольника не существует\n";

    }
    else {
        if (i == 2) {
            cout << "Введите координаты вершин A(xa ya), B(xb yb) и C(xc yc). Вводите значение x, затем нажимаете на пробел и вводите значение y, далее нажимаете на enter и повторяете действия\n";
            cin >> xa; cin >> ya;
            cin >> xb; cin >> yb;
            cin >> xc; cin >> yc;
            cout <<"Площадь треугольника равна "<< 0.5 * sqrt(((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya)) * ((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya)))<<"\n";
        }
        else cout << "\nОшибочный ввод\n";
    }

    system("pause");
    return 0;


}