#pragma once
#include <iostream>

struct QESTION
{
	int id = 0;
	std::string stem;
	std::string distract[4];
	int correctAnswer = 0;
};
