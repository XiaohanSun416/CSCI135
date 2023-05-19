//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 4F
//	This assignment prints an upside-down trapezoid of given width and height.
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
	
	int spaces = 0;
	int stars = width;

	cout << "Shape: " << endl;

	if (height <= (width + 1) / 2) {
	for (int row = 0; row < height; row++) { // lines
		for(int i = 0; i < spaces; i++){
			cout << " ";
		  }
		for (int j = 0; j < stars; j++){
			cout << "*";
		}
		
		spaces += 1;
		stars -= 2;

		cout << endl;
	  }
	}
	else {
	  cout << "Impossible shape!";
	}
}
