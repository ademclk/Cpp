#include <iostream>
#include "cow.h"
using namespace std;
int main(){
    cow my_cow("Hildy", 7, pet);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    my_cow.set_age(4);
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    return 0;
}
