// BrokenBMI.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
using namespace std;

float height(float total_height);
float weight(float total_weight);
void output_bmi(float weight, float height);

// Changed from integer to float as output BMI function takes float values
float total_inches, total_weight;


int main()
{
	// Moving BMI double to the calculate BMI function
	//double bmi;
	const string message = "Welcome to your BMI Calculator.";
	string name;

	cout << message << endl;
	cout << "Firstly what is your full name?" << endl;
	cin >> name;
	// Ampersand instead of chevron
	cout << "Hi " << name << " lets get started." << endl;

	//Total weight integer here 
	total_inches = weight(total_weight);

	//Height not called
	total_weight = height(total_inches);

	// Missing semi colon
	output_bmi(total_weight, total_inches);
}

float weight(float totat_weight)
{
	float stone, pounds;
	while (true)
	{
		cout << "\nPlease enter your weight in stone:" << endl;
		cin >> stone;
		if (stone < 3 || stone > 30)
		{
			cout << "\nYou must be between 3 and 30 stone" << endl;
		}
		else
		{
			cout << "Thank you!" << endl;
			break;
		}
	}

	while (true)
	{
		cout << "Please enter the pounds:" << endl;
		cin >> pounds;

		if (pounds < 0 || pounds > 13)
		{
			cout << "Pounds must be between 0 and 13" << endl;
		}
		else
		{
			cout << "Thank you!" << endl;
			break;
		}

	}

	// Stones should be multiplied by 12 instead of divided. 
	total_weight = stone * 12 + pounds;
	cout << "Your total weight in pounds is: " << total_weight << endl;
	return total_weight;
}

float height(float total_inches)
{
	float inches, feet{};

	while (true)
	{
		cout << "Please enter your height in feet:" << endl;
		cin >> feet;
		if (feet < 2 || feet > 7)
		{
			cout << "You must be between 2 and 7 feet" << endl;
		}
		else
		{
			cout << "Thank you!" << endl;
			break;
		}
	}

	while (true)
	{
		cout << "\nPlease enter the inches:" << endl;
		cin >> inches;

		if (inches < 0 || inches > 11)
		{
			cout << "\nInches must be between 0 and 11" << endl;
		}
		else
		{
			cout << "Thank you!" << endl;
			break;
		}
	}

	total_inches = feet * 12 + inches;
	cout << "Your total height in inches is: " << total_inches << endl;
	return total_inches;
}

// Removal of duplicate height function

/* int height(int total_height)
{
	return 0;
}
*/

void output_bmi(float weight, float height)
{

	cout << weight << endl;

	cout << height * height << endl;

	double bmi = weight * 703 / (height * height) ;

	cout << "Your BMI is: " << bmi << endl;
}