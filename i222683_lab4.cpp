#include<iostream>
#include"i222683_lab4.h"
using namespace std;
int main() {
	int rows;
	int cols;
	cout << "Enter the number of rows" << endl;
	cin >> rows;
	cout << "Enter the number of columns" << endl;
	cin >> cols;
	int** Arr;
	Arr = new int*[rows];
	for (int i = 0; i < cols; i++) {
		Arr[i] = new int[cols];
	}
	
	//prime_input(Arr, rows, cols);
	int** result;
	int** Arr1;
	Arr1 = new int* [rows];
	for (int i = 0; i < cols; i++) {
		Arr1[i] = new int[cols];
	}
	int** Arr2;
	Arr2 = new int* [rows];
	for (int i = 0; i < cols; i++) {
		Arr2[i] = new int[cols];
	}
	result = new int* [rows];
	for (int i = 0; i < cols; i++) {
		result[i] = new int[cols];
	}
	//addition(result, Arr1, Arr2,rows, cols);
	int** matrixA;
	matrixA = new int* [rows];
	for (int i = 0; i < cols; i++) {
		matrixA[i] = new int[cols];
	}
	int** matrixB;
	matrixB = new int* [rows];
	for (int i = 0; i < cols; i++) {
		matrixB[i] = new int[cols];
	}
	addition3(matrixA,matrixB,rows,cols);
	
int totalmatrix = 5;
int rows1 = 2;
int cols1 = 2;
int*** p = new int**[totalmatrix];
 for(int l = 0; l < totalmatrix; l++) {
	p[l] = new int* [rows1];

	for (int j = 0; j < rows1; j++) {
		p[l][j] = new int[cols1];
	}
}
 //matrice(p, totalmatrix, rows1, cols1);

 return 0;


}