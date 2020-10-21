#include "Quiz.h"
#include <vector>
#include <iostream>
#include "struct.h"
using namespace std;

vector<QESTION> Quiz::addQuestions()
{
	QUESTIONS.push_back(
		{ 1,
		"Qestion",
		{"a",
		 "b",
		 "c",
		 "d"
		},
		1
		}
	);



	return QUESTIONS;
}
