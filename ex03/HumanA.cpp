#include "HumanA.hpp"


HumanA::HumanA(std::string name ,Weapon &_weapon): _weapon(_weapon)//ここの部分の理解がまだ追いついてない。
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->_weapon.getType() << std::endl;
}