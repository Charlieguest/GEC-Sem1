#include <iostream>
#include <string>
using namespace std;
void comma2blank(char* textToChange);

int main()
{
	char text[50];

	cout << "enter some text, in place of spaces, use a comma " << endl;

	cin.getline(text, sizeof(text));

	comma2blank(text);
}

void comma2blank(char* textToChange)
{
	cout << *textToChange << endl;

	/* for (int i = 0; i < sizeof(text) + 1; i++)
	{
		if (text[i] == ',')
		{
			
		}
	}
	*/
}

