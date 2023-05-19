//
//	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab2B
//	This assignment writes a program that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces.
//

#include <iostream>

using namespace std;

int main()
{
	int L;
	cout << "Please enter L: ";
	cin >> L;
	
	int U;
	cout << "Please enter U: ";
	cin >> U;
	
	for(int i = L; i < U; i++)
	{
		cout << i << " ";
	}
	
	return 0;
	
}
