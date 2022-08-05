#pragma once

# include <iomanip>
# include <iostream>
# include <string>
// # include "HumanA.hpp"
// # include "HumanB.hpp"
//includes nochmal richtig verstehen!

class Weapon{

	public:

		Weapon(std::string type);
		~Weapon();

		std::string const& getType();
		void setType(std::string const& new_type);

		//const schuetzt
		//man nimmt ne ref damit man auf das originale zuruck greift
		//und keine kopie wie mit einem pointer erstellt
		//das spart platz



	private:

		std::string _type;
};
