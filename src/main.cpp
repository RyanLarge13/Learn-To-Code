#include <iostream>
#include "menu.h"
#include "colors.h"
#include "helpers.h"
using namespace std;

int main(int argc, char* argv[]) {
	string welcomeText = colorRed + "Hello Coder & Welcome to LTC." + endColor;
	typeText(welcomeText, 50);
	cout << endl;
	return 0;
};