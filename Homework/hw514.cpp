//
//  main.cpp
//  E5.14
//
//  Created by Xiaohan Sun on 10/12/22.
//

#include <iostream>
using namespace std;

void sort2(int& a,int& b)
{
	if (a > b)
	{
		int a1 = a;
		a = b;
		b = a1;
	}
}

int main()
{
	int u = 2;
	int v = 3;
	int w = 4;
	int x = 1;
	sort2(u, v);
	sort2(w, x);
	
	cout << "u is " << u << " and v is " << v << endl;
	cout << "w is " << w << " and x is " << x << endl;
	
	return 0;
}
