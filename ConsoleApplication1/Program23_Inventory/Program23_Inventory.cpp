#include <iostream>
using namespace std;

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    char choice;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    cout << "You have picked up the wizard's staff" << endl;
    cout << "Would you like to swap it for the dagger in your inventory y/n" << endl;
    cin >> choice;
    cout << endl;
    cout << endl;

    if ( choice == 'y')
    {
        inventory[3] = "Wizard's Staff";

        for (int i = 0; i < size(inventory); i++)
        {
            cout << inventory[i] << endl;
        }
    }
    else
    {

        cout << "You chose to leave the staff behind" << endl;

        for (int i = 0; i < size(inventory); i++)
        {
            cout << inventory[i] << endl;
        }

    }
}