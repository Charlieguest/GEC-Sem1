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

    outputDetails(num1, num2, Pnum);

    Pnum = &num2;

    cout << endl;
    cout << "Pnum changed" << endl;
    cout << endl;

    outputDetails(num1, num2, Pnum);

    delete Pnum;
    Pnum = NULL;
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
    cout << "value of Num1 and it's address" << endl;
    cout << integer1 << endl;
    cout << &integer1 << endl;
    cout << "value of Num2 and it's address" << endl;
    cout << integer2 << endl;
    cout << &integer2 << endl;
    cout << "Address of pointer and it's value " << endl;
    cout << *pointer << endl;
    cout << pointer << endl;
}