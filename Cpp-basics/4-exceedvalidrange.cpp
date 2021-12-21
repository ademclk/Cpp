#include <iostream>

using namespace std;

int main(){

    for (char a = 0; a < 225; a++) 
        cout << a;
    // char range is -128 to 127. So this loop will never reach 225.
    
    bool a = true;
 
    for (a = 1; a <= 5; a++)
        cout << a;
    
    short a;
 
    for (a = 32767; a < 32770; a++)
        cout << a << "\n";
 
    unsigned short a;
 
    for (a = 65532; a < 65536; a++)
        cout << a << "\n";
    
    return 0;
}