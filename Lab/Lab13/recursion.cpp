//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab13 E
//	This assignment add a new function which returns true if the string is a sequence of nested parentheses: Strings "", "()", "(())", "((()))" … are all correct sequences and should return true.
//

#include <iostream>
using namespace std;

void printRange(int left, int right)
{
  if(left > right)
  {
	return;
  }
  else
  {
	cout << left << endl;
	printRange(left + 1, right);
  }
}

int sumRange(int left, int right)
{
	if(left > right)
	{
		return 0;
	}
	
	return sumRange(left+1, right) + left;
}

int sumArray(int *arr, int size)
{
	if(size <=0)
	{
		return 0;
	}
	return sumArray(arr, size - 1) + arr[size - 1];
}

bool isAlphanumeric(string s)
{
	if(s.length() == 0)
	{
		return true;
	}
	else
	{
		char ch = s[0];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
		{
			return isAlphanumeric(s.substr(1));
		}
		else
		{
			return false;
		}
	}
}

bool nestedParens(string s)
{
  if(s.length() == 0)
  {
	return true;
  }
  
  else
  {
	if((int)s[0] == 40)
	{
	  if((int)s[s.length() - 1] == 41)
	  {
		return nestedParens(s.substr(1, s.length()-2));
	  }
	  else
		return false;
	}
	else
	  return false;
  }
}

int main()
{
	cout << nestedParens("((()))") << endl;      // true (1)
	cout << nestedParens("()") << endl;          // true (1)
	cout << nestedParens("") << endl;            // true (1)
	
	cout << nestedParens("(((") << endl;         // false (0)
	cout << nestedParens("(()") << endl;         // false (0)
	cout << nestedParens(")(") << endl;          // false (0)
	cout << nestedParens("a(b)c") << endl;       // false (0)
}
