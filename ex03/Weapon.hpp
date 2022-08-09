#pragma once

# include <iomanip>
# include <iostream>
# include <string>

class Weapon{

	public:

		Weapon(std::string type);
		~Weapon();

		std::string const& getType();
		void setType(std::string const& new_type);

	private:

		std::string _type;
};

//with a reference you don't copy the memory, so it saves space