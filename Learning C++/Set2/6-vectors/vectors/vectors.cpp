/*
Dynamic-size containers.
The memory is managed for you.
Generic container class.
Part of the STL (Standart Template Library)

*/
#include<vector>
#include<iostream>
#include<string>
#include"cow.h"

using namespace std;

vector<int> primes;

int main() {

    cout << "The vector has " << primes.size() << " elements" << endl;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    cout << "The vector has " << primes.size() << " elements" << endl;
    cout << "The element at index 2 is " << primes[2] << endl;
    primes[2] = 13;
    cout << "The element at index 2 is " << primes[2] << endl;
    cout << endl;

    vector<cow> cattle;
    cattle.push_back(cow("Betty", 5, meat));
    cattle.push_back(cow("Libby", 3, hide));
    cattle.push_back(cow("Rubby", 5, pet));
    cattle.push_back(cow("Besty", 2, dairy));

    cout << "The first cow is " << cattle.begin()->get_name() << endl;
    cout << "At index 1 : " << cattle[1].get_name() << endl;
    cout << "Next to last: " << prev(cattle.end(), 2)->get_name() << endl;
    cout << "The last cow is " << (cattle.end() - 1)->get_name() << endl;

    return 0;
}


