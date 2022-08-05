#include "Weapon.hpp"
# include "HumanA.hpp"



HumanA::HumanA(std::string name, Weapon& WeaponA): _name(name), _WeaponA(WeaponA){

}

HumanA::~HumanA(){

}

void	HumanA::attack()const{

	std::cout << this->_name << " attacks with their " << this->_WeaponA.getType() << std::endl;
}