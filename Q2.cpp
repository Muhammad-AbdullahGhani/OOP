#include<string>
#include<iostream>
using namespace std;

class Professor {
	string name;
	int employeeid;
	string designation;
public:
	void setname(string n) {
		name = n;
	}
	string getname() {
		return name;
	}
	void setdesignation(string d) {
		designation = d;
	}
	string getdesignation() {
		return designation;
	}
	void setID(int id) {
		employeeid = id;
	}
	int getID() {
		return employeeid;
	}
};
class Department {
	string name;
	int depID;
	Professor arr[10];
	int noofprofessor;
public:
	void setname(string n) {
		name = n;
	}
	string getname() {
		return name;
	}
	void setID(int id) {
		depID = id;
	}
	int getID() {
		return depID;
	}
	void setprofessor(int p) {
		noofprofessor = p;
	}
	int getprofessor() {
		return noofprofessor;
	}
	bool addProfessor(Professor P) {
		if (noofprofessor < 10) {
			arr[noofprofessor] = P;
			noofprofessor++;
			return true;
		}
		return false;
	}
	bool update(int id, string newdesignation) {
		for (int i = 0; i < 10; i++) {
			if (arr[i].getID() == id) {
				arr[i].setdesignation(newdesignation);
				return true;
			}

		}
		return false;
	}
	bool deleteDepartment(string name) {
		for (int i = 0; i < 10; i++) {

			if (arr[i].getname() == name) {
				noofprofessor--;
				for (int j = i; i < 10; i++) {
					arr[j] = arr[j + 1];

				}


			}

			return false;
		}
	}
};
class University {
	string name;
	Department dept[10];
	int noofdept;
public:
	void setname(string n) {
		name = n;
	}
	string getname() {
		return name;
	}
	void setdept(int d) {
		noofdept = d;
	}
	int getdept() {
		return noofdept;
	}
	bool addDepartment(Department D) {
		if (noofdept < 10) {
			dept[noofdept] = D;
			noofdept++;
			return true;
		}
		return false;
	}
	bool updateDepartment(int id, string name) {
		for (int i = 0; i < 10; i++) {
			if (dept[i].getID() == id) {
				dept[i].setname(name);
				return true;
			}

		}
		return false;
	}
	bool deleteDepartment(string name) {
		for (int i = 0; i < 10; i++) {

			if (dept[i].getname() == name) {
				noofdept--;
				for (int j = i; i < 10; i++) {

					dept[j] = dept[j + 1];

				}


			}

			return false;
		}
	}
	void display() {
		cout << "University info" << endl;
		cout << "University Name: " << name << endl;

		cout << "Department info" << endl;
		for (int i = 0; i < noofdept; i++) {
			cout << "Department Name: " << dept[i].getname() << endl;
			cout << "Department ID: " << dept[i].getID() << endl;
			cout << "Number of Professors: " << dept[i].getprofessor() << endl;

	
			cout << "-------------" << endl;
		}
	}


};



int main() {
    University u;
	University ob;
	u.setname("CS");
	u.setdept(4);
	Department d1, d2;
	d1.setID(111);
	d1.setprofessor(0);
	d1.setname("Computer Science");
	d2.setID(222);
	d2.setname("Software Engineering");
	d2.setprofessor(1);
	u.addDepartment(d1);
	u.addDepartment(d2);
	u.display();

    return 0;
}