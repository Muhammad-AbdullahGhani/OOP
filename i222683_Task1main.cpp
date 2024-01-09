#include<iostream>
#include"i222683_Task1.h"
using namespace std;
int main() {
	Course a1("Maths", "Theory", 6, 'B', 5);
	Course a2("English", "Theory", 4, 'C', 5);
	Course a3("Maths", "Theory", 3, 'A', 9);
	
	Course* courses = new Course[3];
	courses[0] = a1;
	courses[1] = a2;
	courses[2] = a3;
	Semester obj("course", 1, courses);
	//cout << obj.getcourse();
	cout << courses[0].getcoursecode() << endl;
	Semester semester;
	semester.setcount(5);
	semester.setsemestercode("Spring 2023");

	return 0;
}