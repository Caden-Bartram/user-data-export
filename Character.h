#pragma once
#include <string>
using std::string;

class Character
{
private:
	string name;
public:
	Character() : name("unnamed") {}
	Character(string name) : name(name) {}
};

