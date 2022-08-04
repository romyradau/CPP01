#pragma once 

# include <iostream>
# include <iomanip>
# include <string>
# include <new>

class Zombie{

	public:

		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		
	private:

		std::string	_name;

};

void randomChump(std::string name);

Zombie* newZombie(std::string name);