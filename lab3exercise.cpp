/*
#include <iostream>

using namespace std;

int main()
{
	const int INSPECTION_FEE = 75;
	const int LABOUR_COST = 75;
	const int MINIMUM_CHARGE = 120;
	
	cout << "===================" << endl
		 << "Dusty's Dent Repair" << endl
		 << "===================" << endl << endl
		 << "Welcome to Dusty's Dent Repair!" << endl << endl;

	int hoursLabour = 0;
	cout << "Enter the number of labour hours (whole numbers only)" << endl;
	cin >> hoursLabour;
	cout << endl;

	float costParts = 0.0f;
	cout << "Enter the total cost of parts ($)" << endl;
	cin >> costParts;
	cout << endl;

	float totalLabour = 0.0f;

	if (hoursLabour > 0)
	{
		totalLabour = (LABOUR_COST * hoursLabour);
		if (totalLabour < 120) totalLabour = 120.0f;
	}
	else totalLabour = INSPECTION_FEE;

	cout << "========================================" << endl << endl
		 << "TOTAL CHARGE: $" << totalLabour + costParts;

	return 0;
}
*/