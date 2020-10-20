#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getUsername()
{
    fstream userData;
    string username;
    userData.open("userData.txt");

    getline(userData, username, '~');

    userData.close();

    return username;
}

int getLevel()
{
    fstream userData;
    string level[2];
    userData.open("userData.txt");
    
    // Need to be fixed
    getline(userData, level[0], '~');
    getline(userData, level[1], '~');

    userData.close();

    return atoi(level[1].c_str());
}



int main()
{
    const string USERNAME = getUsername();
    const int LEVEL = getLevel();
}
