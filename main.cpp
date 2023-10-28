#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void printMenu();
void start();
void startGame();

//string colorGreen = "\033[83m";
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
	string welcomeText = colorRed + "Hello Coder & Welcome to LTC." + endColor;
	typeText(welcomeText, 50);
	cout << endl;
	delayAndCallFunction(printMenu, 750);
	return 0;
};

void printMenu() {
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
}

void start() {
	string intro = colorRed + "Let's begin a new journey... First thing is first." + endColor;
	typeText(intro, 35);
	cout << endl << endl;
	string question = colorRed + "How good are you?" + endColor;
	typeText(question, 75);
	cout << endl << endl;
	string command = colorBlue + "Write the command to list all of the files within a directory on a Linux terminal..." + endColor;
	typeText(command, 100);
	cout << endl << endl;
	string lsCommand;
	cin >> lsCommand;
	if (lsCommand == "ls") {
		cout << endl << endl;
		string typingText = colorRed + "Not bad for a rookie..." + endColor;
		typeText(typingText, 75);
		cout << endl << endl;
		string questionTwo = colorBlue + "How would one make a new directory within your current terminal location?" + endColor;
		typeText(questionTwo, 75);
		cout << endl << endl;
		string makeDir;
		cin >> makeDir;
		if (makeDir == "mkdir") {
			cout << endl;
			string success = colorRed + "Okay so you know some basics..." + endColor;
			string letsStart = colorRed + "Let's start the game with some simple tasks..\n\nA new Linux user called LTC today and complained that her GUI interface disappear but the terminal and file access remains but is having trouble working the terminal. Please listen to her message and respond promptly.. You are going to be our new Software Engineer. Congrats" + endColor;
			typeText(success, 75);
			cout << endl << endl;
			typeText(letsStart, 35);
			cout << endl;
			delayAndCallFunction(startGame, 1500);
		}
	}
}

void startGame() {
	clearScreen();
	string startGameText = colorPurple + "I am having trouble with my new Linux computer. I have no GUI interface and have no idea how to access my files. I need you to find the directory with my GUI.md file pleaseeeee..." + endColor;
	typeText(startGameText, 25);
	cout << endl << endl;
}