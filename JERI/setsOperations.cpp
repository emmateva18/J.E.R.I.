#include "setsOperations.h"
#include "dataValidation.h"
#include <iostream>
#include "struct.h"
#include <vector>
using namespace std;

vector<int> numSet1, numSet2;
vector<char> charSet1, charSet2;
vector<string> stringSet1, stringSet2;


/*----------UNION-LOGIC-------------*/

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

/*----------UNION-LOGIC-------------*/


/*----------INTERSECTION-LOGIC-------------*/

vector<char> intersectionOfCharSets()
{

	vector<char> intersectionS;

	for (size_t i = 0; i < charSet1.size(); i++)
	{
		for (size_t k = 0; k < charSet2.size(); k++)
		{
			if (charSet1[i] == charSet2[k])
			{
				intersectionS.push_back(charSet1[i]);
			}
		}
	}

	return intersectionS;
}

vector<int> intersectionOfNumSets()
{
	vector<int> intersectionS;

	for (size_t i = 0; i < numSet1.size(); i++)
	{
		for (size_t k = 0; k < numSet2.size(); k++)
		{
			if (numSet1[i] == numSet2[k])
			{
				intersectionS.push_back(numSet1[i]);
			}
		}
	}

	return intersectionS;
}

vector<string> intersectionOfStringSets()
{
	vector<string> intersectionS;

	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		for (size_t k = 0; k < stringSet2.size(); k++)
		{
			if (stringSet1[i] == stringSet2[k])
			{
				intersectionS.push_back(stringSet1[i]);
			}
		}
	}

	return intersectionS;
}

/*----------INTERSECTION-LOGIC-------------*/


/*----------DIFFERENCE-LOGIC-------------*/

vector<char> differenceOfCharSets()
{

	int diffC = 0; // Count equal elements
	vector<char> differenceSet;

	for (size_t i = 0; i < charSet1.size(); i++)
	{
		diffC = 0;
		for (size_t k = 0; k < charSet2.size(); k++)
		{
			if (charSet1[i] == charSet2[k])
			{
				diffC++;
			}
		}
		if (diffC == 0)
		{
			differenceSet.push_back(charSet1[i]);
		}
	}

	return differenceSet;

}

vector<int> differenceOfNumSets()
{

	int diffC = 0; // Count equal elements
	vector<int> differenceSet;

	for (size_t i = 0; i < numSet1.size(); i++)
	{
		diffC = 0;
		for (size_t k = 0; k < numSet2.size(); k++)
		{
			if (numSet1[i] == numSet2[k])
			{
				diffC++;
			}
		}
		if (diffC == 0)
		{
			differenceSet.push_back(numSet1[i]);
		}
	}

	return differenceSet;

}

vector<string> differenceOfStringSets()
{
	int diffC = 0; // Count equal elements
	vector<string> differenceSet;

	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		diffC = 0;
		for (size_t k = 0; k < stringSet2.size(); k++)
		{
			if (stringSet1[i] == stringSet2[k])
			{
				diffC++;
			}
		}
		if (diffC == 0)
		{
			differenceSet.push_back(stringSet1[i]);
		}
	}

	return differenceSet;

}

/*----------DIFFERENCE-LOGIC-------------*/


/*----------SYMETRIC-DIFFERENCE-LOGIC-------------*/


vector<char> differenceOfCharSetsBA()
{

	int diffC = 0; // Count equal elements
	vector<char> differenceSet;

	for (size_t i = 0; i < charSet2.size(); i++)
	{
		diffC = 0;
		for (size_t k = 0; k < charSet1.size(); k++)
		{
			if (charSet2[i] == charSet1[k])
			{
				diffC++;
			}
		}
		if (diffC == 0)
		{
			differenceSet.push_back(charSet2[i]);
		}
	}

	return differenceSet;

}

vector<int> differenceOfNumSetsBA()
{

	int diffC = 0; // Count equal elements
	vector<int> differenceSet;

	for (size_t i = 0; i < numSet2.size(); i++)
	{
		diffC = 0;
		for (size_t k = 0; k < numSet1.size(); k++)
		{
			if (numSet2[i] == numSet1[k])
			{
				diffC++;
			}
		}
		if (diffC == 0)
		{
			differenceSet.push_back(numSet2[i]);
		}
	}

	return differenceSet;

}

vector<string> differenceOfStringSetsBA()
{
	int diffC = 0; // Count equal elements
	vector<string> differenceSet;

	for (size_t i = 0; i < stringSet2.size(); i++)
	{
		diffC = 0;
		for (size_t k = 0; k < stringSet1.size(); k++)
		{
			if (stringSet2[i] == stringSet1[k])
			{
				diffC++;
			}
		}
		if (diffC == 0)
		{
			differenceSet.push_back(stringSet2[i]);
		}
	}

	return differenceSet;

}


vector<char> symDifferenceOfCharSets()
{

	return {1,2,3,4};
}

vector<int> symDifferenceOfNumSets()
{
	vector<int> difA = differenceOfNumSets();
	vector<int> difB = differenceOfNumSetsBA();

	vector<int> symDif;

	int temp;
	size_t count = 0;
	for (size_t i = 0; i < difA.size(); i++)
	{
		for (size_t j = 0; j < difB.size() - count; j++)
		{
			if (difA[i] == difB[j])
			{
				temp = difB[j];
				difB[j] = difB[difB.size() - 1 - count];
				difB[numSet2.size() - 1 - count] = temp;
				count++;
			}
		}
		symDif.push_back(difA[i]);
	}
	for (int i = 0; i < difB.size() - count; i++)
	{
		symDif.push_back(difB[i]);
	}

	return symDif;
	
}

vector<string> symDifferenceOfStringSets()
{
	return { "1","2:","3","ss4|" };

}


/*----------SYMETRIC-DIFFERENCE-LOGIC-------------*/





MENU_FUNC_PTR menu(std::vector<MENU_ITEM> menus)
{
	size_t input = 0;
	bool isValid = false;

	cout << "-------------------------------------" << endl;
	for (size_t i = 0; i < menus.size(); i++)
	{
		cout << i + 1 << ") " << menus[i].text << endl;
	}
	cout << "-------------------------------------" << endl;

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

/*----------SYMETRIC-DIFFERENCE-PRESENTATION-------*/

void displayCharSymDifference()
{
	vector<char> symDifferenceSets = symDifferenceOfCharSets();

	cout << "Symetric Difference" << endl;

	if (symDifferenceSets.size() == 0)
	{
		cout << "No Symetric Difference" << endl;
	}
	else
	{
		for (size_t i = 0; i < symDifferenceSets.size(); i++)
		{
			cout << symDifferenceSets[i] << " ";
		}
	}







	cout << endl;
}

void displayNumSymDifference()
{
	vector<int> symDifferenceSets = symDifferenceOfNumSets();

	cout << "Symetric Difference" << endl;

	if (symDifferenceSets.size() == 0)
	{
		cout << "No Symetric Difference" << endl;
	}
	else
	{
		for (size_t i = 0; i < symDifferenceSets.size(); i++)
		{
			cout << symDifferenceSets[i] << " ";
		}
	}


	cout << endl;
}

void displayStringSymDifference()
{
	vector<string> symDifferenceSets = symDifferenceOfStringSets();

	cout << "Symetric Difference" << endl;

	if (symDifferenceSets.size() == 0)
	{
		cout << "No Symetric Difference" << endl;
	}
	else
	{
		for (size_t i = 0; i < symDifferenceSets.size(); i++)
		{
			cout << symDifferenceSets[i] << " ";
		}
	}


	cout << endl;
}

void stringSymDifferenceMenu()
{
	string yn;
	bool valid = false;
	if (stringSet1.size() == 0 && stringSet2.size() == 0)
	{
		enterStrings();
		displayStringSymDifference();
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
					displayStringSymDifference();
				}
				else
				{
					stringSet1.clear();
					stringSet2.clear();
					enterNums();
					displayStringSymDifference();
				}
			}
		}

	}

}

void charSymDifferenceMenu()
{
	string yn;
	bool valid = false;
	if (charSet1.size() == 0 && charSet2.size() == 0)
	{
		enterChars();
		displayCharSymDifference();
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
				cout << "Incorrect input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
				{
					displayCharSymDifference();
				}
				else
				{
					charSet1.clear();
					charSet2.clear();
					enterNums();
					displayCharSymDifference();
				}
			}
		}

	}

}

void numSymDifferenceMenu()
{
	string yn;
	bool valid = false;
	if (numSet1.size() == 0)
	{
		enterNums();
		displayNumSymDifference();
	}
	else
	{
		while (!valid)
		{
			cout << "Do you want to use numbers which you enter previously" << endl;
			cout << "Y/N: ";
			cin >> yn;

			if (yn != "Y" && yn != "N")
			{
				cout << "Incorrect input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
				{
					displayNumSymDifference();
				}
				else
				{
					numSet1.clear();
					numSet2.clear();
					enterNums();
					displayNumSymDifference();
				}
			}
		}

	}

}

void setsSymDifferenceMenu()
{
	cout << "Choose the type of the elements:" << endl;
	MENU_FUNC_PTR fp = menu({
			{{ "Numbers" }, numSymDifferenceMenu},
			{{ "Characters" }, charSymDifferenceMenu},
			{{ "Words" }, stringSymDifferenceMenu}
		});

	fp();
}

/*----------SYMETRIC-DIFFERENCE-PRESENTATION-------*/


/*----------DIFFERENCE-PRESENTATION-------*/

void displayCharDifference()
{
	vector<char> differenceSets = differenceOfCharSets();

	cout << "Difference" << endl;

	if (differenceSets.size() == 0)
	{
		cout << "No Difference" << endl;
	}
	else
	{
		for (size_t i = 0; i < differenceSets.size(); i++)
		{
			cout << differenceSets[i] << " ";
		}
	}


	cout << endl;
}

void displayNumDifference()
{
	vector<int> differenceSets = differenceOfNumSets();

	cout << "Difference" << endl;

	if (differenceSets.size() == 0)
	{
		cout << "No Difference" << endl;
	}
	else
	{
		for (size_t i = 0; i < differenceSets.size(); i++)
		{
			cout << differenceSets[i] << " ";
		}
	}


	cout << endl;
}

void displayStringDifference()
{
	vector<string> differenceSets = differenceOfStringSets();

	cout << "Difference" << endl;

	if (differenceSets.size() == 0)
	{
		cout << "No Difference" << endl;
	}
	else
	{
		for (size_t i = 0; i < differenceSets.size(); i++)
		{
			cout << differenceSets[i] << " ";
		}
	}


	cout << endl;
}

void stringDifferenceMenu()
{
	string yn;
	bool valid = false;
	if (stringSet1.size() == 0 && stringSet2.size() == 0)
	{
		enterStrings();
		displayStringDifference();
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
					displayStringDifference();
				}
				else
				{
					stringSet1.clear();
					stringSet2.clear();
					enterNums();
					displayStringDifference();
				}
			}
		}

	}

}

void charDifferenceMenu()
{
	string yn;
	bool valid = false;
	if (charSet1.size() == 0 && charSet2.size() == 0)
	{
		enterChars();
		displayCharDifference();
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
				cout << "Incorrect input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
				{
					displayCharDifference();
				}
				else
				{
					charSet1.clear();
					charSet2.clear();
					enterNums();
					displayCharDifference();
				}
			}
		}

	}

}

void numDifferenceMenu()
{
	char yn;
	bool valid = false;
	if (numSet1.size() == 0)
	{
		enterNums();
		displayNumDifference();
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
				cout << "Incorrect input!";
			}
			else
			{
				valid = true;
				if (yn == 'Y')
				{
					displayNumDifference();
				}
				else
				{
					numSet1.clear();
					numSet2.clear();
					enterNums();
					displayNumDifference();
				}
			}
		}

	}

}

void setsDifferenceMenu()
{
	cout << "Choose the type of the elements:" << endl;
	MENU_FUNC_PTR fp = menu({
			{{ "Numbers" }, numDifferenceMenu},
			{{ "Characters" }, charDifferenceMenu},
			{{ "Words" }, stringDifferenceMenu}
		});

	fp();
}

/*----------DIFFERENCE-PRESENTATION-------*/


/*----------INTERSECTION-PRESENTATION-------*/

void displayCharIntersection()
{
	vector<char> intersectionSets = intersectionOfCharSets();

	cout << "Intersection" << endl;

	if (intersectionSets.size() == 0)
	{
		cout << "No intersection" << endl;
	}
	else
	{
		for (size_t i = 0; i < intersectionSets.size(); i++)
		{
			cout << intersectionSets[i] << " ";
		}
	}


	cout << endl;
}

void displayNumIntersection()
{
	vector<int> intersectionSets = intersectionOfNumSets();

	cout << "Intersection" << endl;

	if (intersectionSets.size() == 0)
	{
		cout << "No intersection" << endl;
	}
	else
	{
		for (size_t i = 0; i < intersectionSets.size(); i++)
		{
			cout << intersectionSets[i] << " ";
		}
	}


	cout << endl;
}

void displayStringIntersection()
{
	vector<string> intersectionSets = intersectionOfStringSets();

	cout << "Intersection" << endl;

	if (intersectionSets.size() == 0)
	{
		cout << "No Intersection" << endl;
	}
	else
	{
		for (size_t i = 0; i < intersectionSets.size(); i++)
		{
			cout << intersectionSets[i] << " ";
		}
	}


	cout << endl;
}

void stringIntersectionMenu()
{
	string yn;
	bool valid = false;
	if (stringSet1.size() == 0 && stringSet2.size() == 0)
	{
		enterStrings();
		displayStringIntersection();
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
					displayStringIntersection();
				}
				else
				{
					stringSet1.clear();
					stringSet2.clear();
					enterNums();
					displayStringIntersection();
				}
			}
		}

	}

}

void charIntersectionMenu()
{
	string yn;
	bool valid = false;
	if (charSet1.size() == 0 && charSet2.size() == 0)
	{
		enterChars();
		displayCharIntersection();
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
				cout << "Incorrect input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
				{
					displayCharIntersection();
				}
				else
				{
					charSet1.clear();
					charSet2.clear();
					enterNums();
					displayCharIntersection();
				}
			}
		}

	}

}

void numIntersectionMenu()
{
	char yn;
	bool valid = false;
	if (numSet1.size() == 0)
	{
		enterNums();
		displayNumIntersection();
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
				cout << "Incorrect input!";
			}
			else
			{
				valid = true;
				if (yn == 'Y')
				{
					displayNumIntersection();
				}
				else
				{
					numSet1.clear();
					numSet2.clear();
					enterNums();
					displayNumIntersection();
				}
			}
		}

	}

}

void setsIntersectionMenu()
{
	cout << "Choose the type of the elements:" << endl;
	MENU_FUNC_PTR fp = menu({
			{{ "Numbers" }, numIntersectionMenu},
			{{ "Characters" }, charIntersectionMenu},
			{{ "Words" }, stringIntersectionMenu}
		});

	fp();
}

/*----------INTERSECTION-PRESENTATION-------*/


/*----------UNION-PRESENTATION-------*/

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
	string yn;
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

			if (yn != "Y" && yn != "N")
			{
				cout << "Incorrects input!";
			}
			else
			{
				valid = true;
				if (yn == "Y")
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

/*----------UNION-PRESENTATION-------*/

void setsOperationsMenu()
{
	MENU_FUNC_PTR fp = menu({
				{{ "Union of Sets" }, setsUnionMenu},
				{{ "Intersection of Sets" }, setsIntersectionMenu},
				{{ "Difference of Sets" }, setsDifferenceMenu},
				{{ "Symmetric Difference" }, setsSymDifferenceMenu}
		});

	fp();
}

void optionsMenu()
{
	MENU_FUNC_PTR fp = menu({
				{{ "Reset game" }, NULL},
				{{ "Go to previous level" }, NULL},
				{{ "Change Username" }, NULL}
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
