#include "stdafx.h"
#include "Vista.h"


Vista::Vista()
{
}


Vista::~Vista()
{
}

void Vista::resizeConsole() {
	// Get a handle to the current console screen buffer
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX cfi = { sizeof(cfi) };
	// Populate cfi with the screen buffer's current font info
	GetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
	// Modify the font size in cfi
	cfi.dwFontSize.X *= 1.5;
	cfi.dwFontSize.Y *= 1.5;
	// Use cfi to set the screen buffer's new font
	SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

