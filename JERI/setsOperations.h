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




/*---------PRESENTATION-------------*/

MENU_FUNC_PTR menu(std::vector<MENU_ITEM> menus);

// Diference



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

void setsOperationsMenu();

void optionsMenu();

void finalLevelMenu();





