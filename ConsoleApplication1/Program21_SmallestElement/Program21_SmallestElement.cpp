//#include <iomanip>
//using std::setw;

//int main()
//{
 //   int myNumbers[10];
//
//    for (int i = 0; i < 10; i++)
//    {
//        myNumbers[i] = i + 1;
//    }

//    cout << "Array Element" << setw(17) << "Stored Value" << endl;

//    for (int i = 0; i < 10; i++)
//    {
//       cout << setw(7) << i << setw(17) << myNumbers[i] << endl;
//    }

//    return 0;
//}

//int main()
//{
	//double multiArray[5][3] =
	//{
		//{10,12,14},
		//{20,22,24},
		//{30,32,34}
	//};

	//cout << multiArray << endl;

	// An array with 5 rows and 2 columns.
	//int myNumbers[5][2] = {
		//{0, 0},
		//{1, 2},
		//{2, 4},
		//{3, 6},
		//{4, 8}
	//};

	// Output each array element's value
	//for (int row = 0; row < 5; row++)
	//{
		//for (int column = 0; column < 2; column++)
		//{
			//cout << "myNumbers[" << row << "][" << column << "]: ";
			//cout << myNumbers[row][column] << endl;
		//}
	//}

	//return 0;
//}


// #include <vector>
/*
int main()
{
	//create a vector of no specific 
	vector<int> myNumbers;

	//add some values using .push_back()
	myNumbers.push_back(18);
	myNumbers.push_back(22);
	myNumbers.push_back(12);

	//loop through the vector outputting the contacts
	for (int i = 0; i < myNumbers.size(); i++)
	{
			cout << myNumbers[i] << endl;
	}

	//access a point in the vector
	cout << "\nPosition 2 in the vector holds: " << myNumbers[1] << endl;

	//delete the third element
	myNumbers.pop_back();
	cout << "\nVector now contains" << endl;
	for (int i = 0; i < myNumbers.size(); i++)
	{
		cout << myNumbers[i] << endl;
	}
	//erase the vector
	myNumbers.clear();

	if (myNumbers.empty()) 
	{
		cout << "Vector is empty" << endl;
	}
}
 */

#include <iostream>
#include <array>
using namespace std;

int main()
{
	int myNumbers[10];
	int n, min, position;

	for (int i = 0; i < 10; i++)
	{
		cout << "Input an integer: " << endl;
		cin >> n;

		myNumbers[i] = n;
	}

	min = myNumbers[0];

	for (int i = 0; i < 10; i++)
	{
		if (myNumbers[i] < min)
		{
			position = i + 1;
			min = myNumbers[i];
		}
	}

	cout << "The smallest number is " << min << endl;
	cout << "It's position is: " << position << " out of 10" << endl;

}