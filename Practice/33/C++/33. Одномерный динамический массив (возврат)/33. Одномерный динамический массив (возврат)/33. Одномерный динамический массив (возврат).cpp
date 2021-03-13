#include <iostream>
using namespace std;

int* create(int size, int a = 0, int i = 0) {
    int* p = new int[size];
    for (int j = 0; j < size; j++) {
        p[j] = a;
        a = a + i;
    }
    return p;
}

int* sort(int* p, int size) {
    int buff = 0;
    int i, j;
    for (i = 1; i < size; i++)
    {
        buff = p[i];
        for (j = i - 1; j >= 0 && p[j] > buff; j--)
            p[j + 1] = p[j];

        p[j + 1] = buff;
    }
    return p;
}

int print(int* p, int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        if (i != (size - 1)) {
            cout << p[i] << ", ";
        }
        else {
            cout << p[i];
        }
    }
    cout << "]";
    cout << "\n";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int size, a, i;
    cout << "Введите размер массива\n";
    cin >> size; 
    cout << "Введите первый элемент\n";
    cin >> a;
    cout << "Введите шаг\n";
    cin >> i;
    int* p = create(size, a, i);
    p = sort(p, size);
    print(p, size);
    delete[] p;
    system("pause");
    return 0;
}