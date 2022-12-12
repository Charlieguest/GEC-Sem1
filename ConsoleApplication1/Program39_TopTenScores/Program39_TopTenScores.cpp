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
    int scoreAmount = 1;
    int smallestValue;
    Score entry;
    fstream inOutFile;

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
                inOutFile.open("Scores.txt", ios_base::app);
                if (inOutFile.is_open())
                {
                    cout << endl;
                    cout << "Please enter a Score" << endl;
                    cin >> entry.score;
                    if (scoreAmount == 1)
                    {
                        smallestValue = entry.score;
                    }
                    else
                    {
                        if (entry.score < smallestValue)
                        {
                            smallestValue = entry.score;
                        }
                    }
                    cout << "Please enter a Name" << endl;
                    cin >> entry.name;
                    if (scoreAmount >= 10)
                    {
                        for (int i = 0; i < 10; i++)
                        {
                            if (entry.scoreArray[i] == smallestValue)
                            {
                                // replace smallest value in my current array
                            }
                        }
                        
                    }
                    else
                    {
                        for (int i = scoreAmount - 1; i < scoreAmount; i++)
                        {
                            entry.scoreArray[i] = entry.score;
                            entry.nameArray[i] = entry.name;
                            cout << entry.scoreArray[i] << endl;
                            inOutFile << "Name: " << entry.nameArray[i] << " || ";
                            inOutFile << "Score: " << entry.scoreArray[i] << endl;

                        }
                    }
                   

                    scoreAmount++;

                }
                inOutFile.close();
            break;
            default:
                cout << "cheese";
            break;
        }
    }
}

void ScoreEntry()
{
}

void DisplayScores()
{

}
