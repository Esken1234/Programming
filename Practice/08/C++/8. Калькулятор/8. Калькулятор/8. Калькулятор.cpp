#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string b;
    double a, c;

    cout <<"Введите пример\n";
    cin >> a >> b >> c;
    cout<< "\n";
    if (b=="*") {
        cout << a * c;
    }
    else {
        if (b == "-") {
            cout << a - c;
        }
        else {
            if (b == "+") {
                cout << a + c;
            }
            else {
                if (b == ":") {
                    cout << a / c;
                }
                else cout << "\nПроверьте правильность введённых данных";
            }
        }
    }






}