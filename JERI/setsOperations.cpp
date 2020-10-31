#include "setsOperations.h"
#include "dataValidation.h"
#include <iostream>
#include "struct.h"
#include <vector>
using namespace std;

vector<int> numSet1, numSet2;
vector<char> charSet1, charSet2;
vector<string> stringSet1, stringSet2;


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
	vector<int> unionS;

	int temp, index = 0;
	size_t count = 0;
	for (size_t i = 0; i < numSet1.size(); i++)
	{
		for (size_t j = 0; j < numSet2.size() - count; j++)
		{
			if (numSet1[i] == numSet2[j])
			{
				temp = numSet2[j];
				numSet2[j] = numSet2[numSet2.size() - 1 - count];
				numSet2[numSet2.size() - 1 - count] = temp;
				count++;
			}
		}
		unionS.push_back(numSet1[i]);
	}
	for (int i = 0; i < numSet2.size() - count; i++)
	{
		unionS.push_back(numSet2[i]);
	}

	return unionS;


	//vector<int> unionS;

	//for (size_t i = 0; i < numSet1.size(); i++)
	//{
	//	for (size_t k = 0; k < numSet2.size(); k++)
	//	{
	//		if (numSet1[i] == numSet1[k])
	//		{
	//			unionS.push_back(numSet1[i]);
	//		}
	//	}
	//}

	//return unionS;
}

void enterNums()
{
	int elC1, elC2, num;
	cout << "How many elements set 1 will have: ";
	cin >> elC1;

	cout << "Enter elements for set 1:" << endl;
	for (int i = 0; i < elC1; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> num;
		numSet1.push_back(num);
	}

	cout << "How many elements set 2 will have: ";
	cin >> elC2;

	cout << "Enter elements for set 2:" << endl;
	for (int i = 0; i < elC2; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> num;
		numSet2.push_back(num);
	}
}

void displayUnion()
{
	vector<int> unionSets = unionOfSets();

	cout << "Union" << endl;

	if (unionSets.size() == 0)
	{
		cout << "No Union" << endl;
	}
	else
	{
		for (size_t i = 0; i < unionSets.size(); i++)
		{
			cout << unionSets[i] << " ";
		}
	}


	cout << endl;
}


void numUnionMenu()
{
	char yn;
	bool valid = false;
	if (numSet1.size() == 0)
	{
		enterNums();
		displayUnion();
	}
	else
	{
		while (!valid)
		{
			cout << "Do you want to use numbers which you enter previously" << endl;
			cout << "Y/N: ";
			cin >> yn;

			if (yn != 'Y' && yn != 'N')
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
					numSet1.clear();
					numSet2.clear();
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
			{{ "Numbers" }, numUnionMenu},
			{{ "Characters" }, NULL},
			{{ "Words" }, NULL}
		});

	fp();
}

void setsOperationsMenu()
{
	MENU_FUNC_PTR fp = menu2({
				{{ "Union of Sets" }, numUnionMenu},
				{{ "Intersection of Sets" }, NULL},
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




