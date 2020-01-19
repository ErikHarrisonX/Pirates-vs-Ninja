#include "GameDriver.h"
#include <iostream>


void GameDriver::DisplayIntro()
{
	std::cout << "\n\n\t\t *******PIRATES VS NINJAS *******\n" << std::endl;
	std::cout << "\nWelcome to an adventure involving ninjas and pirates.\n" << std::endl;
}

void GameDriver::RandomRoll()
{
	int chance = rand() % 101 + 0;
}


