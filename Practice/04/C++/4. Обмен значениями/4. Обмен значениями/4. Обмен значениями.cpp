#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, a1, b1;
    cout << "а = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    a1 = a; b1 = b; b = a1; a = b1; //a1 = b; b1 = a;
    cout << "Тепереь а равно " << a << "\n" << "А b теперь " << b << "\n";

    int x, y;
    cout << "a = ";
    cin >> x;
    cout << "b = ";
    cin >> y;
    swap(x, y);
    cout << "Тепереь а равно " << x << "\n" << "А b теперь " << y<<"\n";
    system("pause");
    return 0;
}