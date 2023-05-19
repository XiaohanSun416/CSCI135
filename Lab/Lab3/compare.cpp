//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 3C
//	This assignment that asks the user to input two dates (the beginning and the end of the interval). The program should check each day in the interval and report which basin had higher elevation on that day by printing “East” or “West”, or print “Equal” if both basins are at the same level.
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
	
	string starting_date;
	cout << " Please enter starting date: ";
	cin >> starting_date;
	
	string ending_date;
	cout << " Please enter ending date: ";
	cin >> ending_date;
	
	string date;
	double eastSt, eastEl, westSt, westEl;
	
	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
		// this loop reads the file line-by-line
		// extracting 5 values on each iteration
		
		fin.ignore(INT_MAX, '\n'); //skips to the end of line,
							  //ignorring the remaining columns

		// for example, to print the date and East basin storage:
		if (date >= starting_date && date <= ending_date)
		{
			if (eastEl < westEl)
			{
				cout << date << " West" << endl;
			}
			
			if (eastEl > westEl)
			{
				cout << date << " East" << endl;
			}
			
			if (eastEl == westEl)
			{
				cout << date << " Equal" << endl;
			}
		}
	}
	
	fin.close();
}

