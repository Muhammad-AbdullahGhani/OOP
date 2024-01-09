#pragma 
#include<cstring>
class Car {
private:
	string make;
	string model;
	string reg;
	int year;
public:
	Car() {
		make = "";
		model = "";
		reg = "";
		year = 0;
	}
	Car(string m, string c, string r, int y) {
		make = m;
		model = c;
		reg = r;
		year = y;
	}
	void setyear(int y) {
		year = y;
	}
	void setmake(string m) {
		make= m;
	}
	void setmodel(string c) {
		model = c;
	}
	void setreg(string r) {
		reg = r;
	}
	int getyear() {
		return year;
	}
	string getmake() {
		return make;
	}
	string getmodel() {
		return model;
	}
	string getreg() {
		return reg;
	}

};
class garage {
private:
	string name;
	int index;
	int capacity;
	Car arr[10];
public:
	garage() {
		name = "";
		index = 0;
		capacity = 10;
		
	}
	garage(string n, int i, int c) {
		name = n;
		index = i;
		capacity = c;
	}
	bool isEmpty(){
		
			if (index == 0) {
				return true;
			}
		
		return false;
		}
	bool isFull() {
		if (index == capacity) {
			return true;
		}
		return false;
	}
	bool Push(Car c) {

		if (isEmpty()) {
			arr[index++] = c;
			return true;
		}
		return false;
	}
	bool Find(string reg) {
		for (int i = 0; i < 10; i++) {
			if (arr[i].getreg() == reg) {
				return true;

			}
			return false;
		}
	}
	bool remove(string reg) {
		for (int i = 0; i < 9; i++) {

			if (arr[i].getreg() == reg) {
				index--;
				for (int j = i; i < 10; i++) {
					
					arr[i] = arr[i + 1];
					
				}

			
			}
		
			return false;
		}
		
	}
	void Display() {
		for (int i = 0; i < 10; i++) {
			cout << arr[i].getmake()<<endl;
			cout << arr[i].getmodel()<<endl;
			cout << arr[i].getreg() << endl;
			cout << "-------------";
		}
	}
};