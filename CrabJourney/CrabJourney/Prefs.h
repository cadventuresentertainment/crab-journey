#pragma once

#include <fstream>

#include "Constants.h"

using namespace std;

/* A class for holding editable preferences for the runtime. */
class Prefs {
private:
	bool soundSetting;



public:
	/* Default constructor for the preferences. */
	Prefs();

	/* Save any new preferences. */
	void savePrefs();

	/* Load any saved preferences. */
	void loadPrefs();

	/* Setter subroutine for the sound setting. */
	void setSoundSetting(bool newSoundSetting);

	/* Getter subroutine for the sound setting. */
	bool getSoundSetting();
};
