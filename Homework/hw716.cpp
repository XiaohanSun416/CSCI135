//
//  main.cpp
//  E7.16
//
//  Created by Xiaohan Sun on 11/11/22.
//

#include <iostream>
#include <cmath>
using namespace std;

struct Point{
	public:
	double x;
	double y;
};

double distance(Point a, Point b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

int main(){
	double ax, ay, bx, by;
	cout << "Please enter (x, y): ";
	cout << "Please enter (x, y): ";
	cin >> ax >> ay >> bx >> by;
	
	double dist = distance({ax,ay},{bx,by});
	cout << dist << endl;
	
	return 0;
}
