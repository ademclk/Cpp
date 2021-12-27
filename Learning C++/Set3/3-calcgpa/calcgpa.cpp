#include <iostream>
#include <vector>
#include "records.h"

using namespace std;

vector<Student> students = { Student(1,"George P. Burdell"),
							Student(2,"Nancy Rhodes") };

vector<Course> courses = { Course(1,"Algebra",5),
						  Course(2,"Physics",4),
						  Course(3,"English",3),
						  Course(4,"Economics",4) };

vector<Grade> grades = { Grade(1,1,'B'),	Grade(1,2,'A'),	Grade(1,3,'C'),
						Grade(2,1,'A'),	Grade(2,2,'A'), Grade(2,4,'B') };

float GPA = 0.0f;
int id;

int main() {
	cout << "Enter a student ID: ";
	cin >> id;

	float points = 0.0f, credits = 0.0f;

	for (Grade& grd : grades) {
		if (grd.get_student_id()==id){
			float num_grd;
			switch (grd.get_grade()) {
			case 'A': num_grd = 4.0f;
				break;
			case 'B': num_grd = 3.0f;
				break;
			case 'C': num_grd = 2.0f;
				break;
			case 'D': num_grd = 1.0f;
				break;
			default: num_grd = 0.0f;
				break;
			};
			int j = 0;
			while (j<courses.size() && courses[j].get_id() != grd.get_course_id()) {
				j++;
				credits += courses[j].get_credits();
				points += num_grd * courses[j].get_credits();
			}
		}
	}

	GPA = points / credits;

	string student_str;
	student_str = students[0].get_name(); // Change this to the selected student's name

	cout << "The GPA for " << student_str << " is " << GPA << endl;
	return (0);
}




