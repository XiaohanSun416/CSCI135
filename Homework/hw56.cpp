//
//  main.cpp
//  E5.6
//
//  Created by Xiaohan Sun on 10/12/22.
//

#include <iostream>
#include <string>
using namespace std;
	
string middle(string str)
{
	int n = str.length();
	if (n % 2 == 1)
	{
		return str.substr(n/2,1);
	}
	
	else
	{
		return str.substr((n/2)-1,2);
	}
}

int main()
{
	string input;
	cout << "Please enter a string: ";
	cin >> input;
	
	cout << middle(input) << endl;
	
	return 0;
}
