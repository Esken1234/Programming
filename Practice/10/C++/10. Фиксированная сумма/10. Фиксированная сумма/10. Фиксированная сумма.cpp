#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int s, l1, l2, r1, r2, x1, x2;
	cin>> s >> l1 >> r1 >> l2 >> r2;
	if (l1 <= r1 and l2 <= r2){
		if (l1 + l2 <= s and r1 + r2 >= s){
			x2 = s - l1;

			if (x2 - r2 > 0){
				x1 = l1 + x2 - r2;
				x2 = s - x1;
			}
			else x1 = l1;
			cout<< x1<< " " << x2<<"\n";
		}
		else cout << - 1<<"\n";
	}
	system("pause");
	return 0;
}