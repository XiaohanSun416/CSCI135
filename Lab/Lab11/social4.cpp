//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab11 D
//	This assignment that write a new program social4.cpp, which is an improved version of the previous program.
//

#include <iostream>
using namespace std;

class Profile {
private:
	string username;
	string displayname;
public:
	// Profile constructor for a user (initializing
	// private variables username=usrn, displayname=dspn)
	Profile(string usrn, string dspn);
	// Default Profile constructor (username="", displayname="")
	Profile();
	// Return username
	string getUsername();
	// Return name in the format: "displayname (@username)"
	string getFullName();
	// Change display name
	void setDisplayName(string dspn);
};

Profile::Profile(string usrn, string dspn) {
	username = usrn;
	displayname = dspn;
}
Profile::Profile() {
	username = "";
	displayname = "";
}
string Profile::getUsername() {
	return username;
}
string Profile::getFullName() {
	return displayname + " (@"+username+")";
}
void Profile::setDisplayName(string dspn) {
	displayname = dspn;
}

struct Post{
	string username;
	string message;
};

class Network {
private:
	static const int MAX_USERS = 20;
	int numUsers;
	Profile profiles[MAX_USERS];
	bool following[MAX_USERS][MAX_USERS];
	static const int MAX_POSTS = 100;         // new
	int numPosts;                             // new
	Post posts[MAX_POSTS];                    // new
	int findID (string usrn);
public:
	Network();
	bool addUser(string usrn, string dspn);
	bool follow(string usrn1, string usrn2);
	void printDot();
	bool writePost(string usrn, string msg);  // new
	bool printTimeline(string usrn);          // new
};

Network::Network()
{
	numUsers = 0;
	for(int i = 0; i < MAX_USERS; i++)
		{
			for(int j = 0; j < MAX_USERS; j++)
			{
				following[i][j] = false;
			}
		}
}

int Network::findID(string usrn) {
	
	for(int i = 0; i < MAX_USERS; i++) {
	
		if(profiles[i].getUsername() == usrn) {
			return i;
		}
	}
	return -1;
}

bool Network::addUser(string usrn, string dspn)
{
	if(findID(usrn) != -1)
	{
		return false;
	}
	
	if(numUsers == 20)
	{
		return false;
	}
	
	for(int i = 0; i < usrn.length(); i++)
	{
		if(!isalnum(usrn[i]))
		{
			return false;
		}
	}
		
	profiles[numUsers] = Profile(usrn, dspn);
	numUsers++;
	return true;
}

bool Network::follow(string usrn1, string usrn2)
{
	int usrnID1 = findID(usrn1);
	int usrnID2 = findID(usrn2);
	if (usrnID1 != -1 && usrnID2 != -1)
	{
		following[usrnID1][usrnID2] = true;
		return true;
	}
	return false;
}


void Network::printDot()
{
	cout << "digraph {" << endl;

	for(int i = 0; i < numUsers; i++)
	{
		cout << " \"@" << profiles[i].getUsername() << "\"\n";
	}
	
	for(int i = 0; i < MAX_USERS; i++)
	{
		for(int j = 0; j < MAX_USERS; j++)
		{
			if(following[i][j] == true)
			{
				cout << " \"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"\n";
			}
		}
	}
		
	cout << "}";
}

bool Network::writePost(string usrn, string msg)
{
	if(numPosts == MAX_POSTS)
	{
		return false;
	}
	
	if(findID(usrn) == -1)
	{
		return false;
	}
	
	posts[numPosts] = {usrn, msg};
	numPosts++;
	return true;
}

bool Network::printTimeline(string usrn)
{
	for(int i = numPosts; i >= 0; i--)
		{
			if (posts[i].username == usrn)
			{
				cout << profiles[findID(usrn)].getFullName() << ": " << posts[i].message << endl;
			}
			
			if(following[findID(usrn)][findID(posts[i].username)] == true)
			{
				cout << profiles[findID(posts[i].username)].getFullName() << ": " << posts[i].message << endl;
			}
		}
	return false;
}

int main() {
  Network nw;
  // add three users
  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");
   
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  // write some posts
  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;
}
