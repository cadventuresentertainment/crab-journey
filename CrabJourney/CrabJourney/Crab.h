#pragma once

/* A class for holding the crab you play as. */
class Crab {
private:
	int x, y, b;

public:
	/* Default constructor for the crab. */
	Crab();

	/* Initialiser constructor for the crab. */
	Crab(int newX, int newY, int newB);

	/* Setter subroutine for the X position. */
	void setXPosition(int newX);

	/* Getter subroutine for the X position. */
	int getXPosition();

	/* Setter subroutine for the Y position. */
	void setYPosition(int newY);

	/* Getter subroutine for the Y position. */
	int getYPosition();

	/* Setter subroutine for the bubbles. */
	void setBubbles(int newB);

	/* Getter subroutine for the bubbles. */
	int getBubbles();
};
