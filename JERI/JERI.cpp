#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "struct.h"
#include "Quiz.h"
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


void finalLevel()
{

}

void levels(int level)
{
	Quiz quiz;

	switch (level)
	{
		case 1:
			cout << "Blalalallal, set blaaaaaa, vajno,blaaaaaaaa" << endl;
			quiz.QuizMenu(1);
			break;

		case 2:
			cout << "jdfhkudsfhkjuioDNIUSHKLFSDHUIL";
			quiz.QuizMenu(2);
			break;

		case 3:
			cout << "jvjkfvjfkfvjkkj.rhjgrlh.jhfhgrlrgkhawrjvdk";
			quiz.QuizMenu(3);
			break;

		case 4:
			cout << "finitoooooooo";
			finalLevel();
			break;
	}


}

void goToLevel(const int level)
{
	switch (level)
	{
		case 1:
		{
			levels(1);
			break;
		}
		case 2:
		{
			levels(2);
			break;
		}
		case 3:
		{
			levels(3);
			break;
		}
		case 4:
		{
			levels(4);
			break;
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
	string username = getUsername();
	int level = getLevel();

	greetings(username, level);

}
