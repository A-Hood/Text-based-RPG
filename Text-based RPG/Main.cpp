#include <iostream>

// Global variables.
std::string username;
int age;
int jobSelection;
int clothesSelection;
int weaponSelection;
std::string jobType;
std::string homeTown;
std::string armourType;
std::string armourColour;
std::string weaponSelect;
bool selectionValid = false;

// Introduction function.
void Introduction(std::string username, int age, std::string homeTown)
{
	std::cout << "\n\n== BACKSTORY ==\n\n" << username << " was born into a poor peasant family in " << homeTown << ".\nFrom a young age, " << username << " had to work hard to help their parents make ends meet.\nThey spent long hours in the fields, tending to crops and livestock, and doing whatever odd jobs they could find.\n\n" << username << "'s most recent job is being a... \n\n";

	// JOB SELECTION

	std::cout << "\n== You Choose! ==\n\nYou have three different options for jobs! They are as follows:\n\n==========\n\n#1: Blacksmith\n\n#2: Farmer\n\n#3: Warrior\n\n==========\n\nPlease make your job selection using the number of the job you want!: ";
	std::cin >> jobSelection;

	while (selectionValid == false)
	{
		if (jobSelection == 1)
		{
			jobType = "blacksmith";
			break;
		}

		else if (jobSelection == 2)
		{
			jobType = "farmer";
			break;
		}

		else if (jobSelection == 3)
		{
			jobType = "warrior";
			break;
		}

		else if (jobSelection > 3);
		else if (jobSelection < 1);
		std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
		std::cin >> jobSelection;
	}

	std::cout << "\n========\nYou have selected " << jobType << "!\n========\n\n" << username << "'s most recent job is being a " << jobType << "!" << std::endl;

	// JOB SELECTION END

	std::cout << "\n== BACKSTORY CONTINUED ==\n\nDespite their difficult circumstances, " << username << " always took pride in their appearance, even if their clothes were tattered and worn.\nThey would spend what little money they had on colorful scraps of cloth and ribbons.\n" << username << " is currently wearing...\n\n";

	// CLOTHES SELECTION

	std::cout << "== YOU CHOOSE! ==\n\n";
	if (jobType == "blacksmith")
	{
		std::cout << "Since you are a blacksmith, your choices of clothing are as follows:\n\n==========\n\n#1: Leather apron (With casual clothes)\n#2: No apron (Only casual clothes)\n\n==========\n\nPlease type the number from the list to select what clothing type you want!: ";
		std::cin >> clothesSelection;
		while (selectionValid == false)
		{
			if (clothesSelection == 1)
			{
				armourType = "leather apron";
				break;
			}

			else if (clothesSelection == 2)
			{
				armourType = "casual clothes";
				break;
			}
			else if (clothesSelection > 2);
			else if (clothesSelection < 1);
			std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
			std::cin >> clothesSelection;
		}
	}
	else if (jobType == "farmer")
	{
		std::cout << "Since you are a farmer, your choices of clothing are as follows:\n\n==========\n\n#1: Farmers overalls (Jean style)\n#2: Farmers overalls (Chequered pattern)\n#3: Casual clothes only\n\n==========\n\nPlease type the number from the list to select what clothing type you want!: ";
		std::cin >> clothesSelection;
		while (selectionValid == false)
		{
			if (clothesSelection == 1)
			{
				armourType = "denim farmer overalls";
				break;
			}

			else if (clothesSelection == 2)
			{
				armourType = "chequered farmer overalls";
				break;
			}
			else if (clothesSelection == 3)
			{
				armourType = "casual clothes";
				break;
			}
			else if (clothesSelection > 3);
			else if (clothesSelection < 1);
			std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
			std::cin >> clothesSelection;
		}
	}
	else if (jobType == "warrior")
	{
		std::cout << "Since you are a warrior, your choices of armour are as follows:\n\n==========\n\n#1: Knights armour\n#2: Chainmail armour\n#3: Gothic plate armour\n\n==========\n\nPlease type the number from the list to select what clothing type you want!: ";
		std::cin >> clothesSelection;
		while (selectionValid == false)
		{
			if (clothesSelection == 1)
			{
				armourType = "knights armour";
				break;
			}

			else if (clothesSelection == 2)
			{
				armourType = "chainmail armour";
				break;
			}
			else if (clothesSelection == 3)
			{
				armourType = "gothic plate armour";
				break;
			}
			else if (clothesSelection > 3);
			else if (clothesSelection < 1);
			std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
			std::cin >> clothesSelection;
		}
	}

	std::cout << "\n========\nYou have selected " << armourType << "!\n========\n\n" << username << "'s currently wearing " << armourType << "!" << std::endl;

	// CLOTHES SELECTION END

	// CLOTHES COLOUR SELECTION

	std::cout << "\nThe colour of " << username << "'s clothes are...";
	std::cout << "\n\n== YOU CHOOSE! ==\n\n";
	if (jobType == "blacksmith")
	{
		std::cout << "You get to choose the colour of your clothes! Please enter the colour you want your clothes to be!: ";
		std::cin >> armourColour;
	}
	else if (jobType == "farmer")
	{
		std::cout << "You get to choose the colour of your clothes! Please enter the colour you want your clothes to be!: ";
		std::cin >> armourColour;
	}
	else if (jobType == "warrior")
	{
		std::cout << "You get to choose the colour of your armour! Please enter the colour you want your armour to be!: ";
		std::cin >> armourColour;
	}

	std::cout << "\n\n========\nColour selected is " << armourColour << "\n========" << std::endl;
	// CLOTHES COLOUR SELECTION END


	// WEAPON SELECTION

	std::cout << "\nThe weapon that " << username << " wields is a...";
	std::cout << "\n\n== YOU CHOOSE! ==\n\n";
	if (jobType == "blacksmith")
	{
		std::cout << "Since you're a blacksmith class, you can choose your weapon from this list:\n\n========\n\n#1: Hammer\n#2: Axe\n#3: Red-hot Metal Spear\n\n==========\n\nPlease type the number from the list to select what clothing type you want!: ";
		std::cin >> weaponSelection;

		while (selectionValid == false)
		{
			if (weaponSelection == 1)
			{
				weaponSelect = "hammer";
				break;
			}
			else if (weaponSelection == 2)
			{
				weaponSelect = "axe";
				break;
			}
			else if (weaponSelection == 3)
			{
				weaponSelect = "red-hot-metal-spear";
				break;
			}
			else if (weaponSelection > 3);
			else if (weaponSelection < 1);
			std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
			std::cin >> weaponSelection;
		}
	}
	else if (jobType == "farmer")
	{
		std::cout << "Since you're a farmer class, you can choose your weapon from this list:\n\n========\n\n#1: Pitchfork\n#2: Shovel\n#3: Scythe\n\n==========\n\nPlease type the number from the list to select what clothing type you want!: ";
		std::cin >> weaponSelection;

		while (selectionValid == false)
		{
			if (weaponSelection == 1)
			{
				weaponSelect = "pitchfork";
				break;
			}
			else if (weaponSelection == 2)
			{
				weaponSelect = "shovel";
				break;
			}
			else if (weaponSelection == 3)
			{
				weaponSelect = "scythe";
				break;
			}
			else if (weaponSelection > 3);
			else if (weaponSelection < 1);
			std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
			std::cin >> weaponSelection;
		}
	}
	else if (jobType == "warrior")
	{
		std::cout << "Since you're a warrior class, you can choose your weapon from this list:\n\n========\n\n#1: Sword\n#2: Axe\n#3: Mace\n\n==========\n\nPlease type the number from the list to select what clothing type you want!: ";
		std::cin >> weaponSelection;

		while (selectionValid == false)
		{
			if (weaponSelection == 1)
			{
				weaponSelect = "sword";
				break;
			}
			else if (weaponSelection == 2)
			{
				weaponSelect = "axe";
				break;
			}
			else if (weaponSelection == 3)
			{
				weaponSelect = "mace";
				break;
			}
			else if (weaponSelection > 3);
			else if (weaponSelection < 1);
			std::cout << "\n=!=!=!=\nInput error! Selection was not in the options!\nPlease type a number that is in the options above: ";
			std::cin >> weaponSelection;
		}
	}

	std::cout << "\n========\nWeapon selected to wield is the " << weaponSelect << "!\n========" << std::endl;

	// WEAPON SELECTION END

	std::cout << "\n\n========\n\n== FINISHED CHARACTER DESCRIPTION ==\n\n" << username << " is a " << age << " year old " << jobType << " who is currently wearing their " << armourColour << " " << armourType << " and wields a " << weaponSelect << "!\n\n========\n\n = != Are you ready to start ? = != ";

}

int main()
{
	// Gets username + age.
	std::cout << "                     =========================================================\n                     |  == WELCOME TO [insert name here] TEXT-BASED RPG! ==  |\n============================================================================================================\n\n";
	std::cout << "To start your journey, we require a few details to make the story more suited to you as a player!\n\n============================================================================================================\n\nFirst of all, what is your name?: ";
	std::cin >> username;
	std::cout << "\nWhat is your age?: ";
	std::cin >> age;
	std::cout << "\nWhat is the name of your hometown? (Can be fantasy or reality): ";
	std::cin >> homeTown;
	// Calls Introduction() function.
	Introduction(username, age, homeTown);
	std::cin.get();
}