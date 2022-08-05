#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){

}

Weapon::~Weapon(){

}

std::string const& Weapon::getType(){

	// std::string & type_ref = this->_type;
	return (this->_type);
}
//der castet das selber in ein reference

void	Weapon::setType(std::string const& new_type){

	_type = new_type;
}