#include "Pirates.h"
#include <iostream>

Pirates::Pirates()
{
	std::cout << Name << " the pirate is born!" << std::endl;
}


void Pirates::UseSword()
{
	std::cout << "\nI use my heavy sword. \n" << std::endl;
}

//Virtual method
int Pirates::Attack() {
	return 25;
}

//virtual method called help
void Pirates::Help()
{
	std::cout << "\nPirates are very cunning try using your sword to attack the enemy.\n";
}
