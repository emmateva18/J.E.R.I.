#include "Quiz.h"
#include <vector>
#include <iostream>
#include "struct.h"

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
		"Qestion",	// Stem
		{"a",		// Distract 1
		 "b",		// Distract 2
		 "c",		// Distract 3
		 "d"		// Distract 4
		},
		1,			// Correct Answer
		1			// Level
		}
	);

	// Question 2
	QUESTIONS.push_back(
		{ 1,
		"Qestion2",
		{"a2",
		 "b2",
		 "c2",
		 "d2"
		},
		2,
		2
		}
	);

	// Question 3
	QUESTIONS.push_back(
		{ 1,
		"Qestion3",
		{"a3",
		 "b3",
		 "c3",
		 "d3"
		},
		2,
		1
		}
	);

	// Question 4
	QUESTIONS.push_back(
		{ 1,
		"Qestion4",
		{"a4",
		 "b4",
		 "c4",
		 "d4"
		},
		2,
		3
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
					cin.clear();
					cin.ignore(INT_MAX, '\n');
				}

				if (isInputValid(userAnswer))
				{
					correct = true;
				}
				else
				{
					cout << "Invalid input! Number must be between 1 and 4" << endl;;
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
	cout << percentage << "%";
}

bool Quiz::isInputValid(int num)
{
	return (num <= 4);
}
