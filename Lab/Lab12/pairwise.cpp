//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab12 D
//	This assignment that write a program called pairwise.cpp that implements the function vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) that returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors passed as arguments. If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
	vector<int> v;
	
	if(v1.size() >= v2.size()){
		v = v1;
		for(int i = 0; i < v2.size(); i++){
			v[i] += v2[i];
		}
	}
	
	else{
		v = v2;
		for(int i = 0; i < v1.size(); i++){
			v[i] += v2[i];
		}
	}
	return v;
 }
