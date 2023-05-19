//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 3A
//	This assignment that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

int main()
{
	string DATE;
	cout << "Please enter a date: ";
	cin >> DATE;
	
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reading." << endl;
		exit(1); // exit if failed to open the file
	}
	
	string junk;        // new string variable
	getline(fin, junk); // read one line from the file
	
	string date;
	double eastSt, eastEl, westSt, westEl;
	
	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
		// this loop reads the file line-by-line
		// extracting 5 values on each iteration
		
		fin.ignore(INT_MAX, '\n'); //skips to the end of line,
							  //ignorring the remaining columns

		// for example, to print the date and East basin storage:
		if (DATE == date)
		{
			cout << "East basin storage: " << eastSt << " billion gallons" << endl;
		}
	}
	
	fin.close();
}
