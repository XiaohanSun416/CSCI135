//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab1C
//	This assignmnet write a program that asks the user to input an integer representing a year number.
//

#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "Enter a year: " << endl;
	cin >> year;
	
	if (year % 4)
	{
		cout << "Common year" << endl;
	}
	
	else if (year % 100)
	{
		cout << "Leap year" << endl;
	}
	
	else if (year % 400)
	{
		cout << "Common year" << endl;
	}
	
	else
		cout << "Leap year" << endl;
	
	return 0;
}
