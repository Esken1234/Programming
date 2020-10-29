#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    if (n == 2) {cout << "Простое\n"; system("pause"); return 0;}
    else {
        for (int i = 2; i <= n; i += 1) {
            if (!(n % i)) { if (i < n) { cout << "Составное\n"; system("pause"); return 0; } }
            else if (i = n) { cout << "Простое\n"; system("pause"); return 0;}
            else break;
        }
    }
}