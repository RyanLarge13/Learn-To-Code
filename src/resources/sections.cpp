#include "lessons.h"
#include "colors.h"

Section section1({
	{
		colorRed + "Let's start with some questions. Consider this an interview... So get ready." + endColor
	}
}, colorBlue + "How do I list the files within a directory using a Linux Terminal?" + endColor, {
	"ls -a", "ls"
});

Section section2({
	{
		colorRed + "What about building directories..." + endColor
	}
}, colorBlue + "How would I create a new folder (directory) in a Linux terminal?" + endColor, {
	"mkdir"
});