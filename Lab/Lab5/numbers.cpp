//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 5
//	This assignment that write a program numbers.cpp that defines a function.
//

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
	if (d == 0)
	{
		return false;
	}
	else if (n % d == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isPrime(int n)
{
	if(n <= 1)
	{
		return false;
	}
	else
	{
		for(int i = 2; i <= n-1; i++)
		{
			if(n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

int nextPrime(int n)
{
	n = n + 1;
	
	while(!isPrime(n))
	{
		n++;
	}
	return n;
}

int countPrimes(int a, int b)
{
	int n = 0;
	
	for (int i = a; i <= b; i++)
	{
		if(isPrime(i) == true)
		{
		  n++;
		}
	}
	return n;
}

bool isTwinPrime(int n)
{
	if (isPrime(n) == true)
	{
		if (isPrime(n-2) == true || isPrime(n+2) == true )
		{
			return true;
		}
	}
	return false;
}

int nextTwinPrime(int n)
{
	n = n + 1;
	
	while(!isTwinPrime(n))
	{
		n++;
	}
	return n;
}

int largestTwinPrime(int a, int b)
{
	int n = -1;
	
	for(int i = b; i >= a; i--)
	{
		if(isTwinPrime(i) == true)
		{
			n = i;
			return n;
		}
	}
	return n;
}
