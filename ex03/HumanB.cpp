#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " No weapon :( " << std::endl;
		else
		std::cout << this->_name << " attacks with their " << std::endl;
}