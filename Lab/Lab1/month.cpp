//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab1D
//	This assignmnet write a program that asks the user to input the year and the month and prints the number of days in that month.
//

#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "Enter a year: " << endl;
	cin >> year;
	
	int month;
	cout << "Enter a month: "<< endl;
	cin >> month;
	
	if (month == 2)
	{
		if (year % 4)
		{
			cout << "28 days" << endl;
		}
		
		else if (year % 100)
		{
			cout << "29 days" << endl;
		}
		
		else if (year % 400)
		{
			cout << "28 days" << endl;
		}
		
		else
			cout << "29 days" << endl;
	}
	
	else if (month == 4)
	{
		cout << "30 days" << endl;
	}
	
	
	else if (month == 6)
	{
		cout << "30 days" << endl;
	}
	
	else if (month == 9)
	{
		cout << "30 days" << endl;
	}
	
	else if (month == 11)
	{
		cout << "30 days" << endl;
	}
	
	else
	{
		cout << "31 days" << endl;
	}
	
	return 0;
}
