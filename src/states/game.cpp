// game.cpp
#include <iostream>
#include <vector>
#include "game.h"
#include "colors.h"
#include "helpers.h"
#include "lessons.h"
using namespace std;

// Importing section data
extern Section section1;
extern Section section2;

// Globally defining types, complex types and state
using StringsType = const vector < string>&;
using StringType = const string&;
int tries = 0;


Game::Game() {
	// Initialize constructor
}

// private method
bool Game::getSectionAnswers(const Section& section) {
	//Fetching section1 vector data {answers && replies}
	StringsType secAnswers = section.getAnswers();
	StringsType secReplies = section.getReplies();
	bool found = false;
	string answer;
	cout << colorYellow + "Command: " + endColor;
	cin >> answer;
	for (StringType str: secAnswers) {
		if (str == answer) {
			found = true;
			break;
		}
	}
	if (found) {
		if (tries == 0) {
			typeText(secReplies[0], 30);
			return true;
		}
		if (tries == 1) {
			typeText(secReplies[1], 30);
			tries = 0;
			return true;
		}
		tries = 0;
		return true;
	} else {
		//If the answer is incorrect 2 times... Game over.
		if (tries == 1) {
			typeText(secReplies[3], 50);
			return false;
		}
		typeText(secReplies[2], 30);
		answer = "";
		tries += 1;
		//Recursive callback when answer is inincorrect and tries < 1;
		bool secondCheck = getSectionAnswers(section);
		if (secondCheck) {
			return true;
		}
		return false;
	}
}

//public method. Initialize game
void Game::start() {
	//Pull in section one data
	StringsType sec1Strings = section1.getStrings();
	StringType sec1Question = section1.getQuestion();
	// Using section one data to type story
	typeText(sec1Strings[0], 30);
	typeText(sec1Question, 30);
	bool passed = getSectionAnswers(section1);
	if (passed) {
		startSection2();
		tries = 0;
	}
}

void Game::startSection2() {
	StringsType sec2Strings = section2.getStrings();
	StringType sec2Question = section2.getQuestion();
	typeText(sec2Strings[0], 30);
	typeText(sec2Question, 30);
	bool passed = getSectionAnswers(section2);
	if (passed) {
		cout << "nice" << endl;
	}
}