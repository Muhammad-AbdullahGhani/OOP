#pragma once
#include"drink.h"
class Water : public Drink {
protected:
    string supp;

public:
    Water() : Drink() {
        supp = "";
    }
    Water(string flavor, int temp, float price, string expiry, string s) : Drink(flavor, temp, price, expiry) {
        supp = s;
    }

    void Display() {
        cout << "Flavor is " << flavour << endl;
        cout << "Temperature is " << temp << endl;
        cout << "Price is " << Price << endl;
        cout << "Expiry Date is " << expiry << endl;
        cout << "Supplier is " << supp << endl;
    }
};

