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
	system("clear");
}

void Terminal::printConsole(string matchedCommand, string alias) {
	if (matchedCommand == "ls") {
		vector < Folder > folders = env1.getAllFolders();
		for (const Folder& folder: folders) {
			cout << colorYellow + folder.name + endColor;
		}
		cout << "\n" << alias;
	}
}

void Terminal::lesson1() {
	vector < string > commands = env1.getAllCommands();
	bool isValidCommand = false;
	string matchedCommand;
	string alias = colorCyan + "~/Anabel_G $ " + endColor;
	cout << alias;
	while (true) {
		string command;
		cin >> command;
		for (string str: commands) {
			if (str == command) {
				isValidCommand = true;
				matchedCommand = str;
				break;
			}
		}
		if (!isValidCommand) {
			cout << colorYellow + "\nError: unknown command '" + command + "' did you mean ls?\n" + endColor << alias;
		}
		if (isValidCommand) {
			printConsole(matchedCommand, alias);
			matchedCommand = "";
			isValidCommand = false;
		}
	}
}