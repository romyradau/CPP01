#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::~Zombie() {

	std::cout << _name << ":" << " deaaad chrzylkclshdesiuf" <<std::endl;
}

void Zombie::announce(void){

	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::set_name(std::string name, int i){
	i++;
	std::string s;

	std::ostringstream tem;
	tem << i;
	s = tem.str();

	name = name + " " + s;
	this->_name = name;
}