//
//  main.cpp
//  E2.10
//
//  Created by Xiaohan Sun on 8/28/22.
//

#include <iostream>

using namespace std;

int main()
{
	double gallons;
	cout << "Enter a number of gallons of gas in the tank: " << endl;
	cin >> gallons;
	
	double fuel_efficiency;
	cout << "Enter a number of fuel efficiency in miles per gallon: " << endl;
	cin >> fuel_efficiency;
	
	double price;
	cout << "Enter a number of the price of gas per gallon: " << endl;
	cin >> price;
	
	const int MILES = 100;
	double cost;
	cost = MILES / fuel_efficiency * price;
	
	double miles;
	miles = gallons * fuel_efficiency;
	
	cout << "The cost per 100 miles is " << cost << " dollars." << endl;
	cout << "The distance of the car can go with the gas in the tank is " << miles << " miles." << endl;
	return 0;
}
