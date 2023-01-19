#include <iostream>

int main()
{
	int muffinSold = 0;
	int donutSold = 0;
	float muffinPrice = 0.0f;
	float donutPrice = 0.0f;
	float muffinSales = 0.0f;
	float donutSales = 0.0f;
	int totalSold = 0;
	float totalSales = 0.0f;

	std::cout << "Enter muffin price" << std::endl;
	std::cin >> muffinPrice;

	std::cout << "Enter number of muffins sold" << std::endl;
	std::cin >> muffinSold;

	std::cout << "Enter donut price" << std::endl;
	std::cin >> donutPrice;

	std::cout << "Enter number of donuts sold" << std::endl;
	std::cin >> donutSold;

	std::cout << "Muffin Price: " << muffinPrice << std::endl;
	std::cout << "Quantity of muffins sold: " << muffinPrice << std::endl;
	std::cout << "Donuts price: " << muffinPrice << std::endl;
	std::cout << "Quantity of donuts sold: " << muffinPrice << std::endl;
	std::cout << "Muffin sales: $" << muffinPrice << std::endl;
	std::cout << "Donut sales: $" << muffinPrice << std::endl;
	std::cout << "A total of " << totalSold << "items were sold." << std::endl;
	std::cout << "$" << totalSales << " was collected in sales." << std::endl;

}