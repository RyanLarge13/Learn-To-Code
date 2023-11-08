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
File env1File2({
	colorWhite + "README.md" + endColor
}, {
	"r", "w", "x"
}, {
	"#!binbash\n\nsource killGUI.sh"
}, {
	"#!binbash"
});

Folder env1Folder1({
	colorPurple + "bin" + endColor
}, {
	"r", "w"
}, {
	env1File1,
});
Folder env1Folder2({
	colorPurple + "usr" + endColor
}, {
	"r", "w"
}, {
	env1File1
});
Folder env1Folder3({
	colorPurple + "boot" + endColor
}, {
	"r", "w"
}, {
	env1File2
});
Folder env1Folder4({
	colorPurple + "documents" + endColor
}, {
	"r", "w"
}, {
	env1File2
});

TerminalEnv env1({
	env1Folder1,
	env1Folder2,
	env1Folder3,
	env1Folder4,
}, {
	"cd", "ls", "ls -a", "nano"
});