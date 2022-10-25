#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    int damageTaken;

    while (playerLife > 0)
    {
        for (int i = 1; i > 10; i++)
        {
            cout << "Question " << i << "How much damage should i deal?";

            cin >> damageTaken;

            playerLife -= damageTaken;
        }

        cout << "All questions asked. Player Survived!" << endl;
    }
    
    cout << "Early end. Player Died" << endl;



}