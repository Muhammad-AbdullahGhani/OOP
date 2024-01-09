#pragma once
using namespace std;
struct Student {

	int id;
	string name;
	string dep;
	int batch;
	float Gpa;
	float* gpa = &Gpa;
};
int getID(const Student& student) {
	return student.id;
}
void setID(Student& student, int id) {
	student.id = id;
}
string getName(const Student& student) {
	return student.name;
}
void setName(Student& student, const string& name) {
	student.name = "Abdullah";

}
string getDep(const Student& student) {
	return student.dep;
}
void setDep(Student& student, const string& dep) {
	student.dep = dep;
}
int getBatch(const Student& student) {
	return student.batch;
}
void setBatch(Student& student, int batch) {
	student.batch = batch;
}

float* getGPA(const Student& student) {
	return student.gpa;
}
void setGPA(Student& student, float gpa) {
	student.Gpa = gpa;
}
void InputStudents(Student* students, int n) {
	
	for (int i = 0; i < n; i++) {
		int id=0;
		float Gpa=0;
		int batch=0;
		string name;
		string dep;
		cout << "Enter student id" << endl;
		cin >> students->id;
		setID(students[i], id);
		cout << "Enter batch" << endl;
		cin >> students->batch;
		setBatch(students[i],batch);
		cout << "Enter name" << endl;
		cin >> students->name;
		setName(students[i], name);
		cout << "Enter department" << endl;
		cin >> students->dep;
		setDep(students[i], dep);
		cout << "Enter GPA" << endl;
		cin >> students->Gpa;
		setGPA(students[i], Gpa);
	}

}
void SortStudentsByGPA(Student* arr, int n) {
	int temp;
	for (int i = 0; i < 5; i++) {
		if (arr[i].Gpa < arr[i + 1].Gpa) {
			temp = arr[i].Gpa;
			arr[i].Gpa = arr[i + 1].Gpa;
			arr[i + 1].Gpa = temp;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "GPA of Student"<<i<<" " << arr[i].Gpa;
	}
}
struct phonenumber {
    int* areacode;
    int* exchange;
    int* number;
};

void PhoneNumberArrayInitialize(phonenumber* arr, int n) {
    int code = 121;
    int exchange = 345;
    int number = 1234;

    for (int i = 0; i < n; i++) {
        arr[i].areacode = &code;
        code++;
        arr[i].exchange = &exchange;
        exchange++;
        arr[i].number = &number;
        number++;
    }

    // Printing the values for each element of the array
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cout << *(arr[i].areacode) << " ";
        cout << *(arr[i].exchange) << "-";
        cout << *(arr[i].number) << endl;
    }
}
void PrintPhoneNumber(const phonenumber&p) {
	cout << p.areacode << " " << p.exchange << "-" << p.number;
}

struct customtime {
	int hour;
	int min;
	int seconds;

};
long timeToSeconds(customtime t1) {
	return t1.hour * 3600 + t1.min * 60 + t1.seconds;
}
customtime SecondsToTime(long t) {
	int seconds=0;
	customtime t1;
	seconds=timeToSeconds(t1);
	int hour = seconds % 3600;
	int min = seconds % 60;
	cout << "Hours" << hour << endl;
	cout << "Minutes" << min<<endl;

}
void addtime(customtime t1,customtime t2) {
	int add;
	add = t1.hour + t1.min + timeToSeconds(t2);
}
customtime* MakeArrayOfTimes(int s) {
	int s = 4;
	int* arr = new int[s];

}
