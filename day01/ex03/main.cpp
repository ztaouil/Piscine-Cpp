#include "HumanA.hpp"
#include "HumanB.hpp"

int		main()
{
	{
		//Weapon	club = Weapon("crude spiked club");
		Weapon	club("crude spiked club");

		// club reference
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of clubs");
		jim.attack();
	}
}