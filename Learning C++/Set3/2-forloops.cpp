#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = { 12,43,32,11,76 };
float average;

int main() {
	average = 0.0f;
	for (int i = 0; i < numbers.size(); i++)
		average += numbers[i];
	average /= numbers.size();
	cout << "Average: " << average << endl;

	average = 0.0f;
	for (auto x : numbers)
		average += x;
	average /= numbers.size();
	cout << "Average: " << average << endl;

	return 0;
}
