#pragma once
using namespace std;
void print_num(int n) {

	if (n <= -1) {
		return;
	}
	cout << n;
	print_num(n - 1);
	cout << n;


}
void print_pattern(int n,char ch) {
        int s=0;
        if (n <= -1) {
            return;
      }
            while (s < n) {
                cout << ch;
                s++;
            }
            cout << endl;
            print_pattern(n - 1,ch);
        }
void print_pattern2(int n,char ch) {
    int s = 0;
    if (n <= -1) {
        return;
    }
        print_pattern2(n - 1,ch);
        while (s < n) {
            cout << ch;
            s++;
        }cout << endl;
    }
int getchractercount(const char* ptr, char c,int k=0) {
    if (*(ptr +k) == '\0') {
        return 0;
    }
    if (*(ptr + k) == c) {
        return 1 + getchractercount(ptr, c,k+1);
        k++;
    }
    else { 
        return 0 + getchractercount(ptr, c,k+1);
        k++;
    }
}

struct students {
    int students_id;
    string students_name;
    string depart;
    float GPA;
    int age;
    int batch;

};
students s[2];

void input(students s[]) {
   
    students std;
    for (int i = 0; i < 2; i++) {
        cout << "Enter name" << endl;
        cin >> s[i].students_name;
        cout << "Enter age" << endl;
        cin >> s[i].age;
        cout << "Enter id" << endl;
        cin >> s[i].students_id;
        cout << "Enter bacth" << endl;
        cin >> s[i].batch;
        cout << "Enter GPA" << endl;
        cin >> s[i].GPA;
        cout << "Enter depart" << endl;
        cin >> s[i].depart;
    }
}

void sortStudent(students s[], int size) {

    size = 5;
    for(int i=0;i<5;i++)
        if (s[i].GPA < s[i + 1].GPA) {
            s[i].GPA = s[i + 1].GPA;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Enter name" << endl;
        cout << s[i].students_name;
        cout << "Enter age" << endl;
        cout << s[i].age;
        cout << "Enter id" << endl;
        cout << s[i].students_id;
        cout << "Enter bacth" << endl;
        cout << s[i].batch;
        cout << "Enter GPA" << endl;
        cout << s[i].GPA;
        cout << "Enter depart" << endl;
        cout << s[i].depart;
    }

}
void printInfo(students s[], int size) {
    double highest = 0;
    double lowest = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i].GPA > s[i + 1].GPA) {
            highest = s[i].GPA;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (s[i].GPA < s[i + 1].GPA) {
            lowest = s[i].GPA;
        }
    }
    double sum = 0;
    double avg = 0;
    for (int i = 0; i < 5; i++) {
        sum = s[i].GPA + s[i + 1].GPA ;
        
    }
    avg = sum / 5.0;
    cout << "HIghest GPA" << highest << endl;

    cout << "lowest GPA" << lowest << endl;
    cout << "Average GPA" << avg << endl;
}

struct student {

    int student_id;
    string student_name;
    float GPA;
    int age;
};


