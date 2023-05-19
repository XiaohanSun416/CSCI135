//
//	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab2D
//	This assignment writes a program, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
//

#include <iostream>

using namespace std;

int main()
{
	int fib[60];
	
	// first two terms are given
	fib[0] = 0;
	fib[1] = 1;
		
	for (int i = 0; i <=59; i++)
	{
		if (i > 1)
		{
			fib[i] = fib[i-1] + fib[i-2];
		}
		cout << fib[i] << endl;
	}
		
		return 0;
}
