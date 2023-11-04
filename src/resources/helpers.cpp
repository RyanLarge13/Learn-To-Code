#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include "helpers.h"
#include "colors.h"
using namespace std;

using StringsType = const vector < string>&;
using StringType = const string&;

void clearScreen() {
	cout << "\x1B[2J\x1B[H";
}

void delayAndCallFunction(function < void() > func, int delayMilliseconds) {
	std::this_thread::sleep_for(std::chrono::milliseconds(delayMilliseconds));
	func();
}

void typeText(StringType text, int delayMs) {
	for (char c: text) {
		cout << c << flush;
		this_thread::sleep_for(chrono::milliseconds(delayMs));
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