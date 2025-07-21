#include <iostream>
#include <string>

#include "roles/warrior.h"

using namespace PlayerClasses;

int main() {
	std::cout << "Enter your name." << std::endl;
	Warrior plr;
	std::getline(std::cin, plr.name);
	
	std::cout << "Hello there, " << plr.name << "!" << std::endl;
	
	plr.outputStats();
	plr.weapon->use();
	
	std::cout << "Press anything to leave." << std::endl;
	std::cin.get();
	return 0;
}

// Make player choose class!