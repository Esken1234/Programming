#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 1;
    int n;
    cin >> n;
    int a = 2;
    if (n == 0) cout << 0 << "\n";
    else if(n == 1) cout << 1 << "\n";
    else {
        for (int i = 0; i <= n; i += 1) {
            a = a * 2;
            x = x + 1;
            if (a <= n);
            else { cout << x<<"\n"; break; }
        }
    }
    system("pause");
    return 0;






}
