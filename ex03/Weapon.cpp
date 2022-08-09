#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){

}

Weapon::~Weapon(){

}

std::string const& Weapon::getType(){

	return (this->_type);
}
//gets automatically casted into a ref

void	Weapon::setType(std::string const& new_type){

	_type = new_type;
}
//const bc we want to give the actual new_type not a copy of it