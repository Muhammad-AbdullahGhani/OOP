#include<iostream>
#include"i222683_Header.h"
using namespace std;
int main() {
	Counter c1; 
	Counter c2(5); 
	Counter c3 =c1; 

    Cube cube1(3, 4);
    Cube cube2(2, 5);
    Cube cube3;
    cube3 = cube1 - cube2;
  
    Cube cuber;
    cuber = cube1 + cube2;
    Cube cuberes;
    cuberes = cube1 * cube2;
    cout << cube1.getArea()<<endl;
    cout<< cube2.getArea() <<endl;
    cout << cube3.getArea() << endl;
    cout << cuber.getArea() << endl;
    cout << cuberes.getArea() << endl;
   


  

	return 0;
}