#include <iostream>
using namespace std;
#ifndef TERMINAL_H
#define TERMINAL_H

class Terminal {
	public:
	Terminal();
	void initialize();
	bool validateCommand(string firstInput);
	void lesson1();
	void printConsole(vector <string> allCommands, string alias);
};

#endif