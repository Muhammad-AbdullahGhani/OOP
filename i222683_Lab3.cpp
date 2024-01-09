#include<iostream>
#include<string>
#include "pch.h"
using namespace std;
#include"Header.h"
int main() {

	cout << "Task 1" << endl;
	int row1 = 3;
	int col1 = 3;
	int row2 = 3;
	int col2 = 3;
	int** Mat1;
	int** Mat2;
	int arr1[3][3] = { {1,2,3},{2,3,4},{5,6,7} };
	int arr2[3][3] = { {1,2,3},{2,3,4},{5,6,7} };
	int result[3][3];
	Mat1 = new int* [row1];
	for (int i = 0; i < row1; i++) {
		Mat1[i] = new int[col1];
	}
	
	Mat2 = new int* [row2];
	for (int i = 0; i < row2; i++) {
		Mat2[i] = new int[col2];
	}
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			Mat1[i][j] = arr1[i][j];
		}
	}
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			Mat2[i][j] = arr2[i][j];
		}
	}

	product(Mat1, Mat2, row1, col1, row2, col2);

	cout << "\nTask 2" << endl;
	int** array;
	int r = 4; int c = 4;
	int arra[5][5] = { {2,3,1,5,0},{7,1,5,3,1},{2,5,7,8,1},{0,1,5,0,1},{3,4,9,1,5} };
	array = new int* [r];
	for (int i = 0; i < r; i++) {
		array[i] = new int[c];
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			array[i][j] = arra[i][j];
		}
	}
	Upperhalf(array, r, c);
	cout << "\nTask 03" << endl;
	int** a;
	int arrays[4][4] = { {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4} };
	int rows = 4; int cols = 4;
	a = new int* [rows];
	for (int i = 0; i < rows; i++) {
		a[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			a[i][j] = arrays[i][j];
		}
	}
	CalDiagonal(a, rows, cols);
	cout << "\n Task 4" << endl;
	string type;
	int seatnumber;
	cout << "Enter class type" << endl;
	cin >> type;
	cout << "Enter seat number" << endl;
	cin >> seatnumber;
	int** s;
	int seatrow = 15, seatcol = 6;
	s = new int* [seatrow];
	for (int i = 0; i < seatrow; i++) {
		s[i] = new int[seatcol];
	}

	airplane(s, seatnumber, type);
	return 0;
}