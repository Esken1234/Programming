#include "C:\Programming\Practice\23\C++\23. Заголовочные файлы\23. Заголовочные файлы\factor.h"
#ifndef SO4ET_H
#define SO4ET_H

int so4et(int n, int k) 
{
	return (factor(n))/((factor(k))* (factor(10 - k)));
}

#endif
