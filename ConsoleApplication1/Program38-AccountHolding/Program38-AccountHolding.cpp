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
    char moreDetails = 'y';
    ofstream outFile;
    ifstream inFile;

    while (userChoice != 4)
    {
        moreDetails = 'y';
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
                outFile.open("bank.txt", std::ios_base::app);
                while (outFile.is_open())
                {
                    if (moreDetails == 'y')
                    {
                        cout << "Enter Your name for the account" << endl;
                        cin >> account1.name;
                        cout << "Enter your account number" << endl;
                        cin >> account1.accountNumber;
                        cout << "Enter Your balence" << endl;
                        cin >> account1.balence;
                        cout << "Thank you!" << endl;
                        cout << endl;
                        cout << "Do you wish to answer any more details" << endl;
                        cout << "Please answer y/n" << endl;
                        cin >> moreDetails;

                    }
                    else
                    {
                        outFile.close();
                    }
                }
            break;
            default:
                cout << "Cheese paste" << endl;
            break;
        }
    }
}


