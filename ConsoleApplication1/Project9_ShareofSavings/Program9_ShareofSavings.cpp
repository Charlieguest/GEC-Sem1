#include <iostream>
using namespace std;

int main() {
	int mySavings = 2000;
	// This has to be a float instead of an int as ints always end a whole number when divided.
	float yourPercentage = 50.0f;
	int yourShare = (mySavings * (yourPercentage / 100));

	cout << "your share: " << yourShare << endl;
	return 0;
}
