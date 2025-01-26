#pragma once

#pragma comment(lib, "winmm")

#include "Constants.h"
#include "Sounds.h"
#include "Prefs.h"
#include "Window.h"
#include "Crab.h"

/* Display the splash screens. */
void showSplash();

/* Process main menu selections. */
void processMainMenu();

/* Display the main menu on the screen. */
void displayMainMenu();

/* Display the help on the screen. */
void displayHelpMenu();

/* Display the about on the screen. */
void displayAboutMenu();

/* Process the options selections. */
void processOptionsMenu();

/* Display the options on the screen. */
void displayOptionsMenu();

/* Process the map screen. */
void processMap();

/* Draw map on the screen. */
void drawMap();

/* Draw player to the map screen. */
void drawPlayer();
