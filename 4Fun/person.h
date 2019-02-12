#pragma once
#include <string>
#include <map>
using namespace std;

class person
{
public:
	person();
	~person();

	string name;

	void setRace(string raceName, int str, int dex, int inte, int cons);

	void printStats();
	int getStat(string statName);
	string getRace();

	void printAttributes();


	int test = 43;

private:
	string raceName;
	map <string, int> stats;
	map <string, int> attributes;

	void calculateAttributes();
};

