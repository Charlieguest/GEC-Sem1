#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number between 1 and 10" << endl;

    cin >> n;

    for (int i = 1; i <= n ; i++)
    {
        cout << "*" << endl;
    }
}
