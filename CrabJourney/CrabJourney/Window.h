#pragma once

#include <iostream>
#include <fstream>
#include <windows.h>

#include "Constants.h"

/* Draw a window on the screen.
You must specify an X and Y position, width and height, and a colour. */
void drawWindow(int x, int y, int w, int h, int colour);

/* Draw a box on the screen.
You must specify a symbol, an X and Y position, width and hight, and a colour. */
void drawBox(int symbol, int x, int y, int w, int h, int colour);

/* Draw ASCII art on the screen.
You must specify the file, an X and Y position, and a colour. */
void drawAsciiArt(string name, int x, int y, int colour);

/* Draw ASCII symbols to the screen with a hardcoded rainbow gradient.
(See the constants header file for these values.) */
void drawRainbowAscii(int symbol, int amount);

/* Move the cursor to a specified position. */
void moveCursor(int x, int y);

/* Set the current background and foreground colour.
Used with the Colour enumeration. */
void setColour(int colour);

/* Clear the screen. */
void clearScreen();