#pragma once
#include <vector>
#include <iostream>
#include "struct.h"

class Quiz
{
private:

	std::vector<QESTION> QUESTIONS;

public:

	std::vector<QESTION> addQuestions();
	void QuizMenu(int level);
	bool checkAnswer(int id, int userAnswer);
	void showResults(int correctAnswersCount, int answersCount);

};
