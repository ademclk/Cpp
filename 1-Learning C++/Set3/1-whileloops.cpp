#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = { 12,43,32,11,76 };
int main(){
    auto ptr = numbers.begin();

	while (ptr!=numbers.end()){
		cout << *ptr << " ";
		ptr = next(ptr, 1);
	}
	cout << endl;

	int i = 0;
	do{
		cout << numbers[i] << " ";
		i++;
	} while (i < numbers.size());
	cout << endl;

    return 0;
}
