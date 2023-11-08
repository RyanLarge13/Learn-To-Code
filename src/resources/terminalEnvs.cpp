#include "terminalEnv.h"
#include "colors.h"

File env1File1({
	colorWhite + ".bashrc" + endColor
}, {
	"r", "w", "x"
}, {
	"#!binbash\n\nsource killGUI.sh"
}, {
	"#!binbash"
});

Folder env1Folder1({
	colorPurple + "bin/" + endColor
}, {
	"r", "w"
}, {
	env1File1
});

TerminalEnv env1({
	env1Folder1
}, {
	"cd", "ls", "ls -a", "nano"
});