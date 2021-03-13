#include "C:\Programming\Practice\23\C++\23. Заголовочные файлы\23. Заголовочные файлы\factor.h"
#ifndef SINX_H
#define SINX_H

double sinx(double x, double k)
{
	double tern = x;
	double Sum = tern;
	for(double i=1;i<=k;i+=1){
		tern = -((x * x)/((2 * i)*(2 * i + 1)))*tern;
		Sum = Sum + tern;
	}
	return Sum;
}

#endif

