#include "Prefs.h"

Prefs::Prefs()
{
	soundSetting = true;
}

void Prefs::savePrefs()
{
	fstream file;
	file.open(PREF_FILE, fstream::in | fstream::out | fstream::app);

	file << "\n";
	file << getSoundSetting();

	file.close();

	writeToLog(INFORMATION, "Saved preferences file!");
}

void Prefs::loadPrefs()
{
	fstream file;
	file.open(PREF_FILE, fstream::in | fstream::out | fstream::app);



	file.close();

	writeToLog(INFORMATION, "Loaded preferences file!");
}

void Prefs::setSoundSetting(bool newSoundSetting)
{
	soundSetting = newSoundSetting;
}

bool Prefs::getSoundSetting()
{
	return soundSetting;
}
