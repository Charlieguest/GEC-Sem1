#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Account {
    string name;
    int accountNumber;
    double balence;
};

int main()
{
    Account account1;
    Account account2;
    bool accountIs;
    bool AccountIsnt;
    int userChoice = 0;
    char moreDetails;
    ofstream outFile;
    ifstream inFile;

    while (userChoice != 4)
    {
        cout << "Welcome to the Bank Here are your options:" << endl;
        cout << endl;
        cout << "(1) Enter new details" << endl;
        cout << "(2) Display Contents of The File" << endl;
        cout << "(3) Display accounts that have a balance over 10,000" << endl;
        cout << "(4) Exit the program" << endl;
        cin >> userChoice;

        switch (userChoice)
        {
            case 1:
                cout << "cheese" << endl;
            break;
            default:
                cout << "Cheese paste" << endl;
            break;
        }
    }
}


