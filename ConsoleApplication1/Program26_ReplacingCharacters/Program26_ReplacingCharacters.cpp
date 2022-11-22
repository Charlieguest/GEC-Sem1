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
FINDING AND REPLACING
---------------------
*/

/*
int main()
{
    string testString = "String manipulation is cool is it not";
    cout << "Find: 'is': " << testString.find("is") << endl;

    string testString2 = "String manipulation is cool! is it not!";
    cout << "rfind 'is': " << testString2.rfind("is") << endl;

    string testString3 = "String manipulation is cool! Is it not";
    string testString4 = "No it's not";

    cout << "testString3 contains: " << testString3 << endl;
    testString3.replace(28, 10, testString4);
    cout << "testString4 now contains: " << testString4 << endl;
}
*/

/*
---------------------
INSERTING CHARACTERS
---------------------
*/

/*
int main()
{
    string testString = "123456";
    string stringToInsert = "xx";

    testString.insert( 3, stringToInsert, 0, stringToInsert.length() );

    cout << testString << endl;
}
*/

int main() {

    string sentence;
    string x = "x";

    cout << "Enter a sentence: " << endl;
    
    getline(cin, sentence);

    cout << sentence << endl;

    for (int i = 0; i < size(sentence); i++)
    {
        if (sentence[i] == 'e')
        {
            sentence.replace(sentence.find("e"), 1, x);
        }
    }

    cout << sentence << endl;
}
