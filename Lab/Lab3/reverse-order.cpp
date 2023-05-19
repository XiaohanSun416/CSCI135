//
//  Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 3D
//	This assignment that asks the user to input two dates (earlier date then later date). The program should report the West basin elevation for all days in the interval in the reverse chronological order (from the later date to the earlier).
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
	
	string earlier_date;
	cout << " Please enter earlier date: ";
	cin >> earlier_date;
	
	string later_date;
	cout << " Please enter later date: ";
	cin >> later_date;
	
	string dates [500];
	double elevations [500];
	int capacity = 0;
	
	string date;
	double eastSt, eastEl, westSt, westEl;
	
	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
		// this loop reads the file line-by-line
		// extracting 5 values on each iteration
		
		fin.ignore(INT_MAX, '\n'); //skips to the end of line,
							  //ignorring the remaining columns

		// for example, to print the date and East basin storage:
		if (date >= earlier_date && date <= later_date)
				{
					elevations[capacity] = westEl;
					dates[capacity] = date;
					capacity++;
				}
	}
	
	for (int i = capacity - 1; i >= 0; i--)
	{
		cout << dates[i] << " " << elevations[i] << endl;
	}
	
	fin.close();
}
