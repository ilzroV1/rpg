#ifndef AXE_H
#define AXE_H
#include "weapon.h"

namespace WeaponClasses {
	struct Axe : Weapon
	{
		Axe() : Weapon
		(
			"Axe",					// Name
			1,						// Magic
			5,						// Damage
			"You swung the axe..." 	// Hit message
		) {}
	};
}

#endif // AXE_H