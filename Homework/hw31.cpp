//
//  main.cpp
//  E3.1
//
//  Created by Xiaohan Sun on 9/14/22.
//

#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Please enter an integer: ";
	cin >> number;
	
	if (number < 0)
	{
		cout << "It is negative." << endl;
	}
	
	else if (number == 0)
	{
		cout << "It is zero." << endl;
	}
	
	else
	{
		cout << "It is positive." << endl;
	}
	
	return 0;
}
