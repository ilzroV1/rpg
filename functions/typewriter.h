#ifndef TYPEWRITER_H
#define TYPEWRITER_H

#include <string>
#include <iostream>
#include <cstring>
#include <chrono>
#include <thread>

namespace typewriter
{
	void write(const char phrase[]) {
		using namespace std::this_thread;
		using namespace std::chrono;
		
		for (int i = 0; i < strlen(phrase); i++) {
			std::cout << phrase[i] << std::flush;
			sleep_for(50ms);
		}
	
		std::cout << std::endl;
	}
}

#endif // TYPEWRITER_H