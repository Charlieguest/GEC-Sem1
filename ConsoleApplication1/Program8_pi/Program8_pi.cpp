#include <iostream>
using namespace std;

int main() {
	const float pi = 3.14159f;
	float radius = 25.0f;
	float area = pi * (radius * radius);
	cout << "The area of a circle with the radius " << radius << " is " << area << endl;
}