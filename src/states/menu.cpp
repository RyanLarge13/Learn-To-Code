// menu.cpp
#include "menu.h"
#include <iostream>

using namespace std;

Menu::Menu() {
    // Initialize menu options and other setup
}

void Menu::display() {
    cout << "Main Menu" << std::endl;
    cout << "1. Start Game" << std::endl;
    cout << "2. Load Game" << std::endl;
    cout << "3. Quit Game" << std::endl;
}

void Menu::handleInput() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
}
