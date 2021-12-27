#include "cow.h"

cow::cow(std::string iname, int iage, unsigned char ipurpose) {
    name = iname;
    age = iage;
    purpose = ipurpose;
}
std::string cow::get_name() {
    return name;
}
int cow::get_age() {
    return age;
}
unsigned char cow::get_purpose() {
    return purpose;
}
void cow::set_age(int new_age) {
    age = new_age;
}