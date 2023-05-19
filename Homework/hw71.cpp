//
//  main.cpp
//  E7.1
//
//  Created by Xiaohan Sun on 11/5/22.
//

#include <iostream>

using namespace std;

void sort2(double* p, double* q)
{
	double temp;
	if(*p > *q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
	}
}

int main(void)
{
	double x = 2.9, y = 6.7;
	sort2(&x, &y);
	cout << x << " " << y << endl;
}

