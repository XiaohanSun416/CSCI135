//
//  main.cpp
//  E9.5
//
//  Created by Xiaohan Sun on 12/8/22.
//

#include <iostream>
using namespace std;

class Rectangle{
private:
	double width;
	double length;
public:
	Rectangle(double w, double l){
		width = w;
		length = l;
	}
	double get_perimeter(){
		return 2 * (width + length);
	}
	double get_area(){
		return width * length;
	}
	void resize(double factor){
		width *= factor;
		length *= factor;
	}
};

