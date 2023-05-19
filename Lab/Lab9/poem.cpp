//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 9D
//	This assignment that fix this program poem.cpp. It should still keep creating poems, but all dynamically allocated memory should get deleted when it is not needed.
//

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
	string *p = new string;
	*p = "Roses are red, violets are blue";
	return p;
}

int main() {
	while(true) {
		string *p;
		p = createAPoemDynamically();

		// assume that the poem p is not needed at this point
		
		delete p;
	}
}
