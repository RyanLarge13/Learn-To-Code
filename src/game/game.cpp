// game.cpp
#include "game.h"
#include "colors.h"
#include "helpers.h"
#include <iostream>

using namespace std;

Game::Game() {
	// Initialize constructor
}

void Game::start() {
	string intro = colorRed + "Let's start with some questions. Consider this an interview... So get ready." + endColor;
	string questionOne = colorBlue + "How do I list the files within a directory using a Linux Terminal?" + endColor;
	typeText(intro, 30);
	typeText(questionOne, 30);
}