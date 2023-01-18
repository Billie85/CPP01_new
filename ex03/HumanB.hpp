#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	void attack();
	void setWeapon(Weapon &weapon);//weaponクラスのどこを指してる?
	HumanB(std::string name);
	~HumanB();
};

#endif