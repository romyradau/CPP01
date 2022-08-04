#include "Zombie.hpp"

void randomChump(std::string name){

	Zombie RandomZombie = Zombie(name);
	RandomZombie.announce();
}
