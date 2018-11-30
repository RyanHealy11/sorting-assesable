#include "highscoretable.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>

std::vector<HighScoreEntry> HighScoreTable::topNNScores(int topRows)
{
	return std::vector<HighScoreEntry>();
}

bool HighScoreTable::pruneBottomNNScores(int bottomRows)
{
	return false;
}

HighScoreTable::HighScoreTable()
{
}

HighScoreTable::HighScoreTable(std::string fileName)
{
	std::fstream file(fileName, std::ios::in);
	std::string buffer;
	std::vector <std::string> rtn;
	HighScoreEntry tmpItem("1");
	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		rtn = split(buffer);
		
		tmpItem.level = std::stoi(rtn.back().c_str());
		rtn.pop_back();
		tmpItem.score = std::stoi(rtn.back().c_str());
		rtn.pop_back();
		tmpItem.name = rtn.back();
		rtn.pop_back();
		hsVector.push_back(tmpItem);
	}
	file.close();
}
	
std::vector<std::string> HighScoreTable::split(std::string & line)
{
	std::vector<std::string> result;
	std::stringstream lineStream(line);
	std::string cell;
	while (std::getline(lineStream, cell, ','))
		result.push_back(cell);
	if (!lineStream && cell.empty())
		result.push_back("");
	return result;
}

void HighScoreTable::bubblesort()
{
	int arraysize = hsVector.size();
	int currentbubble = arraysize;
	HighScoreEntry temp;
		
		for (int i = 0; i < hsVector.size(); ++i) 
		{
			for (int j = (arraysize - 1); j > i; --j)
			{
				if (hsVector.at(j).score < hsVector.at(j - 1).score)
				{
					temp = hsVector.at(j);
					hsVector.at(j) = hsVector.at(j - 1);
					hsVector.at(j - 1) = temp;
				}
			}
		}
}

void HighScoreTable::insertionSort()
{
	for (int i = 1; i < hsVector.size(); ++i) 
	{
		HighScoreEntry key = hsVector.at(i);
		int j = (i - 1);
		while ( (j >= 0) && (hsVector.at(j).score > key.score))
		{
			hsVector.at(j + 1) = hsVector.at(j);
			j--;
			hsVector.at(j + 1) = key;		
		}
	}
}

HighScoreTable::~HighScoreTable()
{
}
