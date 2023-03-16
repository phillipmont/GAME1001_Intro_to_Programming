#include <iostream>

void printArray(int myArray[], int arrayCount)
{
	std::cout << "The numbers are: ";

	for (int i = 0; i < arrayCount; i++)
	{
		std::cout << myArray[i];
		std::cout << " ";
	}
}

int main()
{
	const int arrayCount = 5;
	int myArray[arrayCount]{};

	std::cout << "Please enter " << arrayCount << " numbers" << std::endl;

	for (int i = 0; i < arrayCount; i++)
	{
		std::cin >> myArray[i];

	}

	printArray(myArray, arrayCount);

	int index, newNum;
	std::cout << std::endl << "Please enter 2 numbers" << std::endl;
	std::cin >> index >> newNum;

	myArray[index] = newNum;

	std::cout << "The array at position " << index << " was changed to " << newNum << std::endl;

	printArray(myArray, arrayCount);

	int key;
	std::cout << std::endl << "Please enter 1 number" << std::endl;
	std::cin >> key;

	for (int i = 0; i < arrayCount; i++)
	{
		if (myArray[i] == key)
			std::cout << key << " exists in the array";
	}

	return 0;
}