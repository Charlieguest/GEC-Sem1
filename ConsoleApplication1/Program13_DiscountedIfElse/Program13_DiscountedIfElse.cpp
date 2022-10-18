#include <iostream>
using namespace std;

int main()
{
	char userStatus;
	int game;

	cout << "What is the users status:" << endl;

	cin >> userStatus;

	cout << "Which game would you like" << endl;

	cin >> game;
	
	if ((userStatus == 's' || userStatus == 't') && game == 1) 
	{
		cout << "You are entitled to a 20% discount" << endl;
	}
	else if ((userStatus == 's' || userStatus == 't') && game == 2)
	{
		cout << "you are entitled to a 10% discount" << endl;
	}
	else {
		cout << "you are not entitled to a discount" << endl;
	}
}