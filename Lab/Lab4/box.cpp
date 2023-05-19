//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 4A
//	This assignment asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
//

#include <iostream>

using namespace std;

int main()
{
	int width;
	cout << "Input width: " << endl;
	cin >> width;
	
	int height;
	cout << "Input height: " << endl;
	cin >> height;
	
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
