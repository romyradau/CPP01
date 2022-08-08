# include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name){

	Zombie *ZombieHorde = new(std::nothrow) Zombie[N];
	if (!ZombieHorde){

		std::cout << "memory allocation failed" << std::endl;
	}
	for(int i = 0; i < N; i++){

		ZombieHorde[i].set_name(name, i);
		ZombieHorde[i].announce();
	}

	return (ZombieHorde);
}