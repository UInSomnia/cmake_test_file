#include <iostream>

#include "fun.h"

int main()
{
	std::cout << "Hello, CMake!\n";
	
	double num_0 = 0.;
	double num_1 = 0.;
	std::cin >> num_0 >> num_1;
	const double result = InSomnia::sum(num_0, num_1);
	std::cout << "result: " << result << "\n";
	
	return 0;
}
