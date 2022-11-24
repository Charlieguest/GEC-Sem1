#include <iostream>
using namespace std;
void swap(int* pNum1, int* pNum2);

int main()
{
	int num1 = 5, num2 = 10;

	// Outpur the current contents of the variables
	cout << "MAIN: Before swap." << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	// Call the swap function and pass through the variables using their addresses
	swap(&num1, &num2);

	// Output the current contents of the variables.
	cout << "\nMAIN: After swap." << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;


	cin.get();

	return 0;
}

void swap(int* pNum1, int* pNum2)
{
	// We need a temporary varibale variable to hold a value whilst we swap
	int temp;

	// Output hte current contents of the varibles
	cout << "\nSWAP: Before swap." << endl;
	cout << " * pNum = " << *pNum1 << endl;
	cout << " * pNum = " << *pNum2 << endl;

	temp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = temp;

	// Output the current contents of the variables.
	cout << "\n SWAP: After swap." << endl;
	cout << " * pNum1 = " << *pNum1 << endl;
	cout << " * pNum2 = " << *pNum2 << endl;
}
