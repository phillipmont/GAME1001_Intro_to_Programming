#include <iostream>

int main()
{
	//Declare and initialize variables
	int muffinSold = 0;
	int donutSold = 0;
	float muffinPrice = 0.0f;
	float donutPrice = 0.0f;
	float muffinSales = 0.0f;
	float donutSales = 0.0f;
	int totalSold = 0;
	float totalSales = 0.0f;

	//Input from user
	std::cout << "Enter muffin price ($):" << std::endl;
	std::cin >> muffinPrice;

	std::cout << "Enter number of muffins sold:" << std::endl;
	std::cin >> muffinSold;

	std::cout << "Enter donut price ($):" << std::endl;
	std::cin >> donutPrice;

	std::cout << "Enter number of donuts sold:" << std::endl;
	std::cin >> donutSold;

	std::cout << std::endl << std::endl;
	std::cout << "SUMMARY" << std::endl << std::endl;

	//Calculations
	muffinSales = muffinPrice * muffinSold;
	donutSales = donutPrice * donutSold;
	totalSold = muffinSold + donutSold;
	totalSales = muffinSales + donutSales;


	//Outputs
	std::cout << "Muffin price: $" << muffinPrice << std::endl << std::endl;
	std::cout << "Quantity of muffins sold: " << muffinSold << std::endl << std::endl;
	std::cout << "Muffin sales: $" << muffinSales << std::endl << std::endl;
	std::cout << "Donut price: $" << donutPrice << std::endl << std::endl;
	std::cout << "Quantity of donuts sold: " << donutSold << std::endl << std::endl;
	std::cout << "Donut sales: $" << donutSales << std::endl << std::endl;
	std::cout << "A total of " << totalSold << " items were sold." << std::endl << std::endl;
	std::cout << "$" << totalSales << " was collected in sales.";

	return 0;
}