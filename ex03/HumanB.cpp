#include "Weapon.hpp"
# include "HumanB.hpp"



HumanB::HumanB(std::string name): _name(name){

}

HumanB::~HumanB(){

}

void	HumanB::attack()const{

	std::cout << this->_name << " attacks with their " << this->_WeaponB->getType() << std::endl;
}
//i need a get_type_function, bc the mainwants to access the private attribute

void	HumanB::setWeapon(Weapon& weapon){

	_WeaponB = &weapon;
}