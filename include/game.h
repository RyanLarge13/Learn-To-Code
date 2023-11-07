#include "lessons.h"
#ifndef GAME_H
#define GAME_H

class Game {
	public:
	Game();
	void start();
	void startSection2();
	void startSection3();

	private:
	bool getSectionAnswers(const Section& section);
};

#endif