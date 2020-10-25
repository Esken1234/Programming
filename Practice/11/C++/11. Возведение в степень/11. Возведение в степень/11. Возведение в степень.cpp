#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a,a1;
    int b, b1;
    
    cin >> a;
    cin >> b;
    a1 = a;
    b1 = sqrt(b * b);
    if (b >= 0) {
        if (b == 0) cout << 1;
        else if (b == 1) cout << a;
        else {
            for (int i = 2; i <= b; i += 1) {
                a = a * a1;
            }
            cout << a;
        }
    }
    else {
        if (b == -1) cout << 1 / a;
        else {
            for (int i = 2; i <= b1; i += 1) {
                a = a * a1;
            }
            cout << 1 / a;
        }
    }
    






}
