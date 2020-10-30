#include "setsOperationsPresentation.h"
#include "dataValidation.h"
#include <iostream>
using namespace std;

void finalLevelMenu()
{
	bool isValid = false;
	int input;

	cout << "1) Operations with sets" << endl;
	cout << "2) Options" << endl;
	cout << "3) Exit" << endl;

	while (!isValid)
	{
		cout << "Your choice: ";
		cin >> input;
		if (cin.fail() || (input < 1 || input >3))
		{
			cinClearIgnore();
			isValid = false;
			cout << "Number have to be between 1 and 3" << endl;
		}
		else
		{
			isValid = true;
		}
	}
		

	

}
