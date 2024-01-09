#pragma once
#include"carbonated.h"
class Carbonated : public Water {
private:
    string type;

public:
    Carbonated() : Water() {
        type = "";
    }
    Carbonated(string flavor, int temp, float price, string expiry, string supplier, string carbonatedType)
        : Water(flavor, temp, price, expiry, supplier), type(carbonatedType) {}

    void Display() override {
        Water::Display();
        cout << "type is " << type << endl;
    }
};