//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 4C
//	This assignment asks the user to input the shape size, and prints a diagonal cross of that dimension.
//

#include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "Input size: " << endl;
	cin >> size;
	
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			if (i == j || j == (size + 1) - i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

