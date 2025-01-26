#include "Sounds.h"

void playSound(int sound)
{
	switch (sound)
	{
	case '0':
		PlaySound(TEXT("./data/sound/beep_soft.wav"), NULL, SND_FILENAME);
		break;

	case '1':
		PlaySound(TEXT("./data/sound/beep_harsh.wav"), NULL, SND_FILENAME);
		break;

	case '2':
		PlaySound(TEXT("./data/sound/beep_error.wav"), NULL, SND_FILENAME);
		break;

	case '3':
		PlaySound(TEXT("./data/sound/splash.wav"), NULL, SND_FILENAME);
		break;

	case '4':
		PlaySound(TEXT("./data/sound/pop.wav"), NULL, SND_FILENAME);
		break;

	case '5':
		PlaySound(TEXT("./data/sound/party.wav"), NULL, SND_FILENAME);
		break;

	case '-1':
		PlaySound(TEXT("./data/sound/music.wav"), NULL, SND_FILENAME);
		break;

	default:
		writeToLog(WARNING, "Tried to play an unrecognised sound.");
		break;
	}
}