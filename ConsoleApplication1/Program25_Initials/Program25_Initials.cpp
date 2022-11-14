#include <iostream>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

/*
int main()
{
    char testString[22] =
    {
        'T','h','i','s',' ',
        'i','s',' ',
        't','e','s','t',' ',
        's','t','r','i','n','g',' ', '1',
        '\0'
    };

    char testString2[] = "This is a test string 2";

    cout << "teststring1: " << testString << endl;
    cout << "teststring2: " << testString2 << endl;

    return 0;
}
*/
/*
int main() 
{
    char stringToCopy[] = "TestString";
    char stringToChange[20] = "This is a ";

    cout << "Before concatenation" << endl;
    cout << "stringToCopy contains " << stringToCopy << endl;
    cout << "stringToChange contains " << stringToChange << endl;

    strcat_s( stringToChange, stringToCopy );

    cout << "After concatenation" << endl;
    cout << "stringToCopy contains " << stringToCopy << endl;
    cout << "stringToChange contains " << stringToChange << endl;
}
*/
/*
int main()
{
    char string1[] = "TestString1";
    char string2[] = "TestString2";

    if ( strcmp(string1, string2) == 0 )
    {
        cout << "Matching string" << endl;
    }
}
*/

int main()
{
    char name[30];
    string firstInitial;
    string secondInitial;
    string lastName;

    cout << "to enter in a single line their first name initial, followed by a space, their middle name initial followed by a space and the entirety of their surname." << endl;
    cin.getline(name, 30);

    cout << name << endl;


}
