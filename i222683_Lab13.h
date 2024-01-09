#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class shape {
protected:
    string type;

public:
    shape() {}
    shape(string t) : type(t) {}

    virtual void area() = 0;
    virtual void display() {
        cout << "Type " << type << endl;
    }
};

class rectangle : public shape {
private:
    float height;
    float width;

public:
    rectangle() : shape("Rectangle") {
        height = 0;
        width = 0;
    }
    rectangle(string t, float h, float w) : shape(t) {
        height = h;
        width = w;
    }

    void area()  {
        cout << "Area is " << width * height;
        cout << endl;
    }

    void display()  {
        shape::display();
        cout << "Width is " << width << endl;
        cout << "Height is " << height << endl;
    }
};

class triangle : public shape {
private:
    float base;
    float height;

public:
    triangle() : shape("Triangle") {
        height = 0;
        base = 0;
    }
    triangle(string t, float b, float h) : shape(t) {
        base = b;
        height = h;
    }

    void area()  {
        cout << "Area " << (0.5 * base * height) << endl;
    }

    void display() {
        shape::display();
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

class circle : public shape {
private:
    float radius;

public:
    circle() : shape("Circle") {
        radius = 0;
    }
    circle(string t, float r) : shape(t), radius(r) {}

    void area() override {
        cout << "Area: " << (3.14159 * pow(radius,2));
        cout << endl;
    }

    void display() override {
        shape::display();
        cout << "Radius is " << radius << endl;
    }
};



