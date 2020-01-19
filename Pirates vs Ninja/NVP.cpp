#include <iostream>
#include <string>

#include "Character.h"
#include "GameDriver.h"
#include "Ninja.h"
#include "Pirates.h"
//#include "Hunter.h"

int main() {
	GameDriver game_driver;
	game_driver.DisplayIntro();

	std::cout << "\n\t\t*******NINJA SECTION********";
	//create ninjas
	Ninja black_clothes_ninja;
	Ninja white_clothes_ninja;
	Ninja grey_clothes_ninja;
	//black clothed ninja
	black_clothes_ninja.Name = "Kuro";
	//Set health for ninja
	black_clothes_ninja.SetHealth(100);
	//Health Check for ninja
	black_clothes_ninja.DisplayCharacterStats();
	black_clothes_ninja.Talk("\tNinjas are awesome!");
	black_clothes_ninja.Talk("\tNinjas are cool!", black_clothes_ninja.Name);
	black_clothes_ninja.Help();

	//white clothed ninja
	white_clothes_ninja.Name = "Shiro";
	white_clothes_ninja.SetHealth(100);
	white_clothes_ninja.DisplayCharacterStats();
	white_clothes_ninja.Talk("\tNinjas are full of pride", white_clothes_ninja.Name);
	white_clothes_ninja.Help();
	
	//grey clothed ninja
	grey_clothes_ninja.Name = "Ginto";
	grey_clothes_ninja.SetHealth(100);
	grey_clothes_ninja.DisplayCharacterStats();
	grey_clothes_ninja.Talk("\tOur mission must succeed.", grey_clothes_ninja.Name);
	grey_clothes_ninja.Help();
	
///Test Ninja fight
	std::cout << "\nKuro got shot!\n";
	black_clothes_ninja.SetHealth(-30);
	black_clothes_ninja.DisplayCharacterStats();
	std::cout << "\nKuro bleeds out.\n";
	black_clothes_ninja.SetHealth(-70);
	black_clothes_ninja.DisplayCharacterStats();
	
	Character NPC;
	NPC.Help();

	std::cout << "\n\t\t******PIRATE SECTION********";
	Pirates pirate_with_eyepatch;
	Pirates pirate_with_scar;
	//Pirate with an eyepatch
	pirate_with_eyepatch.Name = "Patch";
	pirate_with_eyepatch.SetHealth(100);
	pirate_with_eyepatch.DisplayCharacterStats();
	pirate_with_eyepatch.Talk("\tArg I hope I find lots of treasure.", pirate_with_eyepatch.Name);
	pirate_with_eyepatch.Help();

	//pirate with scar
	pirate_with_scar.Name = "Scark";
	pirate_with_scar.SetHealth(100);
	pirate_with_scar.DisplayCharacterStats();
	pirate_with_scar.Talk("\tThere is lots to explore on the great Seas.", pirate_with_scar.Name);
	pirate_with_scar.Help();

	//Pirate fight test
	std::cout << "Patch got stabbed";
	pirate_with_eyepatch.SetHealth(-25);
	pirate_with_eyepatch.DisplayCharacterStats();
	std::cout << "The blade was poisoned.";
	pirate_with_eyepatch.SetHealth(-75);
	pirate_with_eyepatch.DisplayCharacterStats();
	


	return 0;
}