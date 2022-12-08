#include <iostream>
#include <fstream>
using namespace std;
void ScoreEntry();
void DisplayScores();

int main()
{
    int choice = 0;

    while (choice != 3)
    {
        cout << "--------------------------------------------" << endl;
        cout << "Hello and Welcome to the score collector" << endl;
        cout << "--------------------------------------------" << endl;
        cout << "Please choose one of the following options:" << endl;
        cout << "(1) Enter a score" << endl;
        cout << "(2) Display scores" << endl;
        cout << "(3) Exit" << endl;
        if (choice == 1)
        {
            ScoreEntry();
        }
        else if (choice == 2)
        {
            DisplayScores();
        }
        else
        {
            cout << "This wasn't an available option" << endl;
        }
    }
}

void ScoreEntry()
{
    cout << endl;
    cout << "Please enter a Score" << endl;
    cout << "Please enter a Name" << endl;
}

void DisplayScores()
{

}