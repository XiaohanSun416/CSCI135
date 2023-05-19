//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab12 A
//	This assignment that call your program vectors.cpp. Your function must be implemented outside the main function and must return a vector.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n)
{
  vector<int> v;
  for(int i = 0; i < n; i++)
  {
	v.push_back(i);
  }
  return v;
}

int main()
{
  int n = 10;
  vector <int> v = (makeVector(n));
  for(int i = 0; i < n; i++)
  {
	cout << v[i];
  }
}
