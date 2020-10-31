#include "setsOperations.h"
#include "dataValidation.h"
#include <iostream>
#include "struct.h"
#include <vector>
using namespace std;


//vector<MENU_ITEM> menu1{
//	{{ "Operations with sets" }, setsOperationsMenu},
//	{{ "Options" }, optionsMenu},
//	{{ "Exit" }, NULL},
//};

MENU_FUNC_PTR menu2(std::vector<MENU_ITEM> menus)
{
	size_t input = 0;
	bool isValid = false;

	for (size_t i = 0; i < menus.size(); i++)
	{
		cout << i + 1 << ") " << menus[i].text << endl;
	}

	while (!isValid)
	{
		cout << "Your choice: ";
		cin >> input;
		if (cin.fail() || (input < 1 || input > menus.size()))
		{
			cinClearIgnore();
			isValid = false;
			cout << "Number have to be between 1 and " << menus.size() << endl;
		}
		else
		{
			isValid = true;
		}
	}

	return menus[input - 1].funcPtr;
}

//void menu(string option1, string option2, string option3, int argCount, int& input, string option4 = " ", string option5 = " ")
//{
//
//	bool isValid = false;
//
//	cout << option1 << endl;
//	cout << option2 << endl;
//	cout << option3 << endl;
//	cout << option4 << endl;
//	cout << option5 << endl;
//
//	while (!isValid)
//	{
//		cout << "Your choice: ";
//		cin >> input;
//		if (cin.fail() || (input < 1 || input >argCount))
//		{
//			cinClearIgnore();
//			isValid = false;
//			cout << "Number have to be between 1 and " << argCount << endl;
//		}
//		else
//		{
//			isValid = true;
//		}
//	}
//
//}


vector<int> unionOfSets()
{

}

void enterNums()
{
	int elC;
	cout << "How many elements set 1 will have: ";
	cin >> elC;
	cout << "Enter elements for set 1:" << endl;
	for (int i = 0; i < elC; i++)
	{

	}
}

void displayUnion()
{
	vector<int> unionSets = unionOfSets();
}


void numUnionMenu()
{
	char yn;
	bool valid = false;
	if (numSet1.size() == 0)
	{
		enterNums();
	}
	else
	{
		while (!valid)
		{
			cout << "Do you want to use numbers which you enter previously" << endl;
			cout << "Y/N: ";
			cin >> yn;

			if (yn != 'Y' || yn != 'N')
			{
				cout << "Incorrects input!";
			}
			else
			{
				valid = true;
				if (yn == 'Y')
				{
					displayUnion();
				}
				else
				{
					enterNums();
					displayUnion();
				}
			}
		}

	}

}


void setsUnionMenu()
{
	cout << "Choose the type of the elements:" << endl;
	MENU_FUNC_PTR fp = menu2({
			{{ "Numbers" }, setsOperationsMenu},
			{{ "Characters" }, optionsMenu},
			{{ "Words" }, NULL}
		});

	fp();
}

void setsOperationsMenu()
{
	MENU_FUNC_PTR fp = menu2({
				{{ "Union of Sets" }, setsOperationsMenu},
				{{ "Intersection of Sets" }, optionsMenu},
				{{ "Difference of Sets" }, NULL},
				{{ "Symmetric Difference" }, NULL}
		});

	fp();
}

void optionsMenu()
{
	MENU_FUNC_PTR fp = menu2({
				{{ "Operations with sets" }, setsOperationsMenu},
				{{ "Options" }, optionsMenu},
				{{ "Exit" }, NULL}
		});


	exit(0);


	fp();

}

void finalLevelMenu()
{
	/*while (input != 3)
	{*/
	/*	menu(
			"1) Operations with sets",
			"2) Options",
			"3) Exit",
			3,
			input
		);*/

	do
	{
		MENU_FUNC_PTR fp = menu2({
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


	//	switch (input)
	//	{
	//	case 1:
	//		system("cls");
	//		setsOperationsMenu();
	//		break;
	//	case 2:
	//		system("cls");
	//		optionsMenu();
	//		break;
	//	case 3:
	//		system("cls");
	//		cout << "Bye!" << endl;
	//		exit(0);
	//		break;
	//	}
	///*}*/


}




