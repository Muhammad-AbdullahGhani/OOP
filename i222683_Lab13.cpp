#include<iostream>
#include<string>
#include"i222683_Lab13.h"
#include"drink.h"
#include"carbonated.h"
#include"water.h"
using namespace std;
int main() {
    shape* shapes[3];
    shapes[0] = new rectangle("Rectangle", 4, 6);
    shapes[1] = new triangle("Triangle", 3, 5);
    shapes[2] = new circle("Circle", 2);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->area();
        shapes[i]->display();
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }
    Water water("Cocktail", 6, 305, "2023-6-23", "aquafina");
    Carbonated soda("Sprite", 12, 301, "2022-6-23", "Sprite", "soda");

    water.Display();
    cout << endl;
    soda.Display();
    return 0;
}