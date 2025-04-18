#pragma once
#include <string>
#include "KFox_Classes_Cardinal_Weapons.cpp"


class CardinalWeapons
{
public:
	enum class WeaponTypes
	{
		SWORD,
		BOW,
		SPEAR,
		SHEILD
	};
	std::string weilder_name;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	virtual std::string getName(); 

	virtual WeaponTypes getWeapon() = 0;


};