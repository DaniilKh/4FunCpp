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

	calculateAttributes();
}

void person::printStats() {

	for (auto const& p : stats)
	{
		std::cout << p.first << " : " << p.second << "\n";
	}
}

int person::getStat(string statName)
{
	return stats[statName];
}

string person::getRace()
{
	return raceName;
}

void person::printAttributes()
{
	for (auto const& p : attributes)
	{
		std::cout << p.first << " : " << p.second << "\n";
	}
}

void person::calculateAttributes()
{
	attributes.insert(pair<string, int>("BasePhDMG", stats["STR"] * stats["DEX"]));
	attributes.insert(pair<string, int>("BaseMgDMG", stats["INT"] * stats["DEX"]));
	attributes.insert(pair<string, int>("BaseDDG", stats["DEX"] * stats["CONS"]));
	attributes.insert(pair<string, int>("BaseCritCh", stats["INT"] * stats["DEX"] * 2));
	attributes.insert(pair<string, int>("BaseCritMod", stats["INT"] * stats["DEX"] * 4));
	attributes.insert(pair<string, int>("BaseArmor", stats["CONS"] * stats["DEX"] * 2));
}
