#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, w2, w3,w4, D;
    string w1;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    D = (b * b) - 4 * a * c;
    w3 = (-b + sqrt(D)) / (2 * a);
    w4= (-b - sqrt(D)) / (2 * a);

    w2 = -c / b;

    w1 = "Такого значения х не существует";
    
    if (a == 0) {

        if (b == 0) {

            if (c == 0) {

                cout << "Корень уравнения любое значение х";

            }
            else {
                cout << w1;
            }
        }
        else {
            cout <<"x = "<<w2;
        }
        
    }
    else {
        if (D == 0) {
            cout << "x = " << -b / (2 * a);
        }
        else {
            if (D < 0) { cout << "Такого значения х не существует"; }
            else {
                cout << "x1 = " << w3 << "\n";
                cout << "x2 = " << w4;
            }
        }
    }
}