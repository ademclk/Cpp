#include <iostream>
#include <string>
#include "records.h"

using namespace std;

Student student(12, "Mehmet Ak");
Course  course(553, "Introduction to Quantum Computing", 5);
Grade grade(12, 553, 'C');

int main(){
	cout << "Student: " << student.get_name() << endl;
	cout << "Course: " << course.get_name() << endl;
	cout << "Credits: " << course.get_credits() << endl;
	cout << "Grade: " << grade.get_grade() << endl;
	return 0;
}

