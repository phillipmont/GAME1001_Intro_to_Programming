#include <iostream>

using namespace std;

int main()
{
	
	cout << "Welcome to Battle Simulator 3000" << endl
		 << "Preparing for battle..." << endl << endl;
	
	// Input player health
	int playerHealth = 0;
	cout << "Enter the player's health: " << endl;
	cin >> playerHealth;
	
	// Input player damage
	int playerDamage = 0;
	cout << "Enter player's damage: " << endl;
	cin >> playerDamage;

	// Input monster health
	int monsterHealth = 0;
	cout << "Enter the monster's health: " << endl;
	cin >> monsterHealth;

	// Input monster damage
	int monsterDamage = 0;
	cout << "Enter monster's damage: " << endl;
	cin >> monsterDamage;
	
	// Monster attacks player
	cout << "The monster fearsomely lunges at the player!" << endl;
	playerHealth -= monsterDamage;
	cout << "The player took " << monsterDamage << " damage. "
	 	 << "Player Health: " << playerHealth << endl;

	// Player attacks monster
	cout << "The player fights back in retaliation!" << endl;
	monsterHealth -= playerDamage;
	cout << "The monster took " << playerDamage << " damage. "
		<< "Monster Health: " << monsterHealth << endl;

	// Win condition: player or monster health must = 0
	if (playerHealth <= 0 || monsterHealth <= 0)
	{
		if (playerHealth <= 0 && monsterHealth <= 0)
			cout << "Both parties lost the fight" << endl;
		else if (monsterHealth <= 0)
			cout << "Player won the fight!" << endl;
		else
			cout << "Monster won the fight!" << endl;
	}
	else
	{
		cout << "Its a draw..." << endl;
	}
	
	return 0;
}	

// "-=" is the same as a = a - b.


// You can declare, cin, and cout multiple in one line
	//double number1, number2, number3;
	//std::cin >> number1 >> number2 >> number3;
	//std::cout << number1 << number2 << number3;