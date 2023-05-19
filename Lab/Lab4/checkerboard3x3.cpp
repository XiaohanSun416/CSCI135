//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 4G
//	This assignment asks the user to input width and height and prints a checkerboard of 3-by-3 squares.
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

				if((i / 3) % 2 == (j / 3) % 2)
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
