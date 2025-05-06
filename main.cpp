#include <iostream>

#include "fun.h"

int main()
{
	std::cout << "Hello, CMake!\n";
	
	const double num_0 = 4.5;
	const double num_1 = 5.5;
	const double result = InSomnia::sum(num_0, num_1);
	std::cout << "result: " << result << "\n";
	
	return 0;
}
