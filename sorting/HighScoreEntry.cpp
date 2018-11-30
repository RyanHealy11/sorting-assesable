#include "HighScoreEntry.h"
#include <iostream>
#include <string>

HighScoreEntry::HighScoreEntry()
{
}

HighScoreEntry::HighScoreEntry(std::string placeholder)
{
	name = placeholder;
	score = std::stoi(placeholder.c_str());
	level = std::stoi(placeholder.c_str());
}

HighScoreEntry::~HighScoreEntry()
{
}
