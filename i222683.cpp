#include<iostream>
#include"i222683.h"
using namespace std;
int main() {
	int currentyear=2023;
	
	Car car("Honda", "Civic", 2016);
	cout <<"Age of car is" << car.getage(currentyear) << endl;
	car.setmileage();
	cout << endl;
	cout << car.serviceNeeded();
	Rationale r1, r2;
	r1.setNumerator(1);
	r1.setDenominator(2);
	
	r2.setNumerator(2);
	r2.setDenominator(3);
	cout << " Addition is " << r1.addRationalNumber(r1, r2);
	cout << " division is " << r1.divRationalNumber(r1, r2);
	cout << " Multiply is " << r1.multiRationalNumber(r1, r2);
	cout << "\n	Question 4" << endl;
	Sphere obj;
	obj.setRadius(5);
	cout << "Area is" << obj.getArea()<<endl;
	cout << "Circumference is" << obj.getCircumference() << endl;
	cout << "Diameter is" << obj.getDiameter()<<endl;
	cout << "Volume is" << obj.GetVolume();

	return 0;
}