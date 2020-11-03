#pragma once
#include <iostream>

void cinClearIgnore();

std::string getUsername();

int getLevel();

bool checkUserData(const std::string username, const int level);

void saveUserData(std::string username, int level);

void levels(int level, std::string username);

void greetings(std::string& username, int& level, bool = 0);

void setsOperationsMenu();

void resetGame();

void goToPreviousLevel();

void optionsMenu();

void finalLevelMenu();

