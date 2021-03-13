#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cin >> x;
    for (int j = 1; j <= x; j++) {
        char a[10] = "\0";
        cin >> a;
        if (a[0] == 'a') {
            if (a[4] == '5') {
                if (a[5] == '5') {
                    if (a[6] == '6') {
                        if (a[7] == '6') {
                            if (a[8] == '1') {
                                for (int i = 0; i < 10; i++) { cout << a[i]; } cout << "\n";
                            }
                            else cout << -1 << "\n";
                        }
                        else cout << -1 << "\n";
                    }
                    else cout << -1 << "\n";
                }
                else cout << -1 << "\n";
            }
            else cout << -1 << "\n";
        }
        else cout << -1 << "\n";
    }
    system("pause");
    return 0;
}