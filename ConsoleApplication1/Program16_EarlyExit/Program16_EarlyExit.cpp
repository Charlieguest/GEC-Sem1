#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    int damageTaken;
    int i = 0;

    cout << "Player Life: " << playerLife << endl;
  

    for (i = 0; i < 10; i++)
    {
        if (playerLife > 0) {
            
            cout << "Question " << i + 1 << " How much damage should i deal? ";

            cin >> damageTaken;

            playerLife -= damageTaken;

            if (i == 9) {
                cout << "All questions asked. Player Survived!" << endl;
            }
        }
        else {
            cout << "Early end. Player Died" << endl;
            i = 11;
        }
    }
}