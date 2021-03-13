#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");

	int n,a=1;
	cin >> n;

	for (int i = 1; i <= n; i += 1) {
		a = a * i;
	}
	cout << a<<"\n";
	system("pause");
	return 0;
}
