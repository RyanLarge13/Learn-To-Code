#include "lessons.h"
#include "colors.h"

Section section1({
	{
		colorRed + "Let's start with some questions. Consider this an interview... So get ready." + endColor
	}
}, colorBlue + "How do I list the files within a directory using a Linux Terminal?" + endColor, {
	"ls -a", "ls"
}, {
	colorRed + "\nNice job. You are correct.. Let's do another" + endColor,
	colorRed + "\nI am hesitant about you, but I stick to my word.. Let's move on" + endColor,
	colorRed + "\nThat is incorrect.. I will give you only one more shot at this!" + endColor,
	colorRed + "\nI am sorry... This interview is over. Goodbye" + endColor
});

Section section2({
	{
		colorRed + "What about building directories..." + endColor
	}
}, colorBlue + "How would I create a new folder (directory) in a Linux terminal?" + endColor, {
	"mkdir"
}, {
	colorRed + "\nWow, first try. Not bad for a rookie... But these are just simple commands. I am going to put you straight to the real test." + endColor,
	colorRed + "\nI assume your first guess was a typo.. I hope it was, because your about to be put to the test in real life." + endColor,
	colorRed + "\nCome on guy... One more try" + endColor,
	colorRed + "\nLook, being capable of listing directories in a Linux terminal is a must, but I need someone with a bit more knowledge than that. Go home and do some homework before coming back here please." + endColor
});