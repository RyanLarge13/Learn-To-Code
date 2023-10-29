#include <iostream>
#include <chrono>
#include <thread>
#include "helpers.h"
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