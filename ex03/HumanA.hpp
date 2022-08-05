# pragma once
#include "Weapon.hpp"

class HumanA{

	public:

		HumanA(std::string name, Weapon& WeaponA);
		~HumanA();

		void	attack()const;

	private:

		std::string _name;
		Weapon&		_WeaponA;
};

//woher weiss man ob private wenn nicht angegeben?
//selber entscheiden was wann besser ist?