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

Section section3({
	{
		colorRed + "It's time to put you to work.\n\nRead through this assignment and get to work immediately. This lady is a regular customer and needs your help" + endColor, colorPurple + "Dear LTC. \n\n Just recently I gave my computer to a friend of mine to try and figure out why it was running so slow. Well, when he gave it back to me the computer no longer works...\n\nAll I see is a black screen and some kind of prompt.. Please help me fix this.\n\nSincerly\nAnabel Giblin" + endColor
	}
}, colorBlue + "She is stuck in a terminal interface and you need to fix it.. Here is her computer... Are you able to do this?" + endColor, {
	"yes", "y", "yahh", "ya", "yah", "yup", "-Y", "Y"
}, {
	colorRed + "\nOkay, sounds good. Here is her computer, I just turned it on. You should be logged in as super user" + endColor,
	colorRed + "\nLook, I am not taking no for an answer or anything for that matter. Here is the terminal. Figure it out." + endColor,
});