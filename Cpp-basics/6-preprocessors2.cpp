#include <bits/stdc++.h>
using namespace std;

void func1();
void func2();
// GCC does not supports pragma
//#pragma startup func1
//#pragma exit func2

void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();
 
void func1(){
    cout << "Inside func1\n";
}

void func2(){
    cout << "Inside func2\n";
}

int main(int argc, char const *argv[])
{
    void func1();
    void func2();
    cout << "Inside main\n";

    return 0;
}

