#ifndef TERMINALENV_H
#define TERMINALENV_H

#include <vector>
#include <iostream>
using namespace std;

class File {
public:
    string name;
    vector<string> permissions;
    string currentText;
    string correctedText;

    // Constructor
    File(const string& _name, const vector<string>& _permissions, const string& _currentText, const string& _correctedText)
        : name(_name), permissions(_permissions), currentText(_currentText), correctedText(_correctedText) {}
};

class Folder {
public:
    string name;
    vector<string> permissions;
    vector<File> files;

    // Constructor
    Folder(const string& _name, const vector<string>& _permissions, const vector<File>& _files)
        : name(_name), permissions(_permissions), files(_files) {}
};


class TerminalEnv {
	public:
	vector < Folder > folders;
	vector < string > commands;

	TerminalEnv(const vector < Folder>& _folders, const vector < string>& _commands): folders(_folders),
	commands(_commands) {}

	vector < Folder > getAllFolders() {
		return folders;
	}
	vector < Folder > getVisibleFolder() {
		return folders; // sort folders with no starting ".";
	}
	vector < string > getAllCommands() {
		return commands;
	}
	vector < File > getAllFiles() {
		vector < File > allFiles;
		for (const Folder& folder: folders) {
			for (const File& file: folder.files) {
				allFiles.push_back(file);
			}
		}
		return allFiles;
	}
	vector < File > getAllVisibleFiles() {
		vector < File > allFiles;
		for (const Folder& folder: folders) {
			for (const File& file: folder.files) {
				allFiles.push_back(file);
			}
		}
		return allFiles; //Filter only visible files without "." at the start;
	}
};

#endif