#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;
	int weather;
	float temperature;

	cout << "Please tell me if it is raining with '1' or snowing with '2'." << endl;

	cin >> weather;

	cout << "What is the temperature in celsius?" << endl;

	cin >> temperature;

	if (weather == rain)
	{
		if (temperature > 15.0f) {
			cout << "Wear a light coat" << endl;
		}
		else {
			cout << "Wear a thick coat" << endl;
		}
	}
	else if (weather == snow) 
	{
		if (temperature > 5.0f) {
			cout << "Wear something warm" << endl;
		}
		else if (temperature > 0) {
			cout << "You need to wrap really warm" << endl;
		}
		else {
			cout << "Stay home!" << endl;
		}
	}
	else
	{
		cout << "Have a nice day. It's niether raining or snowing " << endl;
	}
}