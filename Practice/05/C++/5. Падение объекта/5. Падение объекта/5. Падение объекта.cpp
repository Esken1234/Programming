#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x0, v0, t;
    cout << "x0 = ";
    cin >> x0;
    cout << "\n";
    cout << "v0 = ";
    cin >> v0;
    cout << "\n";
    cout << "t = ";
    cin >> t;
    cout << "\n";
    cout << "x(t) = " << x0 + v0 * t - ((9.8 * t * t) / 2);



}