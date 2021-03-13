#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Результат выражения 2+2*2 = "; cout << 2 + 2 * 2; cout << "\n";
    system("pause");
    return 0;
}