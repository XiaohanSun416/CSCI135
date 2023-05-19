//
//  main.cpp
//  E3.5
//
//  Created by Xiaohan Sun on 9/14/22.
//

#include <iostream>

using namespace std;

int main()
{
	double first_number;
	cout << "Please enter the first number: ";
	cin >> first_number;
	
	double second_number;
	cout << "Please enter the second number: ";
	cin >> second_number;
	
	double third_number;
	cout << "Please enter the third number: ";
	cin >> third_number;
	
	if (first_number < second_number && second_number < third_number)
	{
		cout << "increasing" << endl;
	}
	
	else if (first_number > second_number && second_number > third_number)
	{
		cout << "decreasing" << endl;
	}
	
	else
	{
		cout << "neither" << endl;
	}
	
	return 0;
}
