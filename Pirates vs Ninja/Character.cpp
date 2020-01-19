#include "Character.h"
#include <iostream>
#include <string>

int Character::GetHealth()
{

	return Health;
}

//In the setter method check health before setting the value, 
//if the new Health value will be less than zero, 
//then set the property Health to zero and display "Character has Expired..." to the screen.
void Character::SetHealth(int health)
{
	if (health < 0) {
		health = 0;
		std::cout << std::endl << Name << " has expired with 0 health left.\n";
	}
	Health = health;
}


//C
//void Character::SetColor(std::string color) {
	//Color = color;
//}

//void Character::GetColor() {

	//return Color;
//}

//Create 2 methods named Talk using Overloading Polymorphism in the Character class.
//Give one Talk method this method signature : voidTalk(string stuffToSay)
//Make both Talk methods say their name then stuff to say.
void Character::Talk(std::string StuffToSay)
{
	std::cout << "\n Our character states: " << StuffToSay << std::endl;
}

//Give the other Talk this method signature:  void Talk(string name, string stuffToSay)
void Character::Talk(std::string StuffToSay, std::string name)
{
	std::cout << Name << " says : " << StuffToSay << std::endl;
}

//Create a virtual attack method in the Character class that returns 10 hit points.
int Character::Attack()
{
	return 10;
}

void Character::Help()
{
	std::cout << "\nTHis is NPC Help\n";
}

void Character::DisplayCharacterStats() {
	std::cout << "\nThe character named " << Name << " has a health score of " << Health << std::endl;
}