#include <iostream>
using namespace std;

struct IntArray {
	int* data;
	int size;
};

void create(IntArray* arr, int size) {
	IntArray* data = new IntArray[size];
	for (int i = 0; i < size; i++) {
		data[i] = (i + 1);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");





	system("pause");
	return 0;
}


