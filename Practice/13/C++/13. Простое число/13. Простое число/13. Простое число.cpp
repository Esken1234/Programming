#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    for (int i = 2; i < n; i += 1) {
        if (!(n % i)) { cout << "Составное"; return 0; }
        else if (i = n - 1) { cout << "Простое"; }
        else break;
    }
}