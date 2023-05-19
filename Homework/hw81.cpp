//
//  main.cpp
//  E8.1
//
//  Created by Xiaohan Sun on 10/22/22.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream file;
	file.open("hello.txt");
	file << "Hello, World!";
	
	file.close();
	ifstream same_file;
	same_file.open("hello.txt");
	
	string newone;
	getline(same_file, newone);
	cout << newone << endl;
	
	return 0;
}
