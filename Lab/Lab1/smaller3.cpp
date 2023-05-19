//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab1B
//	This assignmnet write a program that asks the user to input three integer numbers and prints out the smaller of the three.
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
	
	int third_number;
	cout << "Enter the third number: " << endl;
	cin >> third_number;
	
	if (first_number < second_number and first_number < third_number)
	{
		cout << "The smaller of the three is " << first_number << endl;
	}
	
	else if (third_number < first_number and third_number < second_number)
	{
		cout << "The smaller of the three is " << third_number << endl;
	}
	
	else
	{
		cout << "The smaller of the three is " << second_number << endl;
	}
	return 0;
}

