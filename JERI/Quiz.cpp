#include "Quiz.h"
#include <vector>
#include <iostream>
#include "struct.h"
#include "dataValidation.h"

using namespace std;

Quiz::Quiz()
{
	Quiz::addQuestions();
}

void Quiz::addQuestions()
{
	// Question 1
	QUESTIONS.push_back(
		{ 1,		// ID
		"What is set",	// Stem
		{"1) Hot Dog",		// Distract 1
		 "2) Jelezar",		// Distract 2
		 "3) Something with numbers",		// Distract 3
		 "4) Kondoriano Horhe"		// Distract 4
		},
		1,			// Correct Answer
		1			// Level
		}
	);

	// Question 2
	QUESTIONS.push_back(
		{ 1,
		"What is sechenie",
		{"1) Krokodil",
		 "2) Zebra",
		 "3) Operation with sets",
		 "4) Muha"
		},
		2,
		2
		}
	);

	// Question 3
	QUESTIONS.push_back(
		{ 1,
		"What picture is sechenie",
		{"1) Kozo",
		 "2) This",
		 "3) Mirko",
		 "4) Kravarka"
		},
		2,
		3
		}
	);

	// Question 4
	QUESTIONS.push_back(
		{ 1,
		"What is subset",
		{"1) Kuzu",
		 "2) Me",
		 "3) Gandau",
		 "4) This"
		},
		2,
		1
		}
	);

}

void Quiz::QuizMenu(int level)
{
	int userAnswer;
	int correctAnswersCount = 0;
	const int answerCount = 4;
	bool correct;

	for (size_t i = 0; i < QUESTIONS.size(); i++)
	{
		if (QUESTIONS[i].level == level)
		{
			cout << QUESTIONS[i].stem << endl;
			for (int j = 0; j < 4; j++)
			{
				cout << QUESTIONS[i].distract[j] << endl;
			}

			do
			{
				cout << "Your answer: ";

				if (!(cin >> userAnswer))
				{
					cinClearIgnore();
				}

				if (isInputValid(userAnswer))
				{
					correct = true;
				}
				else
				{
					cout << "Invalid input! Number must be between 1 and 4" << endl;
					correct = false;
				}
			} while (!correct);

			if (checkAnswer(QUESTIONS[i].id, userAnswer))
			{
				correctAnswersCount++;
			}
		}
	}

	showResults(correctAnswersCount, answerCount);

}

bool Quiz::checkAnswer(int id, int userAnswer)
{
	for (size_t i = 0; i < QUESTIONS.size(); i++)
	{
		if (id == QUESTIONS[i].id &&
			userAnswer == QUESTIONS[i].correctAnswer)
		{
			return true;
		}
	}

	return false;
}

void Quiz::showResults(int correctAnswersCount, int answersCount)
{
	float percentage = ((float)correctAnswersCount / (float)answersCount) * 100;
	cout << "Result " << correctAnswersCount << " / " << answersCount << endl;
	cout << percentage << "%" << endl;
	cout << endl;
}

bool Quiz::isInputValid(int num)
{
	return (num >= 1 && num <= 4);
}
