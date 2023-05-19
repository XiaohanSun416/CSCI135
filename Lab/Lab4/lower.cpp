//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 4D
//	This assignment prints the top-right half of a square, given the side length.
//

#include <iostream>

using namespace std;

int main()
{
	int size_length;
	cout << "Input side length: " << endl;
	cin >> size_length;
	
	for (int i = 1; i <= size_length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}


