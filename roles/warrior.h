#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include <iostream>

#include "player_classes.h"

using namespace WeaponClasses;

namespace PlayerClasses
{
	struct Warrior : Player
	{
		Warrior() : Player
		(
			10,			// Health
			5,			// Attack
			new Axe()	// Weapon
		) {}
	};
}

#endif // WARRIOR_H