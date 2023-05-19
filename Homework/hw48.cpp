//
//  main.cpp
//  E4.8
//
//  Created by Xiaohan Sun on 9/14/22.
//

#include <iostream>

using namespace std;

int main()
{
	string name;
	int namelength;

	cout << "Please enter a name: ";
	getline(cin, name);
	namelength = name.length();
	
	for(int i = 0; i < name.length(); i++)
		cout << name[i] << endl;
	
	return 0;
}

/* another way
 #include <iostream>
 using namespace std;
 int main()
 {
	 string name;
	 cout << "Enter a name: ";
	 cin>>name;
	 
	 for(int i=0;i<name.length();i++)
	 {
		 cout<<name[i];
		 cout<<endl;
	 }
 }
 */
