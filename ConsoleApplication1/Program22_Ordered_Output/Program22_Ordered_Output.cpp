#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int input, max;
    int position = 1;
    int order[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Input a number" << endl;
        cin >> input;
        order[i] = input;
    }

    max = order[0];

    cout << max << endl;

    for (int i = 0; i < 5; i++)
    {
        if (order[i] > max)
        {
            position = i + 1;
            max = order[i];
        }
    }

    // Gett ing the size of the array
    size_t len = sizeof(order) / sizeof(order[0]);

    // Sorting from smallest to largest
    sort(order, order + len);

    for (int i = 0; i < len; i++)
    {
        cout << order[i] << " ";
    }
    cout << endl;
    
    // Sorting from largest to smallest
    sort(order, order + len, greater<int>());

    for (int i = 0; i < len; i++)
    {
        cout << order[i] << " ";
        
    }
    cout << endl;

    cout << "The largest value is: " << max << endl;
    cout << "It's position is: "<< position << " out of 5" << endl;
}
