#include<iostream>

using namespace std;

int a, b= 5;

int main(){
    bool my_flag;
    a = 9;
    my_flag = false;
    cout << "a = " << a << endl;    
    cout << "b = " << b << endl;    
    cout << "flag = " << my_flag << endl; // 0 for false 1 for true 
    my_flag = true;
    cout << "flag = " << my_flag << endl;    
    cout << "a+b = " << a+b << endl;    
    cout << "b-a = " << b-a << endl;    
    unsigned int positive;
    positive = b-a;
    cout << "b-a unsigned = " << positive << endl;    

    return 0;
}
