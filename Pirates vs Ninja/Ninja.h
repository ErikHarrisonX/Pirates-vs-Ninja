//Create 2 classes which inherit from the Character class.  (examples, ninja and pirate).
#pragma once
#include "Character.h"
class Ninja :
	public Character
{
public:
	//Create a constructor both subclasses of the  Character class to initialize all publicand private properties in the Character classand subclasses. 
	//(Hint : The constructor is only needed in the Ninjaand Pirate classes)
	Ninja();
	//Create a method called ThrowStars in the Ninja class which outputs the phrase to the screen "I am throwing stars!";
	void ThrowStars();
	//Create override attack method in both subclasses of the Character class using Overriding Polymorphism and set attack return values at 25 hit points.
	int Attack() override;
	void Help() override;

private:
};

