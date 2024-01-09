#include<iostream>
using namespace std;
#include"Header.h"
int main() {
	int n1=3; int n2=4 ;
	exchange(&n1, &n2);
	cout << "Numbers after exchanging"<<endl;
	cout <<"Number in num1 is " << n1<<endl;
	cout << "Number in num2 is " << n2 << endl;
	int size=5;
	int array[5];
	cout << "\nTask 2" << endl;
	cout << "Enter elements in the array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	func(array, size);
	for (int i = 4; i > 0; i--) {
		cout<<endl << array[i]<<endl;

	}

	cout << "\nTask 3" << endl;
	
	int num=4;
	int *arra = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arra[i];
	}
	func3(arra, size, num);
	delete[] arra;
	cout << "Task 4" << endl;
	int arrays[5];
	int s = 5;
	int number1=3, number2=4;
	for (int i = 0; i < size; i++) {
		cin >> arrays[i];
	}
	int* ptr = arrays;
	func4(ptr, s, number1, number2);
	for (int i = 0; i < 4; i++) {
		cout << ptr[i];
	}
	cout << "Task 5" << endl;
	int arraaa[5];
	for (int i = 0; i < size; i++) {
		cin >> arraaa[i];
	}
	func5(arraaa,size);
	cout << "\nTask 5 after descednding" << endl;
	for (int i = 0; i < 4; i++) {
		cout << arraaa[i];
	}
	cout << "\nTask 6" << endl;
	char carr1[]="Helloo";
	char carr2[]="Hello ghani";
	func6(carr1,carr2);
	cout << "Result is" << carr1;


	cout << "\nTask 7" << endl;
	char c1[5];

	char c2[5];
	for (int i = 0; i < size; i++) {
		cin >> c1[i];
	}
	for (int i = 0; i < size; i++) {
		cin >> c2[i];
	}
	func7(c1, c2);
	cout << "\nTask 8";
	char c[]="dont mine";
	func8(c);
	return 0;
}