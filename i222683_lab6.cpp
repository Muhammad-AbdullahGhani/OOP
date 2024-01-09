#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	int n = 2;
	Student* studentarr = new Student[n];

	InputStudents(studentarr, n);
	SortStudentsByGPA(studentarr, n);
	phonenumber num[2];
	PhoneNumberArrayInitialize(num,n);


	return 0;
}