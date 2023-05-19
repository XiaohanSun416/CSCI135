//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 3B
//	This assignment that finds the minimum and maximum storage in East basin in 2018.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

int main()
{
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reading." << endl;
		exit(1); // exit if failed to open the file
	}
	
	string junk;        // new string variable
	getline(fin, junk); // read one line from the file
	
	string date;
	cout << "Please enter a date: ";
	cin >> date;
	
	double eastSt, eastEl, westSt, westEl;
	double min = INT_MAX;
	double max = INT_MIN;
	
	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
		// this loop reads the file line-by-line
		// extracting 5 values on each iteration
		
		fin.ignore(INT_MAX, '\n'); //skips to the end of line,
							  //ignorring the remaining columns

		// for example, to print the date and East basin storage:
		if (eastSt < min)
		{
			min = eastSt;
		}
		
		if (eastSt > max)
		{
			max = eastSt;
		}
	}
	
	cout << "Minimum storage in East basin: " << min << " billion gallons" << endl;
	cout << "Maximum storage in East basin: " << max << " billion gallons" << endl;
	
	fin.close();
}
