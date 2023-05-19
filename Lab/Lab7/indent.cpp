//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 7B
//	This assignment that that enhances the program from the previous task. As it reads the input line by line, it should also count the number of open and closed { } in it, and keep track of how many blocks is currently open at the beginning of each line.
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

int countChar(string line, char c)
{
	int input = 0;
	for(int i = 0; i < line.length(); i++)
	{
		if(line[i] == c)
		{
			input++;
		}
	}
	return input;
}


string indenter(string input, int num)
{
	string t;
	for(int i = 0; i < num; i++)
	{
		t += "\t";
	}
	return (t + input);
}


int main()
{
	string line;
	int n = 0;

	while(getline(cin, line))
	{
		if(removeLeadingSpaces(line)[0] == '}')
		{
			cout << indenter(removeLeadingSpaces(line), n - 1) << endl;
		}
		else
		{
			cout << indenter(removeLeadingSpaces(line), n) << endl;
		}
		
		n += countChar(line, '{');
		n -= countChar(line, '}');
	}
}
