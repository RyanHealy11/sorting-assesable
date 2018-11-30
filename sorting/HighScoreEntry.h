#pragma once
#include <iostream>
class HighScoreEntry
{
public:
	std::string name;
	int score;
	int level;

	HighScoreEntry();
	HighScoreEntry(std::string placeholder);
	~HighScoreEntry();
};