#include "terminal.h"
#include "terminalEnv.h"
#include "helpers.h"
#include "colors.h"
#include <iostream>
#include <sstream>

using namespace std;

extern TerminalEnv env1;

Terminal::Terminal() {
	//Initialize terminal
}

void Terminal::initialize() {
	system("clear");
}

bool Terminal::validateCommand(string firstInput) {
	vector < string > commands = env1.getAllCommands();
	bool valid = false;
	for (string str: commands) {
		if (str == firstInput) {
			valid = true;
			break;
		}
	}
	return valid;
}

void Terminal::printConsole(vector < string > inputs, string alias) {
	vector < Folder > folders = env1.getAllFolders();
	string command = inputs[0];
	if (command == "ls") {
		string argument = inputs[1];
		if (inputs.size() > 0 && argument == "-a") {
			cout << "Running hidden folders & files find";
		} else {
			for (Folder& folder: folders) {
				cout << colorCyan + folder.name + endColor + "  ";
			}
		}
		cout << "\n" + alias;
	}
	if (command == "cd") {
			string argument = inputs[1];
		if (inputs.size() > 0) {
			cout << alias + "/" + colorCyan + argument + endColor;
		} else {
			cout << colorRed + "\nNo such directory exsists. Run mkdir " + argument + " to create it\n" + endColor;
			cout << alias;
		}
	}
}

void Terminal::lesson1() {
	string alias = colorCyan + "~/Anabel_G $ " + endColor;
	vector < string > allCommands;
	cout << alias;
	while (true) {
		string command;
		cin >> command;
		istringstream iss(command);
		string word;
		while (iss >> word) {
			allCommands.push_back(word);
		}
		bool isValid = validateCommand(allCommands[0]);
		if (isValid) {
			printConsole(allCommands,
				alias);
		} else {
			cout << colorYellow + "\nError: invalid command '" + endColor + colorRed + allCommands[0] + endColor + colorYellow + "'\n" + endColor;
			cout << alias;
		}
		allCommands.clear();
	}
}