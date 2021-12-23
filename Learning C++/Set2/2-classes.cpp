#include<iostream>
#include<string>

using namespace std;

enum cow_purpose { dairy, meat, hide, pet };

class cow{
public:
    cow(string iname, int iage, unsigned char ipurpose){
        name = iname;
        age = iage;
        purpose = ipurpose;
    }
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
    unsigned char get_purpose(){
        return purpose;
    }
    void set_age(int new_age){
        age = new_age;
    }
private:
    string name;
    int age;
    unsigned char purpose;
};

int main(){
    cow my_cow("Hildy",7,pet);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    my_cow.set_age(4);
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    return 0;
}


