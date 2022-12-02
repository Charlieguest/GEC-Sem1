#include <iostream>
using namespace std;
void plus25(int& rnum);
void minus25(int& rnum);

int main() {
    int num;
    int& rnum = num;

    cout << "Input a number:" << endl;
    cin >> rnum;

    cout << "Num = " << num << endl;

    plus25(rnum);

    cout << "Num = " << num << endl;

    cout << "Input a number:" << endl;
    cin >> rnum;

    cout << "Num = " << num << endl;

    minus25(rnum);

    cout << "Num = " << num << endl;
}


void plus25(int& rnum)
{
    rnum += 25;
}

void minus25(int& rnum)
{
    rnum -= 25;
}



//void changeValue(int& numToChange);

/* int main()
{
    int num1 = 5;
    cout << "num1 = " << num1 << endl;
    changeValue(num1);
    cout << "num1 = " << num1 << endl;
}

void changeValue(int& numToChange)
{
    numToChange = 10;
}
*/