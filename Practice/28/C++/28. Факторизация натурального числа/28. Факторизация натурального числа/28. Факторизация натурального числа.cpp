#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void print_factorization(unsigned int n) {
    std::vector<int> b;
    int i = 2;
    int j = 0;
    int w = 1;
    int q = 0;
    int qw = 0;
    int n1 = n;
    while (i) {
        if (!(n1 % i)) {
            n1 = n1 / i;
            b.push_back(i);
            i = 2;
        }
        else { i++; }
        if ((n1 / i) == 1) {

            b.push_back(n1);
            i = 0;
        }
    }
    for (; q < b.capacity(); q++) {
        if ((b.capacity()) > 1) {
            if (q < (b.capacity() - 1)) {
                if (b[q] == b[q + 1]) {
                    w = w + 1;
                }
                else {
                    if (w == 1) {
                        if (!(q == 0)) {
                            cout << "*";
                        }
                        cout << b[q];
                        qw++;
                    }
                    else {
                        cout << b[q] << "^" << w;
                        w = 1;
                        qw++;
                    }
                }
            }
            else {
                if (b[q] == b[q - 1]) {
                    w = w + 1;
                }
                else {
                    if (w == 1) {
                        cout << "*" << b[q];
                        qw++;
                    }
                    else {
                        cout << b[q] << "^" << w;
                        w = 1;
                        qw++;
                    }
                }
            }
        }
        else {
            cout << b[0];
            qw++;
        }
    }
    if (qw < 2) {
        cout <<"*"<< b[q-1] << "^" << w-1;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    cin >> a;

    print_factorization(a);

    cout << "\n";

    system("pause");
    return 0;
}