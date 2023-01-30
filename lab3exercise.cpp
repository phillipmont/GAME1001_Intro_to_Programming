/*
An auto repair shop charges as follows.:
All vehicles have an inspection cost of $75. This determines if any work needs to be done. If no
work needs to be done, there is no further charge.
If work needs to be done, the charge is $75 per hour for labour plus the cost of parts. There is a
minimum charge of $120 once any work is done. If any work is done, there is no charge for
inspecting the vehicle.
Your program must only prompt the user for (read as user input) :
1. The number of hours worked (This can be 0 but must a whole number)
2. The cost of parts (This can be 0)
Your program must print the charge for the job. 
*/

#include <iostream>

using namespace std;

int main()
{

	const int INSPECTION_FEE = 75;
	const int LABOUR_COST = 75;
	const int MINIMUM_CHARGE = 120;
	
	int hoursLabour = 0;
	cout << "Enter number of hours worked" << endl;
	cin >> hoursLabour;
	cout << endl;

	float costParts = 0;
	cout << "Enter cost of parts ($)" << endl;
	cin >> costParts;
	cout << endl << endl;

	float totalCharge;

	if (hoursLabour > 0)
	{
		totalCharge = (LABOUR_COST * hoursLabour);
		if (totalCharge < 120) totalCharge = 120;
	}
	else totalCharge = INSPECTION_FEE;

	cout << "Total charge: $" << totalCharge + costParts;


	return 0;
}
