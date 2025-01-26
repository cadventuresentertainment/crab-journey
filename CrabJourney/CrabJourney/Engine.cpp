#include "Engine.h"

Prefs prefs;
Crab crab;


int main()
{
	prefs.loadPrefs();

	showSplash();
	processMainMenu();

	clearScreen();
	return 0;
}

void processMainMenu()
{
	char selection;

	if (prefs.getSoundSetting())
	{
		// playSound(-1);
	}

	displayMainMenu();
	selection = toupper(_getwch());

	while (selection != 'X')
	{
		if (selection == 'P')
		{
			// Play game
			clearScreen();
			processMap();
			_getwch();

		}
		else if (selection == 'H')
		{
			// Help menu
			clearScreen();
			displayHelpMenu();
			_getwch();
		}
		else if (selection == 'A')
		{
			// About menu
			clearScreen();
			displayAboutMenu();
			_getwch();
		}
		else if (selection == 'O')
		{
			// Options
			clearScreen();
			processOptionsMenu();
		}

		clearScreen();
		displayMainMenu();
		selection = toupper(_getwch());
	}
}

void showSplash()
{
	// CAdventures Entertainment logo
	drawAsciiArt("logo_3", 8, 14, WHITE);
	drawAsciiArt("logo_2", 12, 8, WHITE);
	drawAsciiArt("logo_1", 12, 8, DARK_BLUE);
	drawAsciiArt("logo_0", 12, 8, DARK_RED);
	moveCursor(3, 27);
	setColour(GRAY);
	cout << "(o) Loading ... (o)";
	moveCursor(107, 19);
	if (prefs.getSoundSetting())
	{
		playSound(3);
	}
	Sleep(2500);
	clearScreen();

	// Global Game Jam logo
	drawAsciiArt("ggj_text", 2, 1, GOLD);
	drawAsciiArt("ggj_logo", 80, 10, YELLOW);
	moveCursor(3, 27);
	setColour(GRAY);
	cout << "(o) Loading ... (o)";
	if (prefs.getSoundSetting())
	{
		playSound(4);
	}

	moveCursor(107, 19);
	Sleep(2250);
	clearScreen();
}

void displayMainMenu()
{
	drawAsciiArt("crab", 2, 2, RED);
	drawAsciiArt("game_title", 49, 2, GOLD);
	drawWindow(58, 11, 25, 11, WHITE);

	// Draw menu
	moveCursor(61, 13);
	cout << char(ARROW_RIGHT) << " [P] Play Game";
	moveCursor(61, 15);
	cout << char(ARROW_RIGHT) << " [H] Help";
	moveCursor(61, 16);
	cout << char(ARROW_RIGHT) << " [A] About";
	moveCursor(61, 18);
	cout << char(ARROW_RIGHT) << " [O] Options";
	moveCursor(61, 20);
	setColour(DARK_GRAY);
	cout << char(ARROW_RIGHT) << " [X] Exit Game";

	moveCursor(86, 26);
	setColour(GOLD);
	cout << PUBLISHER;

	moveCursor(90, 27);
	setColour(DARK_GRAY);
	cout << VERSION << "\t" << BUILD_DATE;
}

void displayHelpMenu()
{
	drawWindow(0, 0, 119, 29, AQUA);
	drawAsciiArt("game_title", 49, 2, GOLD);

	moveCursor(8, 10);
	setColour(WHITE);
	cout << "Crab Journey";
	moveCursor(10, 12);
	cout << "Welcome to the Atoll Harbour!";
	moveCursor(10, 14);
	cout << "Navigate the sea floor and collect bubbles!";

	moveCursor(12, 16);
	cout << char(ARROW_RIGHT) << " [W] Move Up";
	moveCursor(12, 17);
	cout << char(ARROW_RIGHT) << " [S] Move Down";
	moveCursor(12, 18);
	cout << char(ARROW_RIGHT) << " [A] Move Left";
	moveCursor(12, 19);
	cout << char(ARROW_RIGHT) << " [D] Move Right";

	moveCursor(33, 16);
	cout << char(ARROW_RIGHT) << " [X] Exit";

	moveCursor(12, 24);
	setColour(GRAY);
	cout << "Press any key to continue...";

	moveCursor(86, 26);
	setColour(GOLD);
	cout << PUBLISHER;

	moveCursor(90, 27);
	setColour(DARK_GRAY);
	cout << VERSION << "\t" << BUILD_DATE;
}

void displayAboutMenu()
{
	drawWindow(0, 0, 119, 29, GREEN);
	drawAsciiArt("game_title", 49, 2, GOLD);

	moveCursor(40, 11);
	setColour(WHITE);
	cout << "Crab Journey, a game made for the 2025 Global Game Jam!";
	moveCursor(40, 12);
	drawRainbowAscii(SQUARE, 54);

	moveCursor(41, 16);
	cout << "Program made with " << char(ARROW_RIGHT);
	setColour(PURPLE);
	cout << " Microsoft Visual Studio 2022";
	moveCursor(41, 17);
	setColour(WHITE);
	cout << "Sounds made with " << char(ARROW_RIGHT);
	setColour(LIGHT_PURPLE);
	cout << " Acoustica Mixcraft 10";

	moveCursor(41, 18);
	setColour(WHITE);
	cout << "ASCII art made using " << char(ARROW_RIGHT);
	setColour(DARK_PURPLE);
	cout << " https://patorjk.com/software/taag/";
	moveCursor(63, 19);
	cout << " https://www.asciiart.eu/image-to-ascii";

	moveCursor(41, 21);
	setColour(WHITE);
	cout << "Music written by " << char(ARROW_RIGHT);
	setColour(AQUA);
	cout << " dJ Blackbourne";
	moveCursor(41, 22);
	setColour(WHITE);
	cout << "Inspired by jhowl's \"Caves of Trash and Treasure\" " << char(ARROW_RIGHT);
	setColour(DARK_AQUA);
	moveCursor(63, 23);
	cout << " https://jhowl.itch.io/caves-of-trash-and-treasure";

	moveCursor(12, 24);
	setColour(GRAY);
	cout << "Press any key to continue...";

	moveCursor(86, 26);
	setColour(GOLD);
	cout << PUBLISHER;

	moveCursor(90, 27);
	setColour(DARK_GRAY);
	cout << VERSION << "\t" << BUILD_DATE;
}

void processOptionsMenu()
{
	char selection;

	prefs.loadPrefs();

	displayOptionsMenu();
	selection = toupper(_getwch());

	while (selection != 'X')
	{
		if (selection == '1')
		{
			if (prefs.getSoundSetting())
			{
				prefs.setSoundSetting(false);
			}
			else
			{
				prefs.setSoundSetting(true);
			}
		}

		clearScreen();
		displayOptionsMenu();
		selection = toupper(_getwch());
	}

	// Force save preferences
	prefs.savePrefs();
}

void displayOptionsMenu()
{
	drawWindow(0, 0, 119, 29, YELLOW);
	drawAsciiArt("game_title", 49, 2, GOLD);

	moveCursor(12, 16);
	setColour(WHITE);
	cout << char(ARROW_RIGHT) << " [1] ";
	if (prefs.getSoundSetting())
	{
		setColour(RED);
		cout << "Dis";
	}
	else
	{
		setColour(GREEN);
		cout << "En";
	}
	cout << "able Sounds";

	moveCursor(12, 19);
	setColour(WHITE);
	cout << char(ARROW_RIGHT) << " [X] Save and Return to Title";
}

void processMap()
{
	char selection;

	drawMap();
	drawPlayer();

	selection = toupper(_getwch());

	while (selection != 'X')
	{
		if (selection == 'W')
		{
			crab.setYPosition(crab.getYPosition() - 1);
		}
		else if (selection == 'S')
		{
			crab.setYPosition(crab.getYPosition() + 1);
		}
		else if (selection == 'A')
		{
			crab.setXPosition(crab.getXPosition() - 1);
		}
		else if (selection == 'D')
		{
			crab.setXPosition(crab.getXPosition() + 1);
		}

		clearScreen();
		drawMap();
		drawPlayer();

		selection = toupper(_getwch());
	}
}

void drawMap()
{
	drawWindow(0, 0, 119, 29, WHITE);
	drawBox(BACK_LIGHT, 3, 3, 16, 8, GRAY);
	moveCursor(3, 2);
	setColour(WHITE);
	cout << LOCATIONS[0];

	moveCursor(3, 18);
	cout << "Bubbles collected: ";
}

void drawPlayer()
{
	moveCursor(crab.getXPosition() + 3, crab.getYPosition() + 3);
	setColour(RED);
	cout << "@";
}
