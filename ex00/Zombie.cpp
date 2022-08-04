#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {

}

Zombie::~Zombie() {

	std::cout << _name << ":" << " deaaad chrzylkclshdesiuf" <<std::endl;
}

void Zombie::announce(void){

	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." <<std::endl;
}
