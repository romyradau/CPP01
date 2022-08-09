#include "Zombie.hpp"


int	main(){

	
	delete newZombie("ROOOMY");
	randomChump("MiIIIltooon");
	return (0);
}

//Delete operation performs a null pointer check anyway
//So performing another null pointer check is an unnecessary operation
//if newZombie gets  created out of main, can I deete it here?