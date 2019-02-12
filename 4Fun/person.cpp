#include "stdafx.h"
#include "person.h"
#include <map>
#include <string>
#include <iostream>


person::person()
{
}


person::~person()
{
}

void person::setRace(string inRaceName, int str, int dex, int inte, int cons)
{
	raceName = inRaceName;
	stats.insert(pair<string, int>("STR", str));
	stats.insert(pair<string, int>("DEX", dex));
	stats.insert(pair<string, int>("INT", inte));
	stats.insert(pair<string, int>("CONS", cons));
}

void person::getStats() {
	for (auto const& p : stats)
	{
		std::cout << p.first << ' \t ' << p.second << "\n";
	}
}
