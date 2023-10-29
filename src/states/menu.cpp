// menu.cpp
#include "menu.h"
#include "colors.h"
#include "helpers.h"
#include "game.h"
#include <iostream>

using namespace std;

Game GameClass;

pair < bool, int > checkChoice(int input) {
	if (input == 1 || input == 2 || input == 3) {
		return make_pair(true, input);
	} else {
		return make_pair(false, 0);
	}
}

Menu::Menu() {
	options.push_back("Start Game");
	options.push_back("Load Game");
	options.push_back("Help");
	options.push_back("Quit");
}

void Menu::display() {
	cout << endl << colorRed + "Main Menu" + endColor << endl;
	cout << colorWhite + "*******" + endColor << endl;
	for (int i = 0; i < options.size(); i++) {
		cout << " " << colorCyan << i + 1 << ". " << endColor << options[i] << endl;
	}
	cout << endl;
}

void Menu::handleInput() {
	int choice;
	bool valid = false;
	while (!valid) {
		cout << "Enter your choice: ";
		cin >> choice;
		if (cin.fail()) {
			cout << "Please enter a valid choice" << endl;
			cin.clear();
			cin.ignore(numeric_limits < streamsize > ::max(), '\n');
		} else {
			pair < bool,
			int > check = checkChoice(choice);
			if (check.first == false) {
				cout << colorRed + "Invalid choice" + endColor << endl;
			} else {
				cout << endl;
				if (check.second == 1) {
					GameClass.start();
				}
				if (check.second == 4) {
					string goodbyeText = colorRed + "Thank you for playing. See you next time 😊" + endColor;
					typeText(goodbyeText, 30);
				}
				valid = true;
			}
		}
	}
}