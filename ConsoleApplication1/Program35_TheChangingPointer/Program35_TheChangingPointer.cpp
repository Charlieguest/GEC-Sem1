#include <iostream>
using namespace std;
void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
    int num1;
    int num2;
    int* Pnum = &num1;

    inputDetails(&num1, &num2);

    cout << num1 << endl; 
    cout << num2 << endl;

    outputDetails(num1, num2, Pnum);

}

void inputDetails(int* n1, int* n2)
{
    cout << "input an integer" << endl;
    cin >> *n1;
    cout << "Input another integer" << endl;
    cin >> *n2;

}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << integer1 << endl;
}