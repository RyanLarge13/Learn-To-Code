#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void clearScreen() {
	cout << "\x1B[2J\x1B[H";
}

void typeText(const std::string& text, int delayMs) {
	for (char c: text) {
		std::cout << c << std::flush; // Print a character without newline and flush the buffer
		std::this_thread::sleep_for(std::chrono::milliseconds(delayMs)); // Delay for the specified time
	}
}

void start() {
	cout << endl << "Good... Let's begin a new journey... First thing is first." << endl << "How good are you already?" << endl << endl << "Let's find out." << endl;
	cout << endl << "how do I list all of the files within this directory?" << endl << endl;
	string lsCommand;
	cin >> lsCommand;
	if (lsCommand == "ls") {
		cout << endl;
		string typingText = "Not bad for a rookie";
		typeText(typingText, 75);
		cout << endl;
	} else {
		cout << endl << "Error..." << endl;
	}
}

void printMenu() {
	cout << "\nMenu" << endl;
	cout << "1. Start\n2. Quit" << endl << endl;
	int option;
	cin >> option;
	if (option == 1) {
		clearScreen();
		cout << "Starting..." << endl;
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

int main() {
	clearScreen();
	cout << "Hello coder & welcome to LTC." << endl;
	printMenu();
	return 0;
};