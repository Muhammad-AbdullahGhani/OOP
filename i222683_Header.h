#pragma once
using namespace std;
class Counter {

private:
	int count;
	int serialno;
	int objcount;
    static int totalobjcount;
public:
	Counter() {
		count = 0;
		serialno = totalobjcount;
		objcount = incrementobjcount();
	}
	Counter(int c) {
		count = c;
        serialno = totalobjcount;
	}
	~Counter() {
		count--;
	}
    void setCount(int c) {
        count = c;
    }

    int getCount() const {
        return count;
    }

    int getSerialNo() const {
        return serialno;
    }

    static int getObjCount() {
        return totalobjcount;
    }

    static int incrementobjcount() {
        return ++totalobjcount;
    }
    Counter operator=(const Counter& obj) {
        count = obj.count;
        return obj.count;
    }

    Counter operator-(const Counter& obj) {
        count -= obj.count;
        return obj.count;
    }

    Counter operator+(const Counter& obj) {
        count += obj.count;
        return obj.count;
    }

};
int Counter::totalobjcount = 0;
class Cube {
private:
    int height;
    int width;
    int area;

public:
    Cube() {
        height = 0;
        width = 0;
        area = 0;
    }

    Cube(int h, int w)  {
        height = h;
        width = w;
        setArea();
    }
    void setHeight(int h) {
        height = h;
    }

    int getHeight() const {
        return height;
    }

    void setWidth(int w) {
        width = w;
     
    }

    int getWidth() const {
        return width;
    }

    void setArea() {
        area = height * width;
    }

    int getArea() const {
        return area;
    }
    Cube operator-(const Cube& obj) {
        Cube c;
        c.height -=  obj.height;
        c.width -= obj.width;
        c.setArea();
        return c;
    }

    Cube operator+( Cube& obj) {
        Cube c;
        c.height = height + obj.height;
        c.width = width + obj.width;
        c.setArea();
        return c;
    }

    Cube operator*(const Cube& obj) const {
        Cube c;
        c.height *= obj.height;
        c.width *= obj.width;
        c.setArea();
        return c;
    }

    bool operator>( Cube& obj){
        return area > obj.area;
    }

    bool operator<( Cube& obj) {
        return area < obj.area;
    }

    const Cube operator=(const Cube& obj) {
        height = obj.height;
        width = obj.width;
        area = obj.area;
        return *this;
    }
};
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    void setReal(double r) {
        real = r;
    }

    double getReal() const {
        return real;
    }

    void setImaginary(double i) {
        imaginary = i;
    }

    double getImaginary() const {
        return imaginary;
    }

    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imaginary + obj.imaginary);
    }

    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imaginary - obj.imaginary);
    }

    Complex operator*(const Complex& obj) {
   
        double res;
        res=(real * obj.real) - (imaginary * obj.imaginary);
        double resi;
        resi= (real * obj.imaginary) + (imaginary * obj.real);
        return Complex(res, resi);
    }

    Complex operator=(const Complex& obj) {
        real = obj.real;
        imaginary = obj.imaginary;
        return *this;
    }
};





