//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab12 B
//	This assignment that make a program called optimism.cpp that implements the function vector<int> goodVibes(const vector<int>& v); that, given a vector of integers, returns a vector with only the positive integers in the same order.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(vector<int> v)
{
  vector<int> n;
  for(int i = 0; i < v.size(); i++)
  {
	if(v[i] >= 0)
	{
	  n.push_back(v[i]);
	}
  }
  return n;
}
