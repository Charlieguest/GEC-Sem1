#include <iostream>
using namespace std;
void SmallestNumber(int a, int b);
float MultipliedNumber(float c);


int main()
{
    int num1;
    int num2;
    float num3;
    float num4;

    for (int i = 0; i < 3; i++)
    {
        cout << "Input one number: " << endl;
        cin >> num1;
        cout << "Input another number: " << endl;
        cin >> num2;
    }

    SmallestNumber(num1, num2);

    for (int i = 0; i < 3; i++)
    {
        cout << "Input a number that will be multiplied by 10 and then divided by 3." << endl;
        cin >> num3;
    }

    num4 = MultipliedNumber(num3);

    
}

void SmallestNumber(int a, int b) 
{
    if (a > b) 
    {
        cout << a << " Is the smallest number." << endl;
    }
    else if (a < b) 
    {
        cout << b << " Is the smallest number." << endl;
    }
    else 
    {
        cout << "Both numbers are the same" << endl;
    }
}

float MultipliedNumber(float c)
{
    c *= 10;
    return c;
}
