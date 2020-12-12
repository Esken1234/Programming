#include <iostream>
#include<vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n, f;
    int o = 1;
    int j = 0;
    std::vector<int> a;
    std::vector<int> b;
    cin >> n;
    for (int k = 0; k < n; k++) {
        cin >> f;
        a.push_back(f);
    }
    while (o < a.size()) {
        while (j < o) {
            b.push_back(a[j]);
            j = j + 1;
        }
        for (int i = 1; i < b.size(); ++i)
        {
            for (int r = 0; r < b.size() - i; r++)
            {
                if (b[r] < b[r + 1])
                {
                    int temp = b[r];
                    b[r] = b[r + 1];
                    b[r + 1] = temp;
                }
            }
        }
        if (b.size() > 4) {
            for (int y = 0; y < 5; y++) {
                cout << b[y] << " ";
            }
        }
        else {
            for (int y = 0; y < b.size(); y++) {
                cout << b[y] << " ";
            }
        }
        cout << "\n";
        o = o + 1;
    }
}