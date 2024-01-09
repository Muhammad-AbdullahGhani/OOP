#include"i222683_Task1.h"
Course::Course() {
	 courseCode="";
	 courseTitle="";
	 creditHours=0;
	 section='0/';
	 repeatcount=0;

}
Course::Course(Course& c) {

	c.courseCode = courseCode;
	c.courseTitle = courseTitle;
	c.creditHours = creditHours;
	c.section = section;
	c.repeatcount = repeatcount;

}
Course::Course(string cc, string ct, int ch, char s, int rc) {
	courseCode=cc;
	courseTitle = ct;
	creditHours = ch;
	section = s;
	repeatcount = rc;
}

void Course::setcoursecode(string scode) {

	courseCode = scode;

}
string Course::getcoursecode() {
	return courseCode;
}

void Course::setcoursetitle(string stitle) {

	courseCode = stitle;

}
string Course::getcoursetitle() {
	return courseTitle;
}

void Course::setcrdhours(int credits) {
	creditHours = credits;
}
int Course::getcrdhours() {
	return creditHours;
}
void Course::setsec(char s) {
	section = s;
}
char Course::getsection() {
	return section;
}
void Course::setcount(int c) {
	repeatcount = c;

}
int Course::getcount() {
	return repeatcount;
}

//course
Semester::Semester() {
	//course = new Course[CourseCount];
	 SemesterCode="";
	 CourseCount=0;
	 course=NULL;
}
Semester::Semester(Semester& s) {
	course = new Course[CourseCount];
	s.SemesterCode = SemesterCode;
	s.CourseCount = CourseCount;
	s.course = course;
}


void Semester::setsemestercode(string sc) {
	SemesterCode = sc;
}
string Semester::getsemestercode() {
	return SemesterCode;
}

void Semester::setcourse() {
	course = new Course[CourseCount];
}
void Semester::setcount(int count) {
	CourseCount = count;

}
int Semester::getcount() {
	return CourseCount;
}

Course *Semester::getcourse() {
	return course;
}
Semester::Semester(string sc, int c, Course* courseArr) {
	SemesterCode = sc;
	CourseCount = c;
	course = courseArr;
}
int GetCreditHoursCount(Semester sem) {
	int s = 0;
	for (int i = 0; i < sem.getcount(); i++) {
		s += sem.getcourse()[i].getcrdhours();
	}
	return s;
}
bool FindCourseInSemesterRegistration(Semester sem, string sc) {
	string ans;
	Course courses;
 ans= sem.getsemestercode();
 for (int i = 0; i<sem.getcount();i++) {
	 if (sem.getcourse()[i].getcoursecode() == sc) {
		 return true;
	 }
	 else {
		 return false;
	 }
 }

}
point::point() {
	x = 0;
	y = 0;
}
line::line(point& p1, point& p2) {

	this->p1 = p1;
	this->p2 = p2;
}
line::line(int x1, int y1, int x2, int y2) {
	point point1;
	point point2;
	this->p1 = point1;
	this->p2 = point2;


}
line::line(line& l) {
	this->p1 = l.p1;
	this->p2 = l.p2;
}
point line::getp1() {
	return p1;
}
point line::getp2() {
	return p2;
}
int line::getslope() {
	int x = 1;
	if (p1.x == p2.x) {
		x = 2;
	}
	return 0;
}