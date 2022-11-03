#include <iostream>
using namespace std;
bool isEven(int n);
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);


int main()
{
    int n;
    bool evenOdd;
    int oddCount{};
    int evenCount{};
    int oddTotal{};
    int evenTotal{};

    for (int i = 0; i < 10; i++) {
        
        cout << "Output an integer" << endl;

        cin >> n;
        int value = n;

        evenOdd = isEven(n);
        
        if (evenOdd) {

            evenCount++;
            evenTotal += value;
        }
        else {
            oddCount++;
            oddTotal += value;
        }
    }
    outputResults(oddCount, oddTotal, evenCount, evenTotal);
}

bool isEven(int n) {
    
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) {
    cout << "There were " << numOfOdd << " Odd numbers" << endl;
    cout << endl;
    cout << oddTotal << " Was the total of all these" << endl;
    cout << endl;
    cout << "There were " << numOfEven << " Even numbers" << endl;
    cout << endl;
    cout << evenTotal << " Was the total of all these" << endl;
}