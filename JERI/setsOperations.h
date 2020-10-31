#pragma once
#include <iostream>
#include <vector>
#include "struct.h"

std::vector<int> numSet1, numSet2;
std::vector<char> charSet1, charSet2;
std::vector<std::string> stringSet1, stringSet2;

MENU_FUNC_PTR menu2(std::vector<MENU_ITEM> menus);

//void menu(std::string, std::string, std::string, int, int&, std::string option4, std::string option5);

std::vector<int> unionOfSets();

void numUnionMenu();

void enterNums();

void displayUnion();

void setsUnionMenu();

void setsOperationsMenu();

void finalLevelMenu();





