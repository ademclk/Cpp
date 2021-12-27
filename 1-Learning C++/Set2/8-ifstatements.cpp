#include<iostream>

using namespace std;

int a = 1023;
bool flag = false;
char letter = 'a';

int main(){
    if (a > 1000)
        cout << "Warning: a is out of bound(1000)";
    if (a % 2)
        cout << "a is odd" << endl;
    else
        cout << "a is even." << endl;
    
    cout << "The letter " << letter << " is ";
    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' && 
        letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U' )
        cout << "not ";
    cout << "a vowel." << endl;

    if (flag)
        cout << "Flag is true." << endl;
    
    return 0;
}
