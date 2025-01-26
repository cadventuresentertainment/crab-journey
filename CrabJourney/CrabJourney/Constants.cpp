#include "Constants.h"

void writeToLog(int type, string message)
{
	fstream file;
	file.open(LOG_FILE, fstream::in | fstream::out | fstream::app);

	// Create a new line
	file << "\n";

	// Add the log type
	switch (type)
	{
	case '0':
		file << "[INFO]  ";
		break;

	case '1':
		file << "[WARN]  ";
		break;

	case '2':
		file << "*FATAL* ";
		break;

	default:
		file << "[INFO]  ";
		break;
	}

	// Add the message
	file << message;

	file.close();
}