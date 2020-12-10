#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

std::vector<int> aa;
std::vector<int> bb;
//std::vector< std::vector<int>> cc;

void BozoSort(int n1, vector<int>& a) {
	int i = 0;
	int j = 1;
	int r = 0;
	int g, h, w;
	std::vector<int> a1 = a;
	for (; i == 0;) {
		srand(time(0));
		g = rand() % n1;
		srand(time(0));
		h = rand() % n1;
		w = a1[g];
		a1[g] = a1[h];
		a1[h] = w;
		j = 1;
		r = 0;
		for (; j < n1; j++) {
			if (a1[j - 1] <= a1[j]) {
				r = r + 1;
			}
			else {
				r = 0;
			}
		}
		if (r == (n1 - 1)) {
			i = 1;
		}
	}
	a = a1;

	i = 0;
	j = 1;
	r = 0;
	for (; i == 0;) {
		srand(time(0));
		g = rand() % n1;
		srand(time(0));
		h = rand() % n1;
		w = a1[g];
		a1[g] = a1[h];
		a1[h] = w;
		j = 1;
		r = 0;
		for (; j < n1; j++) {
			if (a1[j - 1] >= a1[j]) {
				r = r + 1;
			}
			else {
				r = 0;
			}
		}
		if (r == (n1 - 1)) {
			i = 1;
		}
	}
	aa = a1;
}

void BozoSort(vector<int>& b) {
	int i = 0;
	int j = 1;
	int r = 0;
	int g, h, w;
	std::vector<int> b1 = b;
	for (; i == 0;) {
		srand(time(0));
		g = rand() % 3;
		srand(time(0));
		h = rand() % 3;
		w = b1[g];
		b1[g] = b1[h];
		b1[h] = w;
		j = 1;
		r = 0;
		for (; j < 3; j++) {
			if (b1[j - 1] <= b1[j]) {
				r = r + 1;
			}
			else {
				r = 0;
			}
		}
		if (r == 2) {
			i = 1;
		}
	}
	b = b1;

	i = 0;
	j = 1;
	r = 0;
	for (; i == 0;) {
		srand(time(0));
		g = rand() % 3;
		srand(time(0));
		h = rand() % 3;
		w = b1[g];
		b1[g] = b1[h];
		b1[h] = w;
		j = 1;
		r = 0;
		for (; j < 3; j++) {
			if (b1[j - 1] >= b1[j]) {
				r = r + 1;
			}
			else {
				r = 0;
			}
		}
		if (r == 2) {
			i = 1;
		}
	}
	bb = b1;
}

/*void BozoSort(int n1, int y, vector<vector<int>>& c) {
	int ii = 0;
	int j = 1;
	int r = 0;
	int g, g1, h, h1, w;
	std::vector<std::vector<int>> c1 = c;
	for (; ii == 0;) {
		srand(time(0));
		g = rand() % y;
		srand(time(0));
		g1 = rand() % y;
		srand(time(0));
		h = rand() % y;
		srand(time(0));
		h1 = rand() % y;
		w = c1[g][g1];
		c1[g][g1] = c1[h][h1];
		c1[h][h1] = w;
		j = 1;
		r = 0;

		for (int i = 0; i < (sqrt(n1)); i++) {
			for (; j < (sqrt(n1)); j++) {
				if (c1[i][j - 1] <= c1[i][j]) {
					if (i < y) {
						if ((c[i][y])<(c[i+1][0])){

						}
						else r = 0;
					}
					r = r + 1;
				}
				else r = 0;
			}
		}

		if (r == (n1 - 2)) {
			ii = 1;
		}
	}
	c = c1;
}*/

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, f;
	int o = 0;
	std::vector<int> a;
	std::vector<int> b;
	std::vector< std::vector<int>> c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f;
		a.push_back(f);
	}

	for (int i = 0; i < (sqrt(n)); i++) {
		std::vector<int> C;
		for (int j = 0; j < (sqrt(n)); j++) {
			C.push_back(a[o]);
			o++;
			
		}
		c.push_back(C);
	}

	/*for (int i = 0; i < (sqrt(n)); i++) {
		for (int j = 0; j < (sqrt(n)); j++) {
			cout<<c[i][j];
		}
	}*/

	b.push_back(a[0]);
	b.push_back(a[1]);
	b.push_back(a[2]);
	bb = b;

	BozoSort(n, a);

	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}

	cout << "\n";

	for (int j = 0; j < n; j++) {
		cout << aa[j] << " ";
	}

	cout << "\n";

	/*BozoSort(n, sqrt(n), c);

	for (int i = 0; i < (sqrt(n)); i++) {
		for (int j = 0; j < (sqrt(n)); j++) {
			cout << c[i][j];
		}
	}
	*/
	cout << "\n";

	BozoSort(b);

	for (int j = 0; j < 3; j++) {
		cout << b[j] << " ";
	}

	cout << "\n";

	for (int j = 0; j < 3; j++) {
		cout << bb[j] << " ";
	}

	cout << "\n";



	/*for (int i = 0; i < (sqrt(n)); i++) {
		for (int j = 0; j < (sqrt(n)); j++) {
			cout << cc[i][j];
		}
	}*/

	cout << "\n";
	system("pause");
	return 0;
}