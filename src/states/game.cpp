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
bool Game::getAnswerSec1() {
	//Fetching section1 vector data {answers}
	StringsType sec1Answers = section1.getAnswers();
	bool found = false;
	string answer;
	cout << colorYellow + "Command: " + endColor;
	cin >> answer;
	for (StringType str: sec1Answers) {
		if (str == answer) {
			found = true;
			break;
		}
	}
	if (found) {
		typeText(colorRed + "\nNice job. " + endColor + colorYellow + answer + endColor + colorRed + " is correct.. Let's do another" + endColor, 30);
		tries = 0;
		return true;
	} else {
		//If the answer is incorrect 3 times... Game over.
		if (tries == 1) {
			typeText(colorRed + "\nI am sorry... This interview is over. Goodbye", 50);
			return false;
		}
		typeText(colorRed + "\nThat is incorrect.. I will give you only one more shot at this!" + endColor, 30);
		answer = "";
		tries += 1;
		//Recursive callback when answer is incorrect
		getAnswerSec1();
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
	bool passed = getAnswerSec1();
	if (passed) {
		startSection2();
	}
}

void Game::startSection2() {
	StringsType sec2Strings = section2.getStrings();
	StringType sec2Question = section2.getQuestion();
	typeText(sec2Strings[0], 30);
	typeText(sec2Question, 30);
}