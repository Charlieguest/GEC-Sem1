#include <iostream>
using namespace std;
void AttackChoice(int choice);
bool PlayState();

int playerHealth = 2000;
int enemyHealth = 1000;
bool playing = true;

int main()
{
	int playersChoice = 1;
	
	while (playing)
	{
		cout << "You have met a troll and have 3 options of attack" << endl;
		cout << endl;
		cout << "1. Use Sword" << endl;
		cout << "2. Use Magic" << endl;
		cout << "3. Use Axe" << endl;
		cout << endl;
		cout << "Each choice has different effects" << endl;
		cin >> playersChoice;
	
		AttackChoice(playersChoice);

		playing = PlayState();

	}
	
	return 0;
}

void AttackChoice(int choice)
{
	const int swordDamage = 300;
	const int magicDamage = 650;
	const int axeDamage = 450;

	const int trollSword = 350;
	const int trollMagic = 50;
	const int trollAxe = 100;

	switch (choice) {
		case 1:
			playerHealth -= trollSword;
			enemyHealth -= swordDamage;
			cout << "You have hit the troll" << endl;
			cout << "The troll has hit you" << endl;
			cout << "Your health is " << playerHealth << endl;
			cout << "The troll's health is " << enemyHealth << endl;
			break;
		case 2:
			playerHealth -= trollMagic;
			enemyHealth -= magicDamage;
			cout << "You have hit the troll" << endl;
			cout << "The troll has hit you" << endl;
			cout << "Your health is " << playerHealth << endl;
			cout << "The troll's health is " << enemyHealth << endl;
			break;
		case 3:
			playerHealth -= trollAxe;
			enemyHealth -= axeDamage;
			cout << "You have hit the troll" << endl;
			cout << "The troll has hit you" << endl;
			cout << "Your health is " << playerHealth << endl;
			cout << "The troll's health is " << enemyHealth << endl;
			break;
	}
}

bool PlayState()
{
	char playAgainOption;

	if (enemyHealth <= 0)
	{
		cout << "You have killed the Troll and Won" << endl;
		cout << "play again y/n?" << endl;
		cin >> playAgainOption;
		cout << playAgainOption;
		if (playAgainOption == 'y')
		{
			enemyHealth = 1000;
			playerHealth = 2000;
			return true;
		}
		else if (playAgainOption == 'n')
		{
			return false;
		}
		else {
			cout << "That was not an option" << endl;
		}
	}
	else if (playerHealth <= 0)
	{
		cout << "You have been killed by the Troll and lost" << endl;
		cout << "play again y/n?" << endl;
		cin >> playAgainOption;
		if (playAgainOption == 'y')
		{
			enemyHealth = 1000;
			playerHealth = 2000;
			return true;
		}
		else if (playAgainOption == 'n')
		{
			return false;
		}
		else {
			cout << "That was not an option" << endl;
		}
	}

	return true;

}