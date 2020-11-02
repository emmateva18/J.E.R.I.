#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "struct.h"
#include "setsOperations.h"
#include "Quiz.h"
#include "diagrams.h"
#include "levels.h"
using namespace std;


int main()
{
	system("chcp 65001");
	system("cls");

	string username = getUsername();
	int level = getLevel();


	greetings(username, level);
	
}
