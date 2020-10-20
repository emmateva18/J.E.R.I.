#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "struct.h"
using namespace std;

string getUsername()
{
	fstream userData;
	string username;
	userData.open("userData.txt");

	getline(userData, username, '~');

	userData.close();

	return username;
}

int getLevel()
{
	fstream userData;
	string level[2];
	userData.open("userData.txt");

	// Need to be fixed
	getline(userData, level[0], '~');
	getline(userData, level[1], '~');

	userData.close();

	return atoi(level[1].c_str());
}

bool checkUserData(const string username, const int level)
{
	return (username != "-1" && level != -1);
}

void goToLevel(const int level)
{
	switch (level)
	{
		case 1:
		{
			//Go to function for level 1
		}
		case 2:
		{
			//Go to function for level 2
		}
		case 3:
		{
			//Go to function for level 3
		}
		case 4:
		{
			//Go to function for level 4
		}
	}
}

void greetings(string& username, int& level, bool isDataValid)
{
	if (!isDataValid)
	{
		cout << "Hello blalalalal\n";
		cout << "Name: ";
		cin >> username;
	}
	else
	{
		cout << "Hi" << username << "blalalaa";
		goToLevel(level);
	}
}


int main()
{
	string previousUsername = getUsername();
	int previousLevel = getLevel();
	vector <QESTION> QUESTIONS;
	string username;
	int level;

	if (!checkUserData(previousUsername, previousLevel))
	{
		greetings(username, level, 0);
	}
	else
	{
		greetings(previousUsername, previousLevel, 1);
	}
}
