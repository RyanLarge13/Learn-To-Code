#include <iostream>
#include <chrono>
#include <thread>
#include "helpers.h"
#include "colors.h"
using namespace std;

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
	cout << endl << endl;
}

string getInput(string prompt) {
	string input;
	bool failed = true;
	while (failed) {
		cout << prompt;
		cin >> input;
		if (cin.fail()) {
			string failedText = colorYellow + "Please insert a valid value" + endColor;
			typeText(failedText, 30);
		}
		failed = false;
		return input;
	}
	string def = "";
	return def;
}