#include <iostream>
using namespace std;
void addTwoNumbers(int num1, int num2, int* result);

int main()
{
    // Create a pointer that will hold the total
    int* pResult = new int;

    // Call the 'addTwoNumbers()' function passing through constant integers.
    addTwoNumbers(10, 5, pResult);

    // Output the result
    cout << "MAIN: The result is: " << *pResult << endl;

    //Free up the memory
    delete pResult;

    return 0;
}

void addTwoNumbers(int num1, int num2, int* result)
{
    // Store the result of the calculation in the pointer.
    // Remember: We need to dereference the pointer to access the value
    *result = num1 + num2;

    // Output the result.
    cout << "FUNCTION: The result is: " << *result << endl;

}