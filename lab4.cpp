/*
#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to Battle Simulator 3000" << endl
		 << "Preparing for battle..." << endl << endl;

	int turnCount = 0;
	cout << endl << "Please enter the number of turns: ";
	cin >> turnCount;

	const int playerMaxHealth = playerHealth;
	const int monsterMaxHealth = monsterHealth;

	for (int turn = 0; turn < turnCount; turn++)
	{

	}

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

	for (int turn = 0; turn < turnCount; turn++)
	{
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
	}

	//while (playerHealth > 0 && monsterHealth > 0)
	//{
	//	// Monster attacks player
	//	cout << "The monster fearsomely lunges at the player!" << endl;
	//	playerHealth -= monsterDamage;
	//	cout << "The player took " << monsterDamage << " damage. "
	//		<< "Player Health: " << playerHealth << endl;

	//	// Player attacks monster
	//	cout << "The player fights back in retaliation!" << endl;
	//	monsterHealth -= playerDamage;
	//	cout << "The monster took " << playerDamage << " damage. "
	//		<< "Monster Health: " << monsterHealth << endl;
	//}

	// Win condition: player or monster health must = 0
	if (playerHealth <= 0 || monsterHealth <= 0)
	{
		if (playerHealth <= 0 && monsterHealth <= 0)
			cout << "Everyone is dead :(" << endl;
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
}//*/

