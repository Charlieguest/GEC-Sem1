#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string testString = "Do you know who loves C++, XX does";
	string inputString;
	string inputStringLonger;
	int length;

	cout << "Enter your name: " << endl;

	getline(cin, inputString);

	length = inputString.length();

	testString.insert(28, inputString, 0, inputString.length());

	cout << testString << endl;

	testString.erase(remove(testString.begin(), testString.end(), 'X'), testString.end()); //remove X from string

	cout << testString << endl;

	cout << "Enter another longer name: " << endl;

	getline(cin, inputStringLonger);

	testString.replace(testString.find(inputString), length, inputStringLonger);

	cout << testString << endl;
}
