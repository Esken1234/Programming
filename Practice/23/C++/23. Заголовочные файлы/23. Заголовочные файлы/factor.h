#pragma once
int factor(int n)
{
	int a = 1;
	for (int i = 1; i <= n; i += 1) {
		a = a * i;
	}
	return a;
}