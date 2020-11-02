#include "diagrams.h"
#include <iostream>
using namespace std;


void intersectionDiagram()
{
	cout << "    OOOOO    OOOOO   " << endl;
	cout << "  O      OOO       O" << endl;
	cout << " O      OOOOO       O" << endl;
	cout << " O      OOOOO       O" << endl;
	cout << "  O      OOO       O" << endl;
	cout << "    OOOOO    OOOOO    " << endl;
}

void unionDiagram()
{
	cout << "    OOOOO     OOOOO   " << endl;
	cout << "   OOOOOOOOOOOOOOOOOO" << endl;
	cout << "  OOOOOOOOOOOOOOOOOOOO" << endl;
	cout << "  OOOOOOOOOOOOOOOOOOOO" << endl;
	cout << "   OOOOOOOOOOOOOOOOOO" << endl;
	cout << "    OOOOO     OOOOO   " << endl;
}

void differenceDiagram()
{
	cout << "     OOOOOO    OOOOOO   " << endl;
	cout << "   OOOOOOOOOOOO      O" << endl;
	cout << "  OOOOOOOO   O        O" << endl;
	cout << "  OOOOOOOO   O        O" << endl;
	cout << "   OOOOOOOOOOOO      O" << endl;
	cout << "     OOOOOO    OOOOOO   " << endl;
}

void symmetricDifferenceDiagram()
{
	cout << "     OOOOO     OOOOO   " << endl;
	cout << "   OOOOOOOOOOOOOOOOOOO" << endl;
	cout << "  OOOOOOOO   OOOOOOOOOO" << endl;
	cout << "  OOOOOOOO   OOOOOOOOOO" << endl;
	cout << "   OOOOOOOOOOOOOOOOOOO" << endl;
	cout << "    OOOOO      OOOOO   " << endl;
}
