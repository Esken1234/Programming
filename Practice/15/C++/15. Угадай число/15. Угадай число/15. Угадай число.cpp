#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, a, x;
    
    for (int j = 1; j += 1;) {
        srand(time(0));
        n = rand() % 101;
        cout << "Давайте поиграем. Отгадайте заданное число. У вас есть 5 попыток. Приступим.\n Введите число\n";
        for (int i = 1; i <= 5; i += 1) {
            cin >> a;
            if (a == n) { cout << "\nПоздравляю! Вы угадали\n"; cout << "\nХотите начать сначала? (1 - ДА )\n"; cin >> x; if (x == 1) break; else return 0; }
            else if (i == 5) { cout<< "Вы проиграли.Было загадано : "<< n << "\nХотите начать сначала? (1 - ДА )\n"; cin >> x; if (x == 1) break; else return 0; } else if (n > a)cout << "\nЗагаданное число больше\n";
            else if (i == 5) { cout << "Вы проиграли.Было загадано : " << n<< "\nХотите начать сначала? (1 - ДА )\n"; cin >> x; if (x == 1) break; else return 0; } else cout << "\nЗагаданное число меньше\n";
        }
    }
    system("pause");
    return 0;
}