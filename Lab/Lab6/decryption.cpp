//
//  Author: Xiaohan Sun
//  Course: CSCI-136
//  Instructor: Sadab Hafiz
//  Assignment: Lab 6D
//  This assignment write a program that uses the above functions to demonstrate encryption and decryption for both ciphers.
//

#include <iostream>
#include <string>
using namespace std;

char shiftChar( char c, int rshift)
{
	int rShift;
	if(c >= 'a' && c <= 'z')
	{
		rShift = (c - 'a' + rshift) % 26;
		c = rShift + 'a';
	}
	if( c >= 'A' && c <='Z')
	{
		rShift = (c - 'A' + rshift) % 26;
		c = rShift + 'A';
	}
	return c;
}

string encryptCaesar(string plaintext, int rshift)
{
	string s= "";
	
	for( int i = 0; i < plaintext.length(); i++)
	{
		s += shiftChar( plaintext[i], rshift);
	}
	return s;
}

string encryptVigenere(string plaintext, string keyword)
{
	string s = "";
	char ch;
	int key_word = 0;
	int shift;
	for(int i = 0; i < plaintext.length(); i++)
	{
		ch = plaintext[i];
		
		if(ch >= 'A' && ch <= 'Z')
		{
			if (key_word >= keyword.length())
			{
				key_word = 0;
			}
			shift = keyword[key_word] - 'a';
			ch = 'A' + (ch - 'A' + shift) % 26;
			key_word++;
		}
		if(ch >= 'a' && ch <= 'z')
		{
			if (key_word >= keyword.length())
			{
				key_word = 0;
			}
			shift = keyword[key_word] - 'a';
			ch = 'a'+ (ch - 'a' + shift) % 26;
			key_word++;
		
		}
		s += ch;
	}
	return s;
}

char backToOriginal(char c, int rshift)
{
	if(c >= 'a' && c <= 'z')
	{
		c = c - rshift;
		if(c < 97)
		{
			c = c + 26;
		}
	}
	if(c >= 'A' && c <= 'Z')
	{
		c = c - rshift;
		if(c < 65)
		{
			c = c + 26;
		}
	}
	return c;
}

string decryptCaesar(string ciphertext, int rshift)
{
	string s= "";
	
	for( int i = 0; i < ciphertext.length(); i++)
	{
		s += backToOriginal( ciphertext[i], rshift);
	}
	return s;
}

string decryptVigenere(string ciphertext, string keyword)
{
	string s = "";
	char ch;
	int key_word = 0;
	int pos_shift;
	for(int i = 0; i < ciphertext.length(); i++)
	{
		ch = ciphertext[i];
		
		if(ch >= 'A' && ch <= 'Z')
		{
			if (key_word >= keyword.length())
			{
				key_word = 0;
			}
			pos_shift = keyword[key_word] - 'a';
			ch = ch - pos_shift;
			if(ch < 65)
			{
				ch = ch + 26;
			}
			key_word++;
		}
		if(ch >= 'a'&& ch <= 'z')
		{
			if (key_word >= keyword.length())
			{
				key_word = 0;
			}
			pos_shift = keyword[key_word] - 'a';
			ch = ch - pos_shift;
			if(ch < 97)
			{
				ch = ch + 26;
			}
			key_word++;
		
		}
		s += ch;
	}
	return s;
}

int main()
{
	string plaintext;
	string caesar;
	string keyword;
	string vigenere;
	string decryptVi;
	
	int s;
	cout << "Enter plaintext: ";
	getline(cin, plaintext);
	cout << endl;
	
	cout << "= Caesar =" <<endl;
	cout << "Enter shift: ";
	cin >> s;
	
	caesar = encryptCaesar(plaintext, s);
	cout << "ciphertext: " << caesar << endl;
	cout << "Decrypted: " << decryptCaesar(caesar, s) << endl;

	
	cout << "= Vigenere =" << endl;
	cout << "Enter keyword: ";
	cin >> keyword;
	
	vigenere = encryptVigenere(plaintext, keyword);
	cout << "ciphertext:"<< vigenere << endl;
	
	decryptVi = decryptVigenere(vigenere, keyword) ;
	cout << "Decrypted: " <<decryptVi << endl;
}
