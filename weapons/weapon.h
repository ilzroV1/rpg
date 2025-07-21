#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

namespace PlayerClasses
{
	struct Player;
}
namespace WeaponClasses
{
	struct Weapon
	{
		std::string name;
		int magic;
		int damage;
		std::string message;
		PlayerClasses::Player* owner = nullptr;
			
		Weapon(std::string n = "Air", int m = 1, int d = 1, std::string msg = "") : name(n), magic(m), damage(d), message(msg) {}
		
		void use();
	};
}

#endif // WEAPON_H