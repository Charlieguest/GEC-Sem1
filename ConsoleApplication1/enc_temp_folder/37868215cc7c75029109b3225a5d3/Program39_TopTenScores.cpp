#include <iostream>
#include <fstream>
using namespace std;
void ScoreEntry();
void DisplayScores();

struct Score {
    string nameArray[10];
    int scoreArray[10];
    string name;
    int score;
};

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
        cin >> choice;
        switch (choice)
        {
            case 1:
                ScoreEntry();
            break;
            default:
                cout << "cheese";
            break;
        }
    }
}

void ScoreEntry()
{
    Score entry;
    fstream inOutFile;
    inOutFile.open("Scores.txt", ios_base::app);
    if (inOutFile.is_open())
    {
        cout << endl;
        cout << "Please enter a Score" << endl;
        cin >> entry.score;
        cout << "Please enter a Name" << endl;
        cin >> entry.name;
        for (int i = 0; i < 10; i++) {
            if (entry.scoreArray[i] < entry.score)
            {
                entry.scoreArray[i] = entry.score;
                entry.nameArray[i] = entry.name;
                cout << entry.scoreArray[i] << endl;
                inOutFile << "Name: " << entry.nameArray[i] << " ";
                inOutFile << "Score: " << entry.scoreArray[i] << endl;

            }
        }

    }
    inOutFile.close();
}

void DisplayScores()
{

}
