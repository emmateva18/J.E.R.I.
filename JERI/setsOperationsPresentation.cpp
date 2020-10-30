#include "setsOperationsPresentation.h"
#include "dataValidation.h"
#include <iostream>
using namespace std;


void menu(string option1, string option2, string option3, int argCount, int& input, string option4 = " ", string option5 = " ")
{

	bool isValid = false;

	cout << option1 << endl;
	cout << option2 << endl;
	cout << option3 << endl;
	cout << option4 << endl;
	cout << option5 << endl;

	while (!isValid)
	{
		cout << "Your choice: ";
		cin >> input;
		if (cin.fail() || (input < 1 || input > argCount))
		{
			cinClearIgnore();
			isValid = false;
			cout << "Number have to be between 1 and " << argCount << endl;
		}
		else
		{
			isValid = true;
		}
	}

}

void setsOperationsMenu()
{
	int input = 0;
	menu(
		"1) Obedinenie",
		"2) Sechenie",
		"3) Razlika",
		4,
		input,
		"4) Simetrichna Razlika"
	);

	switch (input)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	}
}

void optionsMenu()
{
	int input = 0;
	menu(
		"1) Reset game",
		"2) Go to different level",
		"3) Change Username",
		4,
		input
	);

}

void finalLevelMenu()
{
	int input = 0;
	while (input != 3)
	{
		menu(
			"1) Operations with sets",
			"2) Options",
			"3) Exit",
			3,
			input
		);

		switch (input)
		{
		case 1:
			setsOperationsMenu();
			break;
		case 2:
			optionsMenu();
			break;
		case 3:
			cout << "Bye!" << endl;
			exit(0);
			break;
		}
	}


}




