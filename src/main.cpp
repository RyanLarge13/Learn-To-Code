#include <iostream>
#include "menu.h"
#include <chrono>
#include <thread>
using namespace std;

//void printMenu();
//void start();
//void startGame();

string colorYellow = "\033[31m";
string colorRed = "\033[32m";
string colorBlue = "\033[33m";
string colorBlack = "\033[34m";
string colorPurple = "\033[35m";
string colorCyan = "\033[36m";
string colorWhite = "\033[37m";
string endColor = "\033[0m";

void clearScreen() {
	cout << "\x1B[2J\x1B[H";
}

void delayAndCallFunction(function < void() > func, int delayMilliseconds) {
	std::this_thread::sleep_for(std::chrono::milliseconds(delayMilliseconds));
	func();
}

void typeText(const std::string& text, int delayMs) {
	for (char c: text) {
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
	}
}

int main(int argc, char* argv[]) {
	clearScreen();
	Menu menu;
	menu.display();
	while (true) {
		// Check for user input (e.g., Control + O)
	}

	/*	clearScreen();
	string welcomeText = colorRed + "Hello Coder & Welcome to LTC." + endColor;
	typeText(welcomeText, 50);
	cout << endl;*/
	return 0;
};

/*void printMenu() {
	cout << colorRed + "\nMenu" + endColor << endl << colorWhite + "*******" + endColor << endl << endl;
	cout << colorCyan + "1." + endColor << " Start\n" << colorYellow + "2." + endColor << " Quit" << endl << endl;
	int option;
	cin >> option;
	if (option == 1) {
		clearScreen();
		start();
	} else if (option == 2) {
		cout << "Quitting" << endl;
		clearScreen();
	} else {
		clearScreen();
		cout << "Please choose a valid option" << endl;
		printMenu();
	}
}*/

/*void start() {
	string intro = colorRed + "Let's begin a new journey... First thing is first." + endColor;
	typeText(intro, 35);
	cout << endl << endl;
	string question = colorRed + "How good are you?" + endColor;
	typeText(question, 50);
	cout << endl << endl;
	string command = colorBlue + "Right here right now.. \n How do i list files in my directory\n while using a Linuz Terminal?" + endColor;
	typeText(command, 50);
	cout << endl << endl;
	string lsCommand;
	cin >> lsCommand;
	if (lsCommand == "ls") {
		cout << endl;
		string typingText = colorRed + "Not bad for a rookie..." + endColor;
		typeText(typingText, 75);
		cout << endl << endl;
		string questionTwo = colorBlue + "I a Linux Terminal..\n How do i create a new directory?" + endColor;
		typeText(questionTwo, 50);
		cout << endl << endl;
		string makeDir;
		cin >> makeDir;
		if (makeDir == "mkdir") {
			cout << endl;
			string success = colorRed + "Okay so you know some basics..." + endColor;
			string letsStart = colorRed + "Let's start the game with a simple tasks.\n\nA new Linux user called LTC today,\n she complained that her GUI interface crashed.\n The terminal and file access remains,\n but she is having trouble working with it.\nPlease listen to her message and respond promptly\nYou are going to be our new Software Engineer.\nCongratulations..." + endColor;
			string confirm = colorBlue + "Are you ready to take this on?" + endColor;
			typeText(success, 75);
			cout << endl << endl;
			typeText(letsStart, 35);
			cout << endl << endl;
			typeText(confirm, 35);
			cout << endl << endl;
			string answer;
			cin >> answer;
			if (answer == "Y" || answer == "y" || answer == "Yes" || answer == "yes") {
				string thanks = colorRed + "Okay, great. Here is the message she left..." + endColor;
				cout << endl;
				typeText(thanks, 35);
				delayAndCallFunction(startGame, 2500);
			}
		}
	}
}

void startGame() {
	clearScreen();
	string startGameText = colorPurple + "I am having trouble\n with my new Linux computer.\n I have no GUI interface, \nand have no idea how to access my files.\n I need you to find the directory\n with my GUI.md file pleaseeeee..." + endColor;
	typeText(startGameText, 25);
	cout << endl << endl;
	cout << colorRed + "1. Okay ******* 2. No Thanks" + endColor;
	cout << endl << endl;
	int answer;
	cin >> answer;
	if (answer == 1) {
		cout << endl << endl;
		string thankYouTxt = colorPurple + "Thank you.\n Here is my terminal" + endColor;
		typeText(thankYouTxt, 35);
		delayAndCallFunction(clearScreen, 1000);
	}
}*/