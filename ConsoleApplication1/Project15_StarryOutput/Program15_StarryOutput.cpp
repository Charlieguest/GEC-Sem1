#include <iostream>
using namespace std;

int main()
{

    int n;
    string stars;
    string endAnswer;

    do {
        cout << "Enter a number between 1 and 10" << endl;

        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            stars += " *";
            cout << stars << endl;
        }

        stars = "";

        cout << "Do you want another go?" << endl;

        cin >> endAnswer;

    } while (endAnswer == "Y");

    if (endAnswer == "N")
    {
        cout << "Goodbye";
    }
}
