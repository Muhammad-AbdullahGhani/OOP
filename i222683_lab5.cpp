#include<iostream>
#include"i222683_lab5.h"
void print_num(int n);
void print_pattern(int n);
void print_pattern2(int n);
int getchractercount(const char* ptr, char c);
void Bookmove(int n, char src, char aux, char Des);
using namespace std;
int main() {
	const char* ptr="paper";
	char c = 'p';
	char ch = '*';
	cout << "Task 1" << endl;
	int n = 9;
	print_num(n);
	cout << "\nTask 2" << endl;
	cout << "Enter a number" << endl;
	cin >> n;
	print_pattern(n,ch);
	print_pattern2(n,ch);
	int k = 0;
	cout << "\nTask 3" << endl;
	cout<<"The character appears"<<getchractercount(ptr, c, k)<<"times";
	student studentinstance;
	studentinstance.student_id = 2345;
	studentinstance.student_name = "Abdullah";
	studentinstance.GPA = 3.1;
	studentinstance.age = 12;

	cout << "\nTask 5" << endl;
	cout << "Student id" << studentinstance.student_id << endl;
	cout << "Student name" << studentinstance.student_id<<endl;
	cout << "Student GPA" << studentinstance.GPA<<endl;
	cout << "Student age" << studentinstance.age<<endl;
	students s[5];
	int size = 5;
	cout << "\nTask 6" << endl;
	input(s);
	sortStudent(s, size);
	printInfo(s, size);
	return 0;
}