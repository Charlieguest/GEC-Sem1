#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    int damageTaken;
    int i = 1;

    for (i = 1; i >= 10; i++)
    {
        if (playerLife > 0) {
            
            cout << "Question " << i << "How much damage should i deal?";

            cin >> damageTaken;

            playerLife -= damageTaken;

            if (i == 10) {
                cout << "All questions asked. Player Survived!" << endl;
            }
        }
        else {
            cout << "Early end. Player Died" << endl;
        }
    }
}