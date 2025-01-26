#pragma once

#include <fstream>
#include <string>

using namespace std;

/* Print a message to the log. */
void writeToLog(int type, string message);

const string TITLE = "Crab Journey";
const string PUBLISHER = "(o) CAdventures Entertainment";
const string ENGINE = "Crab Engine";
const string VERSION = "25.1.26";
const string BUILD_DATE = "15:11";
const int RAINBOW[6] = { 12, 6, 14, 10, 11, 13 };

const string LOG_FILE = "crab.log";
const string PREF_FILE = "crab.prefs";

const string LOCATIONS[4] = { "ATOLL HARBOUR",
							  "STARFISH SHORE",
							  "SQUID SEABED",
							  "ANCHOR ABYSS" };


// Enumeration for defining colours.
enum Colour {
	BLACK = 0,
	DARK_BLUE = 1,
	DARK_GREEN = 2,
	DARK_AQUA = 3,
	DARK_RED = 4,
	DARK_PURPLE = 5,
	GOLD = 6,
	GRAY = 7,
	DARK_GRAY = 8,
	PURPLE = 9,
	GREEN = 10,
	AQUA = 11,
	RED = 12,
	LIGHT_PURPLE = 13,
	YELLOW = 14,
	WHITE = 15
};

// Enumeration for defining symbols.
enum Symbol {
	// Empty space
	BLANK = 32,

	// Background elements
	BACK_LIGHT = 176,
	BACK_MEDIUM = 177,
	BACK_HEAVY = 178,

	// User interface
	ARROW_LEFT = 174,
	ARROW_RIGHT = 175,
	SQUARE = 254,

	// Window borders - single
	BORDER_SINGLE_VERT = 179,
	BORDER_SINGLE_HORZ = 196,
	BORDER_SINGLE_C_TL = 218,
	BORDER_SINGLE_C_TR = 191,
	BORDER_SINGLE_C_BL = 192,
	BORDER_SINGLE_C_BR = 217,

	// Window borders - double
	BORDER_DOUBLE_VERT = 186,
	BORDER_DOUBLE_HORZ = 205,
	BORDER_DOUBLE_C_TL = 201,
	BORDER_DOUBLE_C_TR = 187,
	BORDER_DOUBLE_C_BL = 200,
	BORDER_DOUBLE_C_BR = 188,
	BORDER_DOUBLE_T_TOP = 203,
	BORDER_DOUBLE_T_BTM = 202,
	BORDER_DOUBLE_T_LFT = 204,
	BORDER_DOUBLE_T_RGT = 185,
	BORDER_DOUBLE_QUAD = 206
};

// Enumeration for defining sounds.
enum Sounds {
	BEEP_SOFT = 0,
	BEEP_HARSH = 1,
	BEEP_ERROR = 2,
	SPLASH = 3,
	POP = 4,
	PARTY = 5,

	// Music - unused
	MUSIC = -1
};

// Enumeration for defining log messages.
enum LogType {
	INFORMATION = 0,
	WARNING = 1,
	FATAL = 2
};
