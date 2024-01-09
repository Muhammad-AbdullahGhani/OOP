#pragma once

class Drink {
protected:
    string flavour;
    int temp;
    float Price;
    string expiry;

public:
    Drink()   {
        temp = 0;
        Price = 0;
        expiry = "";
        flavour = "";

    }
    Drink(string f, int t, float p, string e) {
        Price = p;
        expiry = e;
        flavour = f;
        temp = t;
    }

    string getFlavor() {
        return flavour;
    }
    void setFlavor(string flavor) {
        flavour = flavor;
    }

    int getTemperature() {
        return temp;
    }
    void setTemperature(int temp) {
        temp = temp;
    }

    float getPrice() {
        return Price;
    }
    void setPrice(float price) {
        Price = price;
    }

    string getExpiryDate() {
        return expiry;
    }
    void setExpiryDate(string expiry) {
        expiry = expiry;
    }

    virtual void Display() = 0;
};