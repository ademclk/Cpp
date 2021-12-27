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

int a = 30;
int *ptr; // Dynamic memory allocation
cow *my_cow;

int main(){
    ptr = &a;
    
    cout << "Content of a is " << a << endl;
    cout << "ptr is point to address " << ptr << endl;
    cout << "Address of a is " << &a << endl;
    cout << "Where ptr is pointing, we have "<< *ptr << endl;
    cout << "Address of ptr is " << &ptr << endl;
    cout << endl;

    my_cow = new cow("Gertie",3,hide);
    cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;
    my_cow->set_age(4);
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;
    
    delete my_cow; // It'll free memory.
    return 0;
}
