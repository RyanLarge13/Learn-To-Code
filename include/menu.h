#include <iostream>
using namespace std;

#ifndef MENU_H
#define MENU_H

class Menu {
	public:
	Menu(); // Constructor
	void display(); // Display the menu
	void handleInput(); // Handle user input

	private:
	vector < string > options;
};

#endif