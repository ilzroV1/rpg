#ifndef FIST_H
#define FIST_H
#include "weapon.h"

namespace WeaponClasses {
	struct Fist : Weapon
	{
		Fist() : Weapon
		(
			"Fist",					// Name
			1,						// Magic
			5,						// Damage
			"You punched as hard as you could..." 	// Hit message
		) {}
	};
}

#endif // FIST_H