#include "Zombie.hpp"

Zombie* newZombie(std::string name){

	Zombie* FirstZombie = new Zombie(name);

	FirstZombie->announce();
	return (FirstZombie);
}