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
		{ 1,									// ID
		"How many elements an empty set has?",	// Stem
		{"1) 5 or more",						// Distract 1
		 "2) 0",								// Distract 2
		 "3) only 1",							// Distract 3
		 "4) -0 :)"								// Distract 4
		},
		2,										// Correct Answer
		1										// Level
		}
	);

	// Question 2
	QUESTIONS.push_back(
		{ 2,
		"One word to discribe a set?",
		{"1) Zebra :)",
		 "2) Diagram",
		 "3) Collection",
		 "4) Element"
		},
		3,
		1
		}
	);

	// Question 3
	QUESTIONS.push_back(
		{ 3,
		"How is it called the relationship of one set being a subset of another ? ",
		{"1) Inclusion",
		 "2) Jungle",
		 "3) Operation",
		 "4) Property"
		},
		1,
		1
		}
	);


	// Question 4
	QUESTIONS.push_back(
		{ 4,
		"How many relationships represent the Venn diagram?",
		{"1) only 1",
		 "2) ALL",
		 "3) more than 10",
		 "4) 0"
		},
		2,
		1
		}
	);

	QUESTIONS.push_back(
		{ 5,
		"What represents A U B?",
		{"1) Belong only to A set",
		 "2) Belong only to B set",
		 "3) Belong to both sets",
		 "4) Boesn't belong anywhere"
		},
		3,
		2
		}
	);
	
	QUESTIONS.push_back(
		{ 6,
		"What is intersection ? ",
		{"1) All elements from both sets",
		 "2) Collection of all elemnts that are common",
		 "3) Collection of all elemnts that aren't common",
		 "4) Only the elemnts from set A"
		},
		2,
		2
		}
	);
	
	QUESTIONS.push_back(
		{ 7,
		"How can you write the difference between sets? ",
		{"1) A U B",
		 "2) A / B",
		 "3) A - B",
		 "4) A + B"
		},
		3,
		2
		}
	);	
	
	QUESTIONS.push_back(
		{ 8,
		"What is the other name of symmetric set? ",
		{"1) disjoint set",
		 "2) set",
		 "3) symmetric set",
		 "4) disjunctive union"
		},
		4,
		2
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
	cout << endl;
	cout << "Result " << correctAnswersCount << " / " << answersCount << endl;
	cout << percentage << "%" << endl;
	cout << endl;
}

bool Quiz::isInputValid(int num)
{
	return (num >= 1 && num <= 4);
}
