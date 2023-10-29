#include <iostream>
using namespace std;

extern void clearScreen();
extern void delayAndCallFunction(function < void() > func, int delayMilliseconds);
extern void typeText(const string& text, int delayMs);