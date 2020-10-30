#include <iostream>
#include <cstdlib>
using namespace std;

double BMI(double weight, double height) {return (weight / (height * height));}
void printBMI(double BMI) {
    if (BMI < 18.5) cout << "Underweight\n";
    else if ((BMI >= 18.5) && (BMI < 25.0)) cout << "Normal weight\n";
    else if ((BMI >= 25.0) && (BMI < 30.0)) cout << "Overweight\n";
    else if (BMI >= 30.0) cout << "Obesity\n";
}
int main()
{
    double a,b,b1;
    cin >> a >> b;
    b1 = b / 100;
    double x = BMI(a,b1);
    printBMI(x);

    system("pause");
    return 0;
}