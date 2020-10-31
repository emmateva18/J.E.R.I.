#include "setsOperations.h"
#include "dataValidation.h"
#include <iostream>
#include "struct.h"
#include <vector>
using namespace std;

vector<int> numSet1, numSet2;
vector<char> charSet1, charSet2;
vector<string> stringSet1, stringSet2;


vector<char> unionOfCharSets()
{
	vector<char> unionS;

	char temp;
	size_t count = 0;
	for (size_t i = 0; i < charSet1.size(); i++)
	{
		for (size_t j = 0; j < charSet2.size() - count; j++)
		{
			if (charSet1[i] == charSet2[j])
			{
				temp = charSet2[j];
				charSet2[j] = charSet2[charSet2.size() - 1 - count];
				charSet2[charSet2.size() - 1 - count] = temp;
				count++;
			}
		}
		unionS.push_back(charSet1[i]);
	}
	for (int i = 0; i < charSet2.size() - count; i++)
	{
		unionS.push_back(charSet2[i]);
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

vector<int> unionOfNumSets()
{
	vector<int> unionS;

	int temp;
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
}

vector<string> unionOfStringSets()
{
	vector<string> unionS;

	string temp;
	size_t count = 0;
	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		for (size_t j = 0; j < stringSet2.size() - count; j++)
		{
			if (stringSet1[i] == stringSet2[j])
			{
				temp = stringSet2[j];
				stringSet2[j] = stringSet2[stringSet2.size() - 1 - count];
				stringSet2[stringSet2.size() - 1 - count] = temp;
				count++;
			}
		}
		unionS.push_back(stringSet1[i]);
	}
	for (int i = 0; i < stringSet2.size() - count; i++)
	{
		unionS.push_back(stringSet2[i]);
	}

	return unionS;
}


MENU_FUNC_PTR menu(std::vector<MENU_ITEM> menus)
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

void displayCharUnion()
{
	vector<char> unionSets = unionOfCharSets();

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

void displayNumUnion()
{
	vector<int> unionSets = unionOfNumSets();

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

void displayStringUnion()
{
	vector<string> unionSets = unionOfStringSets();

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

void enterStrings()
{
	int elC1, elC2;
	string word;
	cout << "How many words set 1 will have: ";
	cin >> elC1;

	cout << "Enter words for set 1:" << endl;
	for (int i = 0; i < elC1; i++)
	{
		cout << "Word " << i + 1 << ": ";
		cin >> word;
		stringSet1.push_back(word);
	}

	cout << "How many words set 2 will have: ";
	cin >> elC2;

	cout << "Enter words for set 2:" << endl;
	for (int i = 0; i < elC2; i++)
	{
		cout << "Word " << i + 1 << ": ";
		cin >> word;
		stringSet2.push_back(word);
	}
}

void stringUnionMenu()
{
	string yn;
	bool valid = false;
	if (stringSet1.size() == 0 && stringSet2.size() == 0)
	{
		enterStrings();
		displayStringUnion();
	}
	else
	{
		while (!valid)
		{
			cout << "Do you want to use words which you enter previously" << endl;
			cout << "Y/N: ";
			cin >> yn;

			if (yn != "Y" && yn != "N")
			{
				cout << "Incorrects input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
				{
					displayStringUnion();
				}
				else
				{
					stringSet1.clear();
					stringSet2.clear();
					enterNums();
					displayStringUnion();
				}
			}
		}

	}

}

void enterChars()
{
	int elC1, elC2;
	char Char;
	cout << "How many characters set 1 will have: ";
	cin >> elC1;

	cout << "Enter characters for set 1:" << endl;
	for (int i = 0; i < elC1; i++)
	{
		cout << "Character " << i + 1 << ": ";
		cin >> Char;
		charSet1.push_back(Char);
	}

	cout << "How many characters set 2 will have: ";
	cin >> elC2;

	cout << "Enter characters for set 2:" << endl;
	for (int i = 0; i < elC2; i++)
	{
		cout << "Character " << i + 1 << ": ";
		cin >> Char;
		charSet2.push_back(Char);
	}
}

void charUnionMenu()
{
	string yn;
	bool valid = false;
	if (charSet1.size() == 0 && charSet2.size() == 0)
	{
		enterChars();
		displayCharUnion();
	}
	else
	{
		while (!valid)
		{
			cout << "Do you want to use characters which you enter previously" << endl;
			cout << "Y/N: ";
			cin >> yn;

			if (yn != "Y" && yn != "N")
			{
				cout << "Incorrects input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
				{
					displayCharUnion();
				}
				else
				{
					charSet1.clear();
					charSet2.clear();
					enterNums();
					displayCharUnion();
				}
			}
		}

	}

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

void numUnionMenu()
{
	char yn;
	bool valid = false;
	if (numSet1.size() == 0)
	{
		enterNums();
		displayNumUnion();
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
					displayNumUnion();
				}
				else
				{
					numSet1.clear();
					numSet2.clear();
					enterNums();
					displayNumUnion();
				}
			}
		}

	}

}

void setsUnionMenu()
{
	cout << "Choose the type of the elements:" << endl;
	MENU_FUNC_PTR fp = menu({
			{{ "Numbers" }, numUnionMenu},
			{{ "Characters" }, charUnionMenu},
			{{ "Words" }, stringUnionMenu}
		});

	fp();
}

void setsOperationsMenu()
{
	MENU_FUNC_PTR fp = menu({
				{{ "Union of Sets" }, setsUnionMenu},
				{{ "Intersection of Sets" }, NULL},
				{{ "Difference of Sets" }, NULL},
				{{ "Symmetric Difference" }, NULL}
		});

	fp();
}

void optionsMenu()
{
	MENU_FUNC_PTR fp = menu({
				{{ "Operations with sets" }, setsOperationsMenu},
				{{ "Options" }, optionsMenu},
				{{ "Exit" }, NULL}
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




