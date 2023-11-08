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

string dir = "/";

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
		if (inputs.size() > 1) {
			string argument = inputs[1];
			cout << "Running hidden folders & files find";
		} else {
			for (Folder& folder: folders) {
				cout << folder.name + "  ";
			}
		}
		cout << "\n" + alias + colorCyan + "/" + dir + " $ " + endColor;
	}
	if (command == "cd") {
		if (inputs.size() > 1) {
			string argument = inputs[1];
			bool contains = false;
			for (Folder& folder: folders) {
				if (folder.name == argument) {
					contains = true;
					break;
				}
			}
			if (contains) {
				dir = argument;
				cout << alias + colorCyan + "/" + dir + " $ " + endColor;
			} else {
				cout << colorRed + "Error: no such directory exsists to make a new folder, run mkdir " + endColor + colorYellow + argument + "\n" + endColor;
			}
		} else {
			dir = "/";
			cout << alias;
		}
	}
}

void Terminal::lesson1() {
	string alias = colorCyan + "~/Anabel_G" + endColor;
	vector < string > allCommands;
	cout << alias << " $ ";
	while (true) {
		string input;
		getline(cin, input);
		istringstream iss(input);
		string word;
		while (iss >> word) {
			allCommands.push_back(word);
		}
		if (!allCommands.empty()) {
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
}