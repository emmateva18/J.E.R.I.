#pragma once
#include <iostream>
#include <vector>
#include "struct.h"



/*-----------DATA--------------------*/
std::vector<int> unionOfNumSets();

std::vector<char> unionOfCharSets();

std::vector<std::string> unionOfStringSets();

std::vector<char> intersectionOfCharSets();

std::vector<char> intersectionOfCharSets();

std::vector<std::string> intersectionOfStringSets();

std::vector<char> differenceOfCharSets();

std::vector<char> differenceOfCharSets();

std::vector<std::string> differenceOfStringSets();

std::vector<char> symDifferenceOfCharSets();

std::vector<char> symDifferenceOfCharSets();

std::vector<std::string> symDifferenceOfStringSets();

std::vector<char> differenceOfCharSetsBA();

std::vector<char> differenceOfCharSetsBA();

std::vector<std::string> differenceOfStringSetsBA();


/*---------PRESENTATION-------------*/

MENU_FUNC_PTR menu(std::vector<MENU_ITEM> menus);

// Symetric Diference

void displayCharSymDifference();

void displayNumSymDifference();

void displayStringSymDifference();

void stringSymDifferenceMenu();

void charSymDifferenceMenu();

void numSymDifferenceMenu();

void setsSymDifferenceMenu();


// Diference

void displayCharDifference();

void displayNumDifference();

void displayStringDifference();

void stringDifferenceMenu();

void charDifferenceMenu();

void numDifferenceMenu();

void setsDifferenceMenu();


// Intersection

void displayStringDifference();

void displayCharDifference();

void displayNumDifference();

void stringDifferenceMenu();

void charDifferenceMenu();

void numDifferenceMenu();

void setsDifferenceMenu();


//Union

void displayStringUnion();

void displayCharUnion();

void displayNumUnion();

void enterStrings();

void stringUnionMenu();

void enterChars();

void charUnionMenu();

void enterNums();

void numUnionMenu();

void setsUnionMenu();


// Final Level

void setsOperationsMenu();

void optionsMenu();

void finalLevelMenu();





