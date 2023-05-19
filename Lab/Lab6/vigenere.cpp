//
//  Author: Xiaohan Sun
//  Course: CSCI-136
//  Instructor: Sadab Hafiz
//  Assignment: Lab 6C
//  This assignment write a program that it should contain a function encryptVigenere implementing this cipher.
//

#include <iostream>
#include <string>
using namespace std;

string encryptVigenere(string plaintext, string keyword)
{
    string s = "";
    char ch;
    int key_word = 0;
    int rshift;
    
    for(int i = 0; i < plaintext.length(); i++)
    {
        ch = plaintext[i];
        
        if(ch >= 'A'&& ch <= 'Z')
        {
            if (key_word >= keyword.length())
            {
                key_word = 0;
            }
            rshift = keyword[key_word] - 'a';
            ch = 'A'+ (ch - 'A' + rshift) % 26;
            key_word++;
        }
        if(ch >= 'a' && ch <= 'z')
        {
            if (key_word >= keyword.length())
            {
                key_word = 0;
            }
            rshift = keyword[key_word] - 'a';
            ch = 'a'+ (ch - 'a' + rshift) % 26;
            key_word++;
        
        }
        s += ch;
    }
    return s;
}

int main()
{
    string shift;
    cout << "Enter plaintext: ";
    getline(cin, shift);
    
    string keyWord;
    cout << "Enter Keyword: ";
    cin >> keyWord;
    
    string encryptedWord = encryptVigenere(shift, keyWord);
    cout << "Ciphertext: " << encryptedWord;
}
