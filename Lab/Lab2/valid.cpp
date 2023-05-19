//
//	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab2A
//	This assignment writes a program, which asks the user to input an integer in the range 0 < n < 100.
//

#include <iostream>

using namespace std;

int main()
{
	int number;
	
	do
	{
		cout << "Please enter an integer: ";
		cin >> number;
	}
	while (number <= 0 or number >= 100);
	
	cout << "Number squared is " << number * number << endl;
	
	return 0;
}
