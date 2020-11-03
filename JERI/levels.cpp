#include "levels.h"
#include "setsOperations.h"
#include "diagrams.h"
#include "Quiz.h"
#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



void cinClearIgnore()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

string getUsername()
{
	fstream userData;
	string username;
	userData.open("userData.txt");

	if (userData.is_open())
	{
		// Load data from the file
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

	// To do
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



// To do
void levels(int level, string username)
{
	Quiz quiz;


	size_t size = username.size();
	string beuty;
	beuty.append((30 + size), '-');
	string next;
	bool isVaild = false;

	switch (level)
	{
	case 1:

		cout << beuty << endl;
		cout << "|   You have a great name " << username << "!  |" << endl;
		cout << beuty << endl;

		cout << endl;
		cout << "		-------------------------------------------------------------" << endl;
		cout << "		| Let's start with explanioin of the word \"set\".            |" << endl;
		cout << "		| Well, simply put, it's a collection. First we             |" << endl;
		cout << "Set  ->		| specify a common property among things and then we        |" << endl;
		cout << "		| gather up all the things that have this common property.  |" << endl;
		cout << "		-------------------------------------------------------------" << endl;
		cout << endl;


		cout << "		-------------------------------------------------------------" << endl;
		cout << "		|Now that you know what is set, I will tell you more        |" << endl;
		cout << "		|about \"subset\".Mathematically, a set A is referred         |" << endl;
		cout << "Subset->	|to as the subset of another set B, if every element of     |" << endl;
		cout << "		|set A is also an element of set B. The relationship of     |" << endl;
		cout << "		|one set being a subset of another is called inclusion.     |" << endl;
		cout << "		-------------------------------------------------------------" << endl;
		cout << endl;


		cout << "		-------------------------------------------------------------    " << endl;
		cout << "		|We will countinue with the meaning of empty set.           |    " << endl;
		cout << "		|In mathematics, the empty set is the unique set            |    " << endl;
		cout << "		|having no elements and its size is zero. Something         |     " << endl;
		cout << "Empty Set ->	|interesting is that a Venn diagram is a diagrammatic       |  " << endl;
		cout << "		|representation of ALL the possible relationships           |    " << endl;
		cout << "		|between different sets of a limited number of elements.    |  " << endl;
		cout << "		-------------------------------------------------------------    " << endl;

		cout << endl;

		while (!isVaild)
		{
			cout << "Type \"Next\" to continue: ";
			cin >> next;
			if (next == "Next")
			{
				system("cls");
				cout << "Now it's time for a short funny quiz!" << endl;
				cout << endl;
				cout << endl;
				quiz.QuizMenu(1);
				isVaild = true;
			}
		}

		saveUserData(username, 1);

		isVaild = false;
		while (!isVaild)
		{
			cout << "Type \"Next\" to continue: ";
			cin >> next;
			if (next == "Next")
			{
				system("cls");
				isVaild = true;
			}
		}


	case 2:
		cout << "-----------------------------------------------------" << endl;
		cout << "|                                                    |" << endl;
		cout << "| Now I will show you some operations with sets!     |" << endl;
		cout << "|                                                    |" << endl;
		cout << "-----------------------------------------------------" << endl;

		cout << endl;
		cout << "Let A = {2, 4, 6, 8} and B = {6, 8, 10, 12}. Then, A U B is represented as the set containing all the elements that belong to both the sets individually." << endl;
		cout << endl;
		cout << "An intersection is the collection of all the elements that are common to all the sets under consideration." << endl;
		cout << u8"Let A = {2, 4, 6, 8} and B = {6, 8, 10, 12} then A \u2229 B." << endl;
		cout << endl;
		cout << u8"Let, A = {1, 2, 3, 4, 5, 6} and B = {2, 4, 6, 8} then A – B = {1, 3, 5} and B – A = {8}. The sets (A – B), (B – A) and (A \u2229 B) are mutually disjoint sets." << endl;
		cout << endl;
		cout << "In mathematics, the symmetric difference of two sets, also known as the disjunctive union, is the set of elements which are in either of the sets, but not in their intersection. " << endl;
		cout << endl;
		cout << "Let's see what you've learned today!" << endl;


		quiz.QuizMenu(2);
		cout << "You completed level 2" << endl;
		saveUserData(username, 2);

	case 3:
		cout << "Examples of sets" << endl;
		cout << "This is an union:" << endl;
		cout << endl;
		unionDiagram();
		cout << endl;
		cout << "The union is marked with U." << endl;
		cout << u8"A \u03F5 B = {x : x ϵ A or x ϵ B}" << endl;
		cout << endl;
		cout << "This is an intersection:" << endl;
		cout << endl;
		intersectionDiagram();
		cout << "The intersection is marked with " << u8"\u2229" << endl;
		cout << endl;
		cout << "This is a difference:" << endl;
		cout << endl;
		differenceDiagram();
		cout << endl;
		cout << "The difference is marked with /" << endl;
		cout << endl;
		cout << "This is symmetric difference:" << endl;
		cout << endl;
		symmetricDifferenceDiagram();
		cout << "The symemetric difference is marked with " << u8"\u0394" << endl;
		quiz.QuizMenu(3);
		cout << "You completed level 3" << endl;
		saveUserData(username, 3);

	case 4:

		cout << endl;
		cout << "You completed all the levels!" << endl;
		cout << "Congratulations!" << endl;
		cout << endl;
		cout << "Now you can try with numbers of your choice!" << endl;
		saveUserData(username, 4);
		finalLevelMenu();
		break;
	}


}

void greetings(string& username, int& level)
{
	if (!checkUserData(username, level))
	{
		cout << "----------------------------------------------------" << endl;
		cout << "| Hello User! How are you doing today?             |" << endl;
		cout << "| My name is Jeri and today I will tell you more   |" << endl;
		cout << "| about different types and operation with sets!   |" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << endl;
		cout << "But first tell me your name? " << endl;
		cout << "Name: ";
		cin.ignore();
		getline(cin, username);
		system("cls");
		levels(1, username);
	}
	else
	{
		cout << "Hi " << username << endl;
		levels(level, username);
	}
}

void setsOperationsMenu()
{
	system("cls");

	// MENU_FUNC_PTR is a pointer to a function
	MENU_FUNC_PTR fp = menu({
				{{ "Union of Sets" }, setsUnionMenu},
				{{ "Intersection of Sets" }, setsIntersectionMenu},
				{{ "Difference of Sets" }, setsDifferenceMenu},
				{{ "Symmetric Difference" }, setsSymDifferenceMenu}
		});

	fp();
}

void resetGame()
{
	system("cls");

	string yn;
	bool valid = false;

	cout << "Are you sure??" << endl;
	cout << "Everything will be lost" << endl;

	while (!valid)
	{
		cout << "Y/N: ";
		cin >> yn;

		if (yn != "Y" && yn != "N")
		{
			cout << "Incorrects input!" << endl;
		}
		else
		{
			valid = true;
			if (yn == "Y")
			{

				string un = "-1";
				int lvl = -1;

				saveUserData(un, lvl);

				system("cls");

				greetings(un, lvl);
			}
			else
			{
				system("cls");
			}
		}
	}

}

void goToPreviousLevel()
{
	system("cls");

	bool isValid = false;
	int input;
	string username = getUsername();

	cout << "In which level you want to go:" << endl;
	cout << "1) What is set?" << endl;
	cout << "2) Operations with sets?" << endl;
	cout << "3) Examples (Venn's diagrams)" << endl;

	while (!isValid)
	{
		cout << "Your choice: ";
		cin >> input;
		if (cin.fail() || (input < 1 || input > 3))
		{
			cinClearIgnore();
			isValid = false;
			cout << "Number have to be between 1 and " << 3 << endl;
		}
		else
		{
			isValid = true;
		}
	}

	levels(input, username);
}

void optionsMenu()
{
	system("cls");
	MENU_FUNC_PTR fp = menu({
				{{ "Reset game" }, resetGame},
				{{ "Go to previous level" },goToPreviousLevel}
		});

	fp();

}

void finalLevelMenu()
{
	do
	{
		MENU_FUNC_PTR fp = menu({
			{{ "Operations with sets" }, setsOperationsMenu},
			{{ "Options" }, optionsMenu},
			{{ "Exit" }, NULL}
			});

		if (fp == NULL)
		{
			exit(0);
		}

		fp();

	} while (true);

}
