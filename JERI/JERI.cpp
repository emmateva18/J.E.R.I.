#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "struct.h"
#include "setsOperations.h"
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

void levels(int level, string username)
{
	Quiz quiz;

	switch (level)
	{
		case 1:
			cout << "You have a great name " << username << "!"<< endl;
			cout << endl;
			cout << "Let's start with explanioin of the word \"set\"." << endl;
			cout << "Well, simply put, it's a collection. First we specify a common property among" << endl;
			cout<< "things and then we gather up all the things that have this common property." << endl;
			cout << endl;
			cout << "Now that you know what is set, I will tell you more about \"subset\"." << endl;
			cout << "Mathematically, a set A is referred to as the subset of another set B, if every element of set A is also an element of set B." << endl;
			cout << "The relationship of one set being a subset of another is called inclusion." << endl;
			quiz.QuizMenu(1);
			cout << "You completed level 1" << endl;
			saveUserData(username, 1);

		case 2:
			cout << "Operations with sets" << endl;
			quiz.QuizMenu(2);
			cout << "You completed level 2" << endl;
			saveUserData(username, 2);

		case 3:
			cout << "Examples of sets" << endl;
			quiz.QuizMenu(3);
			cout << "You completed level 3" << endl;
			saveUserData(username, 3);

		case 4:
			cout << "Final level" << endl;
			saveUserData(username, 4);
			finalLevelMenu();
			break;
	}


}



void greetings(string& username, int& level)
{
	if (!checkUserData(username, level))
	{
		cout << "Hello User! How are you doing today?" << endl;
		cout << "My name is Jeri and today I will tell you more about different types and operation with sets!" << endl;
		cout<< "But first tell me your name? " <<endl;
		cout << "Name: ";
		cin >> username;
		levels(1, username);
	}
	else
	{
		cout << "Hi " << username << endl;
		levels(level, username);
	}
}

int main()
{



	string username = getUsername();
	int level = getLevel();


	greetings(username, level);

}
