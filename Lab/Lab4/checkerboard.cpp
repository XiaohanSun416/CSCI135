//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 4B
//	This assignment asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
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
			if ((i+j) % 2 == 0)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
}
