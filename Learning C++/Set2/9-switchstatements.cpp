// switchstatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float operand_1, operand_2, result;
char operation;

int main(){
	cout << "Enter operand 1: " << endl;
	cin >> operand_1;
	cout << "Enter operand 2: " << endl;
	cin >> operand_2;
	cout << "Choose Operation: + - * /" << endl;
	cin >> operation;
	
	switch (operation){
	case '+':
		result = operand_1 + operand_2;
		break;
	case '-':
		result = operand_1 - operand_2;
		break;
	case '*':
		result = operand_1 * operand_2;
		break;
	case '/':
		result = operand_1 / operand_2;
		break;
	default:
		result = operand_1 + operand_2;
		break;
	}

	cout << "The result: " << result << endl;
	return 0;
}
