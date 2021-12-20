#include <iostream>
using namespace std;

int main() {

	cout << "Size of char : " << sizeof(char)
		<< " byte" << endl;	
	cout << "Size of int : " << sizeof(int)
		<< " byte" << endl;
	cout << "Size of short int : " << sizeof(short int)
		<< " byte" << endl;
	cout << "Size of long int : " << sizeof(long int)
		<< " byte" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int)
		<< " byte" << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int)
		<< " byte" << endl;
	cout << "Size of float : " << sizeof(float)
		<< " byte" << endl;
	cout << "Size of double : " << sizeof(double)
		<< " byte" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t)
		<< " byte" << endl;

	return 0;

}