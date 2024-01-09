#pragma once
using namespace std;
class Car {
public:
	int currentyear;
private:
	string make;
	string model;
	int year;
	int mileage;
	double liters;
public:
	
	Car() {
		string make="";
		string model="";
		int year=0;
		int mileage=0;
		double liters=0.0;
	}
	Car(string mk, string md, int y) {
		make = mk;
		model = md;
		year = y;
	}


	void setMake(string mk) {
		make = mk;
	}
	string getmake()
	{
		return make;
	}

	void setModel(string md) {
		model = md;
	}
	string getmodel()
	{
		return model;
	}
	void setyear(int y) {
		year = y;
	}

	int getyear() {
		return year;
	}
	void setmileage() {
		currentyear = 2023;
		if (year >0&&year<=currentyear){
			mileage = (currentyear - year) * 3000 + 12000;
		}
		cout << "Your mileage is" << mileage;
	}
	int getmileage() {
		return mileage;
	}
	void setfuel(double f) {
		liters = f;
	}
	double getfuel() {
		return liters;
	}
	int getage(int currentyear) {
		return currentyear - year;
	}
	bool serviceNeeded() {
		Car car;
		//int currentyear;
		if (mileage > 25000 && car.getage(currentyear) > 5) {
			cout << "Your car needs service" << endl;
			return true;
		}
		if (true) {
			cout << "Your car needs service" << endl;
		}

	}
};






class Rationale {
private:
	int numeinator;
	int denominator;
public:
	int num = 0;
	void setNumerator(int a) {
		numeinator = a;
	}
	int getNumerator() {
		Rationale rat;
		return numeinator/rat.gcd(numeinator,denominator);
		 }
	void setDenominator(int a) {
		denominator = a;
		 }
	int getDenominator() {
		Rationale rat;
		return denominator / rat.gcd(numeinator, denominator);
		 }
	
	
	int gcd(int x, int y) {
		while (y != 0) {
			int temp = y;
			y = x % y;
			x = temp;
			return x;
		}
	}
	int addRationalNumber(Rationale r1, Rationale r2);
	int multiRationalNumber(Rationale r1, Rationale r2);
	int divRationalNumber(Rationale r1, Rationale r2);
	
};
int Rationale::addRationalNumber(Rationale r1, Rationale r2) {

	return (r1.numeinator * r2.denominator + r2.numeinator * r1.denominator) * r1.denominator / r2.denominator;
}
int Rationale::multiRationalNumber(Rationale r1, Rationale r2) {

	return (r1.numeinator * r2.numeinator / r2.denominator * r1.denominator);
}
int Rationale::divRationalNumber(Rationale r1, Rationale r2) {

	return (r1.numeinator * r2.denominator / r1.denominator * r1.numeinator);
}


//class Date {
//private:
//	int date;
//	int month;
//	int year;
//public:
//	Date() {
//
//		date = 0;
//		month = 0;
//		year = 0;
//	};
//	Date(int y, int m, int d) {
//		year = y;
//		month = m;
//		date = d;
//	}
//	void setDay(int d) {
//		date = d;
//
//	}
//	int getDay() {
//		return date;
//	}
//	void setMonth(int m) {
//		month = m;
//	}
//	int getMonth() {
//		return month;
//	}
//	void setYear(int y) {
//		year = y;
//	}
//	int getyear() {
//		return year;
//	}
//	void addMD(int months, int days) {
//		date += days;
//		month =month+ months;
//		if (month > 12) {
//			month = month % 12;
//		}
//		if (date > 31) {
//			date = date % 31;
//		}
//		cout << "Months are" << month << "Date is" << date;
//
//
//	}
//	void addWeeks(int weeks) {
//		int Week;
//		Week += weeks;
//		if (weeks > 4) {
//			Week = weeks / 4;
//		}
//		cout << "Weeks are " << weeks;
//	}
//};
//int total = (year * 365) + (month * 30) + day;
//total += days;
//year = total % 365;
//month = (total / 365) % 30;
//day = (total / 365) - ((total / 365) / 30);

//Question 4

class Sphere{
private:
	const double pi=3.14159;
	double radius;
public:
	Sphere() {
		radius = 0;
	}
	Sphere(int radius) {
		radius = 5;
	}

	void setRadius(int r) {
		radius = r;
	}
	int getRadius() {
		return radius;
		}

	int getDiameter() {
		int Diameter;
		Diameter = 2 * radius;
		return Diameter;
	}
	int getArea() {
		int Area;
		Area = 4 * pi * radius * radius;
		return Area;
	}

	int getCircumference() {
		int Circumference;
		Circumference = 2 * pi * radius;
		return Circumference;
	}
	int GetVolume() {
		int Volume = 4 * pi *( radius * radius * radius);
		return Volume
			;
	}
};