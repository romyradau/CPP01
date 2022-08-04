#include "Zombie.hpp"

Zombie* newZombie(std::string name){

	Zombie* FirstZombie = new(std::nothrow) Zombie(name);
	if (!FirstZombie){

		std::cout << "memory allocation failed" << std::endl;
	}
	return (FirstZombie);
}