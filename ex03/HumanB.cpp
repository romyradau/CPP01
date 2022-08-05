#include "Weapon.hpp"
# include "HumanB.hpp"



HumanB::HumanB(std::string name): _name(name){

}

HumanB::~HumanB(){

}

void	HumanB::attack()const{

	std::cout << this->_name << " attacks with their " << this->_WeaponB->getType() << std::endl;
}
//hier braucht man nichtmal this
//this nochmal besser verstehen..
//cons und static auch!

void	HumanB::setWeapon(Weapon& weapon){

	_WeaponB = &weapon;
}