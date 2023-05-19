//
//  main.cpp
//  E7.18
//
//  Created by Xiaohan Sun on 11/19/22.
//

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
public:
	double x;
	double y;
};

struct Triangle
{
public:
	Point a;
	Point b;
	Point c;
};

double distance(Point a, Point b){
	return sqrt((pow((b.x-a.x),2))+(pow((b.y-a.y),2)));
}

double perimeter(Triangle t){
	return distance(t.a,t.b) + distance(t.a,t.c) + distance(t.b, t.c);
}
