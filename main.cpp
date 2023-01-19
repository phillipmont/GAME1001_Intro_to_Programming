#include <iostream>

int main() 
{
	std::cout << "Enter any character" << std::endl;
	char character;
	std::cin >> character;
	std::cout << "Your initial character was: " << character << std::endl;
	character = character + 1;
	std::cout << "Your final character was: " << character << std::endl;
	return 0;
}


