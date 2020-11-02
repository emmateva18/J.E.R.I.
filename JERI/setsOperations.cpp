#include "setsOperations.h"
#include <iostream>
#include "struct.h"
#include "levels.h"
#include "diagrams.h"
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
	vector<char> difA = differenceOfCharSets();
	vector<char> difB = differenceOfCharSetsBA();

	vector<char> symDif;

	char temp;
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
	vector<string> difA = differenceOfStringSets();
	vector<string> difB = differenceOfStringSetsBA();

	vector<string> symDif;

	string temp;
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
	system("cls");

	vector<char> symDifferenceSets = symDifferenceOfCharSets();

	cout << "Symetric Difference" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < charSet1.size(); i++)
	{
		cout << charSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < charSet2.size(); i++)
	{
		cout << charSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;


	if (symDifferenceSets.size() == 0)
	{
		cout << "No Symetric Difference" << endl;
	}
	else
	{
		cout << "(A " << u8"\u0394" << " B) = { ";
		for (size_t i = 0; i < symDifferenceSets.size(); i++)
		{
			cout << symDifferenceSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		symmetricDifferenceDiagram();
	}







	cout << endl;
}

void displayNumSymDifference()
{
	system("cls");

	vector<int> symDifferenceSets = symDifferenceOfNumSets();

	cout << "Symetric Difference" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < numSet1.size(); i++)
	{
		cout << numSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < numSet2.size(); i++)
	{
		cout << numSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (symDifferenceSets.size() == 0)
	{
		cout << "No Symetric Difference" << endl;
	}
	else
	{
		cout << "(A " << u8"\u0394" << " B) = { ";
		for (size_t i = 0; i < symDifferenceSets.size(); i++)
		{

			cout << symDifferenceSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		//symmetricDifferenceDiagram();
	}


	cout << endl;
}

void displayStringSymDifference()
{
	system("cls");

	vector<string> symDifferenceSets = symDifferenceOfStringSets();

	cout << "Symetric Difference" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		cout << stringSet1[i] << " ";
	}
	cout << " }";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < stringSet2.size(); i++)
	{
		cout << stringSet2[i] << " ";
	}
	cout << " }";
	cout << endl;
	cout << endl;

	if (symDifferenceSets.size() == 0)
	{
		cout << "No Symetric Difference" << endl;
	}
	else
	{
		cout << "(A " << u8"\u0394" << " B) = { ";
		for (size_t i = 0; i < symDifferenceSets.size(); i++)
		{
			cout << symDifferenceSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		//symmetricDifferenceDiagram();
	}


	cout << endl;
}

void stringSymDifferenceMenu()
{
	system("cls");

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
	system("cls");

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
	system("cls");

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
	system("cls");

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
	system("cls");

	vector<char> differenceSets = differenceOfCharSets();

	cout << "Difference" << endl;
	cout << endl;

	cout << "A = { ";
	for (size_t i = 0; i < charSet1.size(); i++)
	{
		cout << charSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < charSet2.size(); i++)
	{
		cout << charSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (differenceSets.size() == 0)
	{
		cout << "No Difference" << endl;
	}
	else
	{
		cout << "(A / B) = { ";
		for (size_t i = 0; i < differenceSets.size(); i++)
		{
			cout << differenceSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		differenceDiagram();
	}


	cout << endl;
}

void displayNumDifference()
{
	system("cls");

	vector<int> differenceSets = differenceOfNumSets();

	cout << "Difference" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < numSet1.size(); i++)
	{
		cout << numSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < numSet2.size(); i++)
	{
		cout << numSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (differenceSets.size() == 0)
	{
		cout << "No Difference" << endl;
	}
	else
	{
		cout << "(A / B) = { ";
		for (size_t i = 0; i < differenceSets.size(); i++)
		{
			cout << differenceSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		differenceDiagram();
	}


	cout << endl;
}

void displayStringDifference()
{
	system("cls");

	vector<string> differenceSets = differenceOfStringSets();

	cout << "Difference" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		cout << stringSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < stringSet2.size(); i++)
	{
		cout << stringSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;


	if (differenceSets.size() == 0)
	{
		cout << "No Difference" << endl;
	}
	else
	{
		cout << "(A / B) = { ";
		for (size_t i = 0; i < differenceSets.size(); i++)
		{
			cout << differenceSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		differenceDiagram();
	}


	cout << endl;
}

void stringDifferenceMenu()
{
	system("cls");

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
	system("cls");

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
	system("cls");

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
	system("cls");

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
	system("cls");

	vector<char> intersectionSets = intersectionOfCharSets();

	cout << "Intersection" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < charSet1.size(); i++)
	{
		cout << charSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < charSet2.size(); i++)
	{
		cout << charSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (intersectionSets.size() == 0)
	{
		cout << "No intersection" << endl;
	}
	else
	{
		cout << "(A " << u8"\u2229" << " B) = { ";
		for (size_t i = 0; i < intersectionSets.size(); i++)
		{
			cout << intersectionSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		intersectionDiagram();
	}


	cout << endl;
}

void displayNumIntersection()
{
	system("cls");

	vector<int> intersectionSets = intersectionOfNumSets();

	cout << "Intersection" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < numSet1.size(); i++)
	{
		cout << numSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < numSet2.size(); i++)
	{
		cout << numSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (intersectionSets.size() == 0)
	{
		cout << "No intersection" << endl;
	}
	else
	{
		cout << "(A " << u8"\u2229" << " B) = { ";
		for (size_t i = 0; i < intersectionSets.size(); i++)
		{
			cout << intersectionSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		intersectionDiagram();
	}


	cout << endl;
}

void displayStringIntersection()
{
	system("cls");

	vector<string> intersectionSets = intersectionOfStringSets();

	cout << "Intersection" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		cout << stringSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < stringSet2.size(); i++)
	{
		cout << stringSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (intersectionSets.size() == 0)
	{
		cout << "No Intersection" << endl;
	}
	else
	{
		cout << "(A " << u8"\u2229" << " B) = { ";
		for (size_t i = 0; i < intersectionSets.size(); i++)
		{
			cout << intersectionSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		intersectionDiagram();
	}


	cout << endl;
}

void stringIntersectionMenu()
{
	system("cls");

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
	system("cls");

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
	system("cls");
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
	system("cls");
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
	system("cls");

	cout << "Union" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < charSet1.size(); i++)
	{
		cout << charSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < charSet2.size(); i++)
	{
		cout << charSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;

	if (unionSets.size() == 0)
	{
		cout << "No Union" << endl;
	}
	else
	{
		cout << "(A U B) = { ";
		for (size_t i = 0; i < unionSets.size(); i++)
		{
			cout << unionSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		unionDiagram();
	}


	cout << endl;
}

void displayNumUnion()
{
	vector<int> unionSets = unionOfNumSets();
	system("cls");

	cout << "Union" << endl;

	cout << "A = { ";
	for (size_t i = 0; i < numSet1.size(); i++)
	{
		cout << numSet1[i] << " ";
	}
	cout << "}";
	cout << endl;

	cout << "B = { ";
	for (size_t i = 0; i < numSet2.size(); i++)
	{
		cout << numSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;


	if (unionSets.size() == 0)
	{
		cout << "No Union" << endl;
	}
	else
	{
		cout << "(A U B) = { ";
		for (size_t i = 0; i < unionSets.size(); i++)
		{
			cout << unionSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		unionDiagram();
	}


	cout << endl;
}

void displayStringUnion()
{
	vector<string> unionSets = unionOfStringSets();
	system("cls");

	cout << "Union" << endl;


	// Display elements of set A

	cout << "A = { ";
	for (size_t i = 0; i < stringSet1.size(); i++)
	{
		cout << stringSet1[i] << " ";
	}
	cout << "}";
	cout << endl;


	// Display elements of set B

	cout << "B = { ";
	for (size_t i = 0; i < stringSet2.size(); i++)
	{
		cout << stringSet2[i] << " ";
	}
	cout << "}";
	cout << endl;
	cout << endl;


	if (unionSets.size() == 0)
	{
		cout << "No Union" << endl;
	}
	else
	{
		cout << "(A U B) = { ";
		for (size_t i = 0; i < unionSets.size(); i++)
		{
			cout << unionSets[i] << " ";
		}
		cout << "}" << endl;
		cout << endl;
		cout << endl;
		unionDiagram();
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

	system("cls");

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

	system("cls");
	// Clear screen
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
	system("cls");
	//
	/// </summary>
	int num1;
	float elC1I, elC2I;
	int elC1, elC2;
	float num;
	bool isValid = false, isValid2 = false;
	
	while (!isValid2)
	{
		cout << "How many elements set 1 will have: ";
		cin >> elC1I;
		elC1= (int)elC1I;
		if (cin.fail() || elC1 != elC1I)
		{
			cinClearIgnore();
			isValid = false;
			cout << "Incorrect input! " << endl;
		}
		else
		{
			isValid2 = true;
		}
	}

	cout << "Enter elements (whole numbers) for set 1:" << endl;


	for (int i = 0; i < elC1; i++)
	{
		isValid = false;
		while (!isValid)
		{
			cout << "Element " << i + 1 << ": ";
			cin >> num;
			num1 = (int)num;
			if (cin.fail())
			{
				cinClearIgnore();
				isValid = false;
				cout << "Incorrect input! " << endl;
			}
			else if (num1 != num)
			{
				cinClearIgnore();
				isValid = false;
				cout << "Incorrect input! " << endl;
			}
			else
			{
				isValid = true;
			}
		}
		numSet1.push_back(num1);
	}

	system("cls");

	isValid2 = false;
	while (!isValid2)
	{
		cout << "How many elements set 2 will have: ";
		cin >> elC2I;
		elC2 = (int)elC2I;
		if (cin.fail() || elC2 != elC2I)
		{
			cinClearIgnore();
			isValid = false;
			cout << "Incorrect input! " << endl;
		}
		else
		{
			isValid2 = true;
		}
	}

	cout << "Enter elements (whole numbers) for set 2:" << endl;

	for (int i = 0; i < elC2; i++)
	{
		isValid = false;
		while (!isValid)
		{
			cout << "Element " << i + 1 << ": ";
			cin >> num;
			num1 = (int)num;
			if (cin.fail())
			{
				cinClearIgnore();
				isValid = false;
				cout << "Incorrect input! " << endl;
			}
			else if (num1 != num)
			{
				cinClearIgnore();
				isValid = false;
				cout << "Incorrect input! " << endl;
			}
			else
			{
				isValid = true;
			}
		}
		numSet2.push_back(num1);
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
	system("cls");

	cout << "Choose the type of the elements:" << endl;

	// Text for the options in the menu

	MENU_FUNC_PTR fp = menu({
			{{ "Numbers" }, numUnionMenu},
			{{ "Characters" }, charUnionMenu},
			{{ "Words" }, stringUnionMenu}
		});

	fp();
}

/*----------UNION-PRESENTATION-------*/

