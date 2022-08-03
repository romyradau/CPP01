#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {

}

Zombie::~Zombie() {

	std::cout << _name << " deaaad chrzylkclshdesiuf" <<std::endl;
}
//wie kriegt der hier den namen??

void Zombie::announce(void){

	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." <<std::endl;
}

// void Zombie::set_name(std::string name){

// 	std::getline(std::cin, this->name)
// }