#include <iostream>
using namespace std;
// This code will NOT work. Designed for to examine operators.
int main(){

    int val = 5; // assignment operators
    ++val;
    cout << val << "\n";

    int a = 5, b= 3;
    cout << a+b;

    cout << a<b;

    cout << (4 !=5) && (4 < 5);

    cout << (a ^ b);

    cout << (~a);
    
    a+=b;
    cout << a;
    a-=b;
    cout << a;
    a*=b;
    cout << a;
    a/=b;
    cout << a;

    return 0;
}