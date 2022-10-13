#include <iostream>
using namespace std;

int main() {

	typedef int health;

	enum Weapons {
		SWORD,
		DAGGER,
		MACE,
		TWIN_SWORDS,
		SAMURI,
		WIZARD_STAFF,
		FIRE_POTION,
	};

	health playerHealth = 13000;
	Weapons playerWeapons = SAMURI;

	cout << "My current health is ";
	cout << playerHealth << endl;
	cout << "And the ID of my weapon choice is ";
	cout << playerWeapons << endl;
}