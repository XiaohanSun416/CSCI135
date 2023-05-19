//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 7A
//	This assignment that reads input from cin and prints out each input line with leading spaces removed.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string removeLeadingSpaces(string line)
{
	int input = 0;
	
	for (int i = 0; i < line.length(); i++)
	{
		if (isspace(line[i]))
		{
			input++;
		}
		else
		{
			break;
		}
	}
	return line.substr(input);
}

int main()
{
	string x;
	while (getline(cin, x))
	{
		cout << removeLeadingSpaces(x) << endl;
	}
}
