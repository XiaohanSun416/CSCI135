//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab1A
//	This assignmnet write a program that asks the user to input two integer numbers and prints out the smaller of the two.
//

#include <iostream>

using namespace std;

int main()
{
	int first_number;
	cout << "Enter the first number: " << endl;
	cin >> first_number;
	
	int second_number;
	cout << "Enter the second number: " << endl;
	cin >> second_number;
	
	if (first_number < second_number)
	{
		cout << "The smaller of the two is " << first_number << endl;
	}
	
	else
	{
		cout << "The smaller of the two is " << second_number << endl;
	}
	return 0;
}
