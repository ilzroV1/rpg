#include <iostream>
#include <string>
#include "functions/typewriter.h"

#include "roles/warrior.h"

using namespace PlayerClasses;

int main() {
	typewriter::write( "Enter your name.");
	std::cout << " > ";
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
// Hey, this is something for when I commit.