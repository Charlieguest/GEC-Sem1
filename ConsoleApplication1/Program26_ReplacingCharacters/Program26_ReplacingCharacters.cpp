#include <iostream>
#include <string>
using namespace std;

/*
---------------------
STRINGS ARRAYS
---------------------
*/

/*
int main()
{
    string testString;
    cout << "Please enter two words:" << endl;

    // cin >> testring;
    getline(cin, testString);

    cout << testString;
}
*/

/*
int main()
{
    string string1 = "Super";
    string string2 = "man";

    string1.append( string2 );

    cout << string1 << endl;
}
*/

/*
int main()
{
    string string1 = "This is a test string";
    string string2 = "Test string";

    if (string1.compare( string2 ) == 0)
    {
        cout << string1 + string2 + " match" << endl;
    }
}
*/

/*
int main()
{
    string string1 = "string one";
    string string2 = "string two";

    string1.swap(string2);

    cout << string1 << endl;
}
*/

/*
---------------------
GETTING A CERTAIN POSITIONS OF A STRING
---------------------
*/

/*
int main()
{
    string testString = "This is a test string";

    cout << testString.substr(10, 4);
}
*/

/*
---------------------
FINDING AND RETRIEVING
---------------------
*/

int main()
{
    string testString = "String manipulation is cool is it not";
    cout << "Find: 'is': " << testString.find("is") << endl;
}