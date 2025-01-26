#include "Window.h"

using namespace std;

void drawWindow(int x, int y, int w, int h, int colour)
{
	// Set colour:
	setColour(colour);

	// Draw top line:
	moveCursor(x, y);
	for (int i = 0; i <= w; i++)
	{
		cout << char(BORDER_DOUBLE_HORZ);
	}

	// Draw bottom line:
	moveCursor(x, y + h);
	for (int i = 0; i <= w; i++)
	{
		cout << char(BORDER_DOUBLE_HORZ);
	}

	// Draw left line:
	moveCursor(x, y);
	for (int i = 0; i <= h; i++)
	{
		moveCursor(x, y + i);
		cout << char(BORDER_DOUBLE_VERT);
	}

	// Draw right line:
	moveCursor(x + w, y);
	for (int i = 0; i <= h; i++)
	{
		moveCursor(x + w, y + i);
		cout << char(BORDER_DOUBLE_VERT);
	}

	// Draw top-left corner:
	moveCursor(x, y);
	cout << char(BORDER_DOUBLE_C_TL);

	// Draw top-right corner:
	moveCursor(x + w, y);
	cout << char(BORDER_DOUBLE_C_TR);

	// Draw bottom-left corner:
	moveCursor(x, y + h);
	cout << char(BORDER_DOUBLE_C_BL);

	// Draw bottom-right corner:
	moveCursor(x + w, y + h);
	cout << char(BORDER_DOUBLE_C_BR);
}

void drawBox(int symbol, int x, int y, int w, int h, int colour)
{
	setColour(colour);
	moveCursor(x, y);

	for (int i = 0; i <= h; i++)
	{
		for (int j = 0; j <= w; j++)
		{
			cout << char(symbol);
		}

		y++;
		moveCursor(x, y);
	}
}

void drawAsciiArt(string name, int x, int y, int colour)
{
	fstream file;
	string line;
	int row = 0;

	string path = "./data/ascii/";
	path = path + name;
	path = path + ".ascii";

	setColour(colour);

	file.open(path, fstream::in | fstream::out | fstream::app);

	while (!file.eof())
	{
		getline(file, line);
		moveCursor(x, y + row);
		cout << line;
		row++;
	}

	file.close();
}

void drawRainbowAscii(int symbol, int amount)
{
	int index = 0;

	for (int i = 0; i <= amount; i++)
	{
		setColour(RAINBOW[index]);
		cout << char(symbol);

		index++;
		if (index > 5)
		{
			index = 0;
		}
	}

	setColour(WHITE);
}

void moveCursor(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;

	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hConsole, pos);
}

void setColour(int colour)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
}

void clearScreen()
{
	moveCursor(0, 0);
	setColour(WHITE);

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			cout << " ";
		}

		cout << endl;
	}

	moveCursor(0, 0);
}