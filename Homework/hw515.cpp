//
//  main.cpp
//  E5.15
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

void sort3(int& a,int& b,int& c)
{
	sort2(a,c);
	sort2(a,b);
	sort2(b,c);
}

int main()
{
	int v = 3;
	int w = 4;
	int x = 1;
	sort3(v, w, x);
	
	cout << "v is " << v << ", w is " << w << ", and x is " << x << endl;
	
	return 0;
}
