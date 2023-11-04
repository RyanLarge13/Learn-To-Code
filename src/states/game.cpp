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

// Globally defining types complex types
using StringsType = const vector < string>&;
using StringType = const string&;


Game::Game() {
	// Initialize constructor
}

void Game::start() {
	StringsType sec1Strings = section1.getStrings();
	StringType sec1Question = section1.getQuestion();
	typeText(sec1Strings[0], 30);
	typeText(sec1Question, 30);
}