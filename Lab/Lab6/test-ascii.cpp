//
//  Author: Xiaohan Sun
//  Course: CSCI-136
//  Instructor: Sadab Hafiz
//  Assignment: Lab 6A
//  This assignment that asks the user to input a line of text (which may possibly include spaces). The program should report all characters from the input line together with their ASCII codes.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string ch;
  getline(cin, ch);

  for(int i = 0; i < ch.length(); i++)
  {
	cout << ch[i] << " " << (int)ch[i] << endl;
  }
	return 0;
}
