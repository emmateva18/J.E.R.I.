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

	if (userData.is_open())
	{
		getline(userData, username, '~');
	}

	userData.close();

	return username;
}

int getLevel()
{
	fstream userData;
	string level[2];
	userData.open("userData.txt");

	// Need to be fixed
	if (userData.is_open())
	{
		getline(userData, level[0], '~');
		getline(userData, level[1], '~');
	}


	userData.close();

	return atoi(level[1].c_str());
}

bool checkUserData(const string username, const int level)
{
	return (username != "-1" && level != -1);
}

bool userDataValidation(int level)
{
	if (isdigit(level))
	{
		return true;
	}
	return false;
}

void saveUserData(string username, int level)
{
	fstream data;
	data.open("userData.txt");

	if (data.is_open())
	{
		data << username << "~" << level << "~";
	}

	data.close();
}

void finalLevel()
{

}

void levels(int level, string username)
{
	Quiz quiz;

	switch (level)
	{
		case 1:
			cout << "Blalalallal, set blaaaaaa, vajno,blaaaaaaaa" << endl;
			quiz.QuizMenu(1);
			cout << "You completed blalalalal 1" << endl;
			saveUserData(username, 1);
			break;

		case 2:
			cout << "jdfhkudsfhkjuioDNIUSHKLFSDHUIL" << endl;
			quiz.QuizMenu(2);
			cout << "You completed blalalalal 2" << endl;
			saveUserData(username, 2);
			break;

		case 3:
			cout << "jvjkfvjfkfvjkkj.rhjgrlh.jhfhgrlrgkhawrjvdk" << endl;
			quiz.QuizMenu(3);
			cout << "You completed blalalalal 3" << endl;
			saveUserData(username, 3);
			break;

		case 4:
			cout << "finitoooooooo" << endl;
			saveUserData(username, 4);
			finalLevel();
			break;
	}


}

void goToLevel(const int level, const string username)
{
	switch (level)
	{
		case 1:
		{
			levels(1, username);
		}
		case 2:
		{
			levels(2, username);
		}
		case 3:
		{
			levels(3, username);
		}
		case 4:
		{
			levels(4, username);
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
		goToLevel(1, username);
	}
	else
	{
		cout << "Hi" << username << "blalalaa";
		goToLevel(level, username);
	}
}


int main()
{
	string username = getUsername();
	int level = getLevel();


	greetings(username, level);

}
