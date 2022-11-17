#include <iostream>
// Error 1 No use of namespace
using namespace std;

// Error 2 No closing bracket on main()
// Error 3 main spelt "mian"
int main()
{
    int num1 = 5;

    // Error 4 colon instead of semi-colon
    for (int i = 0; i < num1; i++)
    {
        cout << "i = " << i << endl;
    }

    // Error 5 num2 never defined before use in for loop
    int num2 = 15;

    for (int i = 0; i < num2; i++) {
        cout << "i = " << i << endl;

        /*Pause the output*/
        cin.get();
    }

    // Error 6 return statement is inside of for loop
    return 0;
}