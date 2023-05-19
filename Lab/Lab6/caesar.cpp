//
//  Author: Xiaohan Sun
//  Course: CSCI-136
//  Instructor: Sadab Hafiz
//  Assignment: Lab 6B
//  This assignment write a program with functions implementing Caesar cipher encryption.
//

#include <iostream>
#include <string>
using namespace std;

char shiftChar( char c, int rshift)
{
	int rightShift;
	if(c >= 'a' && c <= 'z')
	{
		rightShift = (c - 'a' + rshift) % 26;
		c = rightShift + 'a';
	}
	if( c >= 'A' && c <='Z')
	{
		rightShift = (c - 'A' + rshift) % 26;
		c = rightShift + 'A';
	}
	return c;
}

string encryptCaesar(string plaintext, int rshift)
{
	for(int i = 0; i < plaintext.length(); i++)
	{
		plaintext[i] = shiftChar(plaintext[i], rshift);
	}
	
	return plaintext;
}

int main()
{
	string plaintext;
	
	int shift = 0;
	cout << "Enter plaintext: ";
	getline(cin, plaintext);
	
	cout << "Enter shift: ";
	cin >> shift;
	
	cout << "Ciphertext: " << encryptCaesar(plaintext, shift);
}
