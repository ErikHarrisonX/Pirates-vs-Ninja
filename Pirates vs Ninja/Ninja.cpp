#include "Ninja.h"
#include <iostream>

Ninja::Ninja()
{
	std::cout << Name << "The ninja is born!\n" << std::endl;
}

void Ninja::ThrowStars() {
	std::cout << "\nI'm throwing my shuriken.\n" << std::endl;
}

//Create an override attack method in both subclasses of the Character class using Overriding Polymorphism and set their attack return values at 25 hit points.
int Ninja::Attack()
{
	return 25;
}

void Ninja::Help()
{
	std::cout << "\nThis is Ninja Help! Try throwing a shuriken to damage the enemy";
}
