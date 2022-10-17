#include <iostream>
using namespace std;

int main() {
	int haribos = 40;
	int students = 14;
	int eachStudent = haribos / students;
	int remainder = haribos % students;

	cout << "Each student will recieve: " << eachStudent << " Haribo Packets" << endl;
	cout << "I will recieve: " << remainder << " Haribo Packets" << endl;
}
