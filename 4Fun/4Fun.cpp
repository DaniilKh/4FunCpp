// 4Fun.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "person.h"
#include "mainMenu.h"
#include <iostream>
#include <conio.h>


int main()
{

	mainMenu menu;

	/*int race;

	person pers;

	std::cout << "Choose ur race" << "\n";
	std::cout << "Orc - 1 \nElf - 2 \nHuman s- 3 \nDwarf - 4" << "\n";

	std::cin >> race;

	switch (race) {
	case 1:
		pers.setRace("Orc", 10, 5, 3, 12);
		break;
	case 2:
		pers.setRace("Elf", 8, 10, 8, 4);
		break;
	case 3:
		pers.setRace("Human", 8, 9, 5, 8);
		break;
	case 4:
		pers.setRace("Dwarf", 10, 5, 5, 10);
		break;
	}

	std::cout << pers.getRace() << "\n";

	pers.printStats();
	*/
	std::cout << "Press any key to exit..." << "\n";
	getch();
		
    return 0;
}

