#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

// #include "weapon_classes.h"

#include "../weapons/axe.h"
#include "../weapons/fist.h"

using namespace WeaponClasses;

namespace PlayerClasses
{
	struct Player
	{
		std::string name;
		Weapon* weapon;
		int health;
		int attack;
			
		Player(int h = 0, int a = 0, Weapon* w = nullptr) : health(h), attack(a), weapon(w) {
			if (!weapon) {
				weapon = new Fist();
			}
			weapon->owner = this;
		}
		
		void outputStats() const {
			std::cout << "HP: " << health << " / ATK: " << attack << " / WPN: " << weapon->name << std::endl;
		}
		
		virtual ~Player() {
			delete weapon;
		}
	};
}

namespace WeaponClasses
{
	inline void Weapon::use() {
		if (owner) {
				int dealtDamage = owner->attack + damage;
				std::cout << message << "\nDealt " << dealtDamage << "." << std::endl;
			}
	}
}

#endif // PLAYER_H