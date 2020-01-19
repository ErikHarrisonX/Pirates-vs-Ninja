//Create a class called Character which inherits from the GameStructure class.
#pragma once
#include "GameStructure.h"
#include <iostream>
#include <string>

class Character : public GameStructure
{
public:
	//Create a public property in the Character classand call it Name.
	std::string Name;
	//Create getterand setter public methods in the superclass to accessand update this private Health property. (Abstraction)
	int GetHealth();
	void SetHealth(int health);
	//Add a method to the Character class called DisplayStats to display all the properties of all the characters.
	void DisplayCharacterStats();
	void SetColor(std::string color);
	void GetColor();
	//Create 2 methods named Talk using Overloading Polymorphism in the Character class.
	//Give one Talk method this method signature: voidTalk(string stuffToSay)
	//Make both Talk methods say their name then stuff to say.
	void Talk(std::string StuffToSay);
	//Give the other Talk this method signature:  void Talk(string name, string stuffToSay)
	void Talk(std::string StuffToSay, std::string name);
	//Create a virtual attack method in the Character class that returns 10 hit points.
	virtual int Attack();
	void Help() override;
private:
	//Create one private property called Health in the Character superclass. (Encapsulation)
	int Health;
	std::string Color;
};

