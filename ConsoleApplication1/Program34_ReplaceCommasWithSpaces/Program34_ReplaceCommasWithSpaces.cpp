#include <iostream>
#include <string>
using namespace std;


void comma2blank(char* textToChange);

int main()
{
	char text[50];

	cout << "enter some text, in place of spaces, use a comma " << endl;

	cin.getline(text, sizeof(text));

	for (int i = 0; i < sizeof(text) + 1; i++)
	{
		if (text[i] == ',')
		{
			comma2blank(&text[i]);
		}
	}


	for (int i = 0; i < 50; i++)
	{
		cout << text[i];
	}
}

void comma2blank(char* textToChange)
{
	*textToChange = ' ';
}

