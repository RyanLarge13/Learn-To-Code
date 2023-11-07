#ifndef LESSON_H
#define LESSON_H

#include <vector>
#include <iostream>
using namespace std;

// Class data structure for easy access to big string data and making conditional checks on user inputs cleaner

class Section {
	// Defining the data structure as follows
	/*
	{
	  strings: ["foo", "bar", ...],
		question: "foo?",
		answers: ["foo", "bar", ...]
	},
	...
	*/
	public:
	Section(const vector < string>& strings, const string& question, const vector < string>& answers, const vector < string>& replies): strings(strings),
	question(question),
	answers(answers),
	replies(replies) {}

	// Section methods for accessing Section class instance data
	const vector < string>& getStrings() const {
		return strings;
	}
	const string& getQuestion() const {
		return question;
	}
	const vector < string>& getAnswers() const {
		return answers;
	}
	const vector < string>& getReplies() const {
		return replies;
	}

	private:
	vector < string > strings;
	string question;
	vector < string > answers;
	vector < string > replies;
};

#endif