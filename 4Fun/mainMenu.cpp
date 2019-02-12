#include "stdafx.h"
#include "mainMenu.h"
#include "person.h"
#include <iostream>
using namespace std;

person *Character = NULL;

mainMenu::mainMenu()
{

	int newChoice;

	do
	{
		if (!Character)
		{
			cout << "Menu | No Character!" << endl;
		}
		else
		{
			cout << "Menu | &&&!" << endl;
		}
		cout << "1) Play." << endl;
		cout << "2) Create Character." << endl;
		cout << "3) Quit." << endl;
		cout << "Please enter your choice: ";
		cin >> choice; 
		switch (choice) {
		case 1: 
			if (!Character)
			{
				cout << "First u need to create character!" << endl;
			}
			else 
			{

			}
			break;
		case 2: 
				
			break;
		case 3: 
			break;
		}
	} while (choice != 3);
}

mainMenu::~mainMenu()
{
}

void mainMenu::displayPlayMenu()
{
	do
	{
		cout << "Menu" << endl;
		cout << "2) Give me money." << endl;
		cout << "3) Quit." << endl;
		cout << "Please enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:

			break;
		case 2:

			break;
		case 3:
			break;
		}
	} while (choice != 3);
}
