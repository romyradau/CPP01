#include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"


int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}


//wann soll man hier überall references benutzen?
//weil ich die attack function in der main benutze bracueh ich eine get function