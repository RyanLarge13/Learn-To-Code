#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "menu.h"
#include "colors.h"
#include "helpers.h"
using namespace std;

Menu MainMenu;

int main(int argc, char* argv[]) {
	initscr();
	cbreak();
	noecho();
	nodelay(stdscr, true);
	refresh();
	clearScreen();
	int ch;
	while (true) {
		ch = getch();
		if (ch == 15) {
			clearScreen();
			MainMenu.display();
			MainMenu.handleInput();
		}
		refresh();
		usleep(100000);
	}
	endwin();
	string welcomeText = colorRed + "Hello Coder & Welcome to LTC." + endColor;
	typeText(welcomeText, 50);
	MainMenu.display();
	MainMenu.handleInput();
	return 0;
};