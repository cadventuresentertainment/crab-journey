#include "Crab.h"

/* Default constructor for the crab. */
Crab::Crab()
{
	x = 0;
	y = 0;
	b = 0;
}

/* Initialiser constructor for the crab. */
Crab::Crab(int newX, int newY, int newB)
{
	x = newX;
	y = newY;
	b = newB;
}

/* Setter subroutine for the X position. */
void Crab::setXPosition(int newX)
{
	x = newX;
}

/* Getter subroutine for the X position. */
int Crab::getXPosition()
{
	return x;
}

/* Setter subroutine for the Y position. */
void Crab::setYPosition(int newY)
{
	y = newY;
}

/* Getter subroutine for the Y position. */
int Crab::getYPosition()
{
	return y;
}

/* Setter subroutine for the bubbles. */
void Crab::setBubbles(int newB)
{
	b = newB;
}

/* Getter subroutine for the bubbles. */
int Crab::getBubbles()
{
	return b;
}
