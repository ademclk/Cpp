#include <iostream>

using namespace std;

int main() {

	char list[] = "HelloWorld\n";
	cout << list << "C++ is fast\n";

	int age;
	cout << "Enter age:\n";
	cin >> age;
	cout << "Age is: \n" << age;

	cerr << "\nAn error did not occured :)";

	clog << "\nStill no error occured :)";

	return 0;
}

