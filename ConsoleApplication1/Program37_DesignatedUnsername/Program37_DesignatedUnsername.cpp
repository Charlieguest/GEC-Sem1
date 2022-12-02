#include <iostream>
#include <string>
using namespace std;
void UsernameGiver(string& name);

int main()
{
    string username;
    string& rUsername = username;

    cout << "Give me a username please:" << endl;
    cin >> rUsername;
    cout << "This name has been taken" << endl;
    
    UsernameGiver(rUsername);

    cout << username << endl;

}

void UsernameGiver(string& name)
{
    srand(time(NULL));
    int num = rand();

    name = name + to_string(num);
}