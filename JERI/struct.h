#pragma once
#include <iostream>

struct QESTION
{
	int id = 0;
	std::string stem;
	std::string distract[4];
	int correctAnswer = -1;
	int level = 0;
};

typedef void(*MENU_FUNC_PTR)();

struct MENU_ITEM
{
	std::string text;
	MENU_FUNC_PTR funcPtr;
};
