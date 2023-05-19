//
//	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab2C
//	This assignment writes a program that creates an array of 10 integers, and provides the user with an interface to edit any of its element.
//

#include <iostream>

using namespace std;

int main()
{
	int myData[10];
	
	int index;
	int value;
	
	for (int i = 0; i < 10; i++)
	{
		myData[i] = 1;
		cout << myData[i] << " ";
	}
	
	do
	{
		cout << endl << "Input index: ";
		cin >> index;
		
		cout << endl << "Input value: ";
		cin >> value;
		
		if (index >=0 and index <= 9)
		{
			for (int i = 0; i < 10; i++)
			{
				myData[index] = value;
				cout << myData[i] << " ";
			}
		}
		else
		{
			cout << "Index out of range. Exit." << endl;
		}
	}
	while (index >= 0 and index <= 9);
	
	return 0;
}


