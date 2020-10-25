#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int h1, h2, m1, m2, a, b, c;
    char i;

    cout <<"Введите время первого человека\n";
    cin >> h1 >> i >> m1;
   
    
    cout << "\nВведите время второго человека\n";
    cin >> h2 >> i >> m2;

    a = (h1 * 60) + m1;
    b = (h2 * 60) + m2;
    c = sqrt((a - b)*(a-b));

    if (c <= 15)
        cout << "Встреча состоится";
    else
        cout << "Встреча не состоится";
    


}
