#include<iostream>

using namespace std;

auto a = 8;
auto b = 19394950183;
auto c = 3.13f;
auto d = 3.13;
auto e = true;
auto f = 'd';

int main(){
    cout << typeid(a).name() <<endl;
    cout << typeid(b).name() <<endl;
    cout << typeid(c).name() <<endl;
    cout << typeid(d).name() <<endl;
    cout << typeid(e).name() <<endl;
    cout << typeid(f).name() <<endl;
    return 0;
}