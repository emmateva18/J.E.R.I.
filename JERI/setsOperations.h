#pragma once
#include <iostream>
#include <vector>
#include "struct.h"



/*-----------DATA--------------------*/
std::vector<int> unionOfNumSets();

std::vector<char> unionOfCharSets();

std::vector<std::string> unionOfStringSets();

/*---------PRESENTATION-------------*/

MENU_FUNC_PTR menu(std::vector<MENU_ITEM> menus);

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





