#include <iostream>
#include <string>
using namespace std;

int main()
{
	string testString = "Do you know who loves C++, XX does";
	string inputString;
	int length;

	cout << "Enter your name: " << endl;

	getline(cin, inputString);

	length = inputString.length();

	testString.insert(28, inputString, 0, inputString.length());

	cout << testString << endl;

	cout << "Enter another longer name: " << endl;

	getline(cin, inputString);

	testString.replace(testString.find("X"), length + 2, inputString);

	cout << testString << endl;
}
