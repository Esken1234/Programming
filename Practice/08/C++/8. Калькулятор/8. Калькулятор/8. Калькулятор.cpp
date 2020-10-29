#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string b;
    double a, c;

    cout <<"Введите пример(сумма +, разность -, произведение *, частное :)\n Вводить всё нужно через пробел\n";
    cin >> a >> b >> c;
    cout<< "\n";
    if (b=="*") {
        cout << a * c<<"\n";
    }
    else {
        if (b == "-") {
            cout << a - c<<"\n";
        }
        else {
            if (b == "+") {
                cout << a + c<<"\n";
            }
            else {
                if (b == ":") {
                    cout << a / c<<"\n";
                }
                else cout << "\nПроверьте правильность введённых данных\n";
            }
        }
    }

    system("pause");
    return 0;




}