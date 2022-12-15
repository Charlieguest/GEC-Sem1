#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void ScoreEntry();
void DisplayScores();

struct Score {
    string name;
    int score;
    string nameArray[10];
    int scoreArray[10];
};

int main()
{
    int choice = 0;
    int scoreAmount = 1;
    int smallestValue = 0;
    Score entry;
    ifstream inFile;
    ofstream outPutStream;
    string line;

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
                inFile.open("Scores.txt", ios::app);
                if (inFile.is_open())
                {
                    cout << endl;
                    cout << "Please enter a Score" << endl;
                    cin >> entry.score;
                    while (!inFile.eof())
                    {
                        getline(inFile, line);
                        scoreAmount++;
                    }
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

                    inFile.close();
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
                    outPutStream.open("Scores.txt", ios_base::app);
                    if (outPutStream.is_open())
                    {
                        for (int i = scoreAmount - 1; i < scoreAmount; i++)
                        {
                            cout << scoreAmount << endl;
                            entry.scoreArray[i] = entry.score;
                            entry.nameArray[i] = entry.name;
                            outPutStream << "Name: " << entry.nameArray[i] << " || ";
                            outPutStream << "Score: " << entry.scoreArray[i] << endl;
                        }
                    }
                }
            break;
            case 2:
                inFile.open("Scores.txt");
                if (inFile.is_open())
                {
                    while (!inFile.eof())
                    {
                        getline(inFile, line);
                        cout << line << endl;
                    }
                }
                inFile.close();
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
