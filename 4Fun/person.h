#pragma once
#include <string>
#include <map>
using namespace std;

class person
{
public:
	person();
	~person();

	void setRace(string raceName, int str, int dex, int inte, int cons);

	void getStats();

	int test = 43;

	string raceName;
	map <string, int> stats;
};

