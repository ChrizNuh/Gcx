#pragma once
#include <map>
#include <regex>
#include <string>
#include <fstream>

enum class GAME {
	MGS3,
	MGS4
};

extern GAME game;
extern std::map<unsigned int, std::string> commandMap;
extern void loadCommands(const std::string& dictionary);