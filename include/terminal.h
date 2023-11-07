#include <iostream>
using namespace std;
#ifndef TERMINAL_H
#define TERMINAL_H

class Terminal {
	public:
	Terminal();
	void initialize();
	void lesson1();
	void printConsole(string matchedCommand, string alias);
};

#endif