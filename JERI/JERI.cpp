#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "struct.h"
#include "Quiz.h"
using namespace std;

void isNumberTooBig(int number)
{
	if (!(cin >> number))
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
}

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

void level01()
{
	Quiz quiz;

	cout << "Blalalallal, set blaaaaaa, vajno,blaaaaaaaa";

	quiz.QuizMenu(1);

}

void goToLevel(const int level)
{
	switch (level)
	{
		case 1:
		{
			level01();
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

void greetings(string& username, int& level)
{
	if (!checkUserData(username, level))
	{
		cout << "Hello blalalalal\n";
		cout << "Name: ";
		cin >> username;
		goToLevel(1);
	}
	else
	{
		cout << "Hi" << username << "blalalaa";
		goToLevel(level);
	}
}


int main()
{

	Quiz test;
	std::vector<QESTION> a = test.addQuestions();
	test.QuizMenu(2);

	string username = getUsername();
	int level = getLevel();

	//greetings(username, level);

}
