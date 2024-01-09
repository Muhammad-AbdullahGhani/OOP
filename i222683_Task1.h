#pragma once
using namespace std;
#include<string>
class Course{
	string courseCode;
	string courseTitle;
	int creditHours;
	char section;
	int repeatcount;
public:
	Course();
	Course(Course& c);
	Course(string cc, string ct, int ch, char s, int rc);
	void setcoursecode(string scode);
	string getcoursecode();
	void setcoursetitle(string stitle);
	string getcoursetitle();


	void setcrdhours(int credits);
	int getcrdhours();
	void setsec(char s);
	char getsection();
	void setcount(int c);
	int getcount();
};

class Semester {
	string SemesterCode;
	int CourseCount;
	Course* course;
public:

	Semester();
	Semester(Semester& s);
	void setsemestercode(string sc);
	string getsemestercode();
	void setcount(int count);
	int getcount();
	void setcourse();
	Course *getcourse();
	Semester(string sc, int c, Course* courseArr);
	


};
class point {
public:
	int x, y;
public:
	point();


};
class line {
public:
	point p1;
	point p2;
public:
	line(point& p1, point& p2); 
	line(int x1, int y1, int x2, int y2);
	line(line& l);
	 point getp1();
	 point getp2();
	 int getslope();
};