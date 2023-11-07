#include "terminal.h"
#include "terminalEnv.h"
#include "helpers.h"
#include "colors.h"
#include <iostream>

using namespace std;

extern TerminalEnv env1;

Terminal::Terminal() {
	//Initialize terminal
}

void Terminal::initialize() {
	clearScreen();
	cout << colorCyan + "~$USER_1 ";
}

void Terminal::lesson1() {}