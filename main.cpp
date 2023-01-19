#include <iostream>

int main() 
{
	std::cout << "Enter any character" << std::endl;
	char character;
	std::cin >> character;
	std::cout << "Your initial character was: " << character << std::endl;
	character = character + 1;
	std::cout << "Your final character was: " << character << std::endl;
	
	std::cout << "Enter a number" << std::endl;
	int number;
	std::cin >> number;
	std::cout << "Initial number: " << number << std::endl;
	std::cout << "Initial number + 2: " << number + 2 << std::endl;
	std::cout << "Initial number - 2: " << number - 2 << std::endl;
	std::cout << "Initial number * 2: " << number * 2 << std::endl;
	std::cout << "Initial number / 2: " << number / 2 << std::endl;
	return 0;
}


