#include "Weapon.hpp"

Weapon::Weapon(std::string str)//この子が呼ばれるタイミングの確認をしてあげる。
{
	this->type = str;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}