#pragma once 

# include <iostream>
# include <iomanip>
# include <string>
# include <new>

class Zombie{

	public:

		Zombie();
		~Zombie();

		void	set_name(std::string name);
		void	announce(void);
		
	private:

		std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name);
