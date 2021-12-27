#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
string str;
int number;
char letter;

ofstream outFile;
float a = 4.333f, b = 5.302f;


int main(){
	inFile.open("people.txt");
	if (inFile.fail())
		cout << endl << "File not found!" << endl;
	else {
		while (!inFile.eof()){
			getline(inFile, str);
			cout << str << ", ";
			getline(inFile, str);
			number = stoi(str);
			cout << number << ", ";
			getline(inFile, str);
			letter = str[0];
			cout << letter << endl;
		}
		inFile.close();
	}

	outFile.open("calculations.txt");
	if (outFile.fail())
		cout << endl << "Couldn't open the file!" << endl;
	else {
		outFile << "a = " << a << endl;
		outFile << "b = " << b << endl;
		outFile << "a + b = " << a + b << endl;
		outFile << "a * b = " << a * b << endl;
		outFile.close();
		cout << "File written successfully!" << endl;
	}

	return 0;
}

