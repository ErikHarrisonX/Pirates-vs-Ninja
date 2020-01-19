//Create 2 classes which inherit from the Character class.  (examples, ninja and pirate).
#pragma once
#include "Character.h"
#include <iostream>
class Pirates :
	public Character
{
public:
	//Create a constructor both subclasses of the  Character class to initialize all publicand private properties in the Character classand subclasses. 
	//(Hint : The constructor is only needed in the Ninjaand Pirate classes)
	Pirates();
	//Create a method called UseSword in the Pirate class which outputs to the screen "I am Swooshing my Sword!".
	void UseSword();
	//Create an override attack method in both subclasses of the Character class using Overriding Polymorphism and set their attack return values at 25 hit points.
	int Attack() override;
	void Help() override;

private:
};

