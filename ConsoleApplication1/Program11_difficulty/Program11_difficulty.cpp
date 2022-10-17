#include <iostream>
using namespace std;

int main() {
	int playerInput;

	cout << "Please choose your difficulty" << endl;
	cout << "1.	I'm too young to die!" << endl;
	cout << "2.	Hey, not to rough!" << endl;
	cout << "3.	Hurt me plenty." << endl;
	cout << "4.	Ultra - Violence." << endl;
	cout << "5.	Nightmare " << endl;

	cin >> playerInput;

	switch (playerInput)
	{
	case 1:
		cout << "You pacafist!" << endl;
		break;

	case 2:
		cout << "Ok then, easy mode you go." << endl;
		break;

	case 3:
		cout << "Time to turn it up a notch!" << endl;
		break;

	case 4:
		cout << "Violence is my middle name!!" << endl;
		break;

	case 5:
		cout << "Out of the frying pan, into the fire!!!" << endl;
		break;

	default:
		cout << "That's not one the list." << endl;
		break;
	}
}
