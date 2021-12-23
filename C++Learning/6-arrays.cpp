#include<iostream>

using namespace std;

//#define AGE_LENGTH 4
const int AGE_LENGTH = 4;

int age[AGE_LENGTH];
float temperature[] = {32.5, 30.1, 38.3};
int main(){
    age[0] = 21;
    age[1] = 17;
    age[2] = 51;
    age[3] = 32;
    
    cout << "Age array has " << AGE_LENGTH << " elements" << endl;
    cout << "Index 0 age = " << age[0] << endl;
    cout << "Index 1 age = " << age[1] << endl;
    cout << "Index 2 age = " << age[2] << endl;
    cout << "Index 3 age = " << age[3] << endl;

    cout << endl;

    cout << "Index 0 temperature = " << temperature[0] << endl;
    cout << "Index 1 temperature = " << temperature[1] << endl;
    cout << "Index 2 temperature = " << temperature[2] << endl;
    return 0;
}