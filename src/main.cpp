#include <iostream>
#include "menu.h"
#include "colors.h"
#include "helpers.h"
using namespace std;

Menu MainMenu;

int main(int argc, char* argv[]) {
	clearScreen();
	string welcomeText = colorRed + "Hello Coder & Welcome to LTC" + endColor;
	typeText(welcomeText, 50);
	MainMenu.display();
	MainMenu.handleInput();
	return 0;
};