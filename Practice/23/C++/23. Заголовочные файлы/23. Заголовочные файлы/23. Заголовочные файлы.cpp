#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include "C:\Programming\Practice\23\C++\23. Заголовочные файлы\23. Заголовочные файлы\factor.h"
#include "C:\Programming\Practice\23\C++\23. Заголовочные файлы\23. Заголовочные файлы\so4et.h"
#include "C:\Programming\Practice\23\C++\23. Заголовочные файлы\23. Заголовочные файлы\sinx.h"
using namespace std;

int main()
{
    cout << "n   n!\n";
    for(int n=1;n<=10;n+=1) cout << n << "   " << factor(n) << "\n";

    cout << "\nx         sin (x)\n";
    for (double x = 0; x <= 0.785399; x += 0.0174533)
    {
        cout << std::fixed;
        std::cout << std::setprecision(5) << x << "   "<< sinx(x, 5)<<"\n";
    }

    cout << "\nk   C(k, 10)\n";
    for(int k = 1;k<=10;k+=1) cout<<k<<"   " << so4et(10,k)<<"\n";

    system("pause");
    return 0;
}