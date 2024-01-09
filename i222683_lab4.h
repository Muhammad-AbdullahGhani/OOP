#pragma once
using namespace std;
/**
void prime_input(int** matrix, int rows, int cols) {
	int num = 0;
	int k = 2;
	cout << "Enter the number" << endl;
	cin >> num;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			bool flag = false;
			do {
				cin >> num;
				 if (num % (k + 1) != 0) {
					flag = true;
					*(*(matrix + i) + j) = num;
				}
				else {
					cout << "Enter prime number" << endl;
				}
			} while (!flag);
		}
	}
	cout << "Array is" << endl;
	for (int i = 0; i < rows; i++) {
		{
			cout << endl;
			for (int j = 0; j < cols; j++) {
			cout<<	*(*(matrix + i) + j);
			}
		}
	}
	for (int i = 0; i < rows; i++) {
		delete matrix;
	}

}
int** addition(int** results, int **A,int **B, int rows, int cols) {
	int sumdiagonal = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j) {
				sumdiagonal += *(*(A + i) + j);
			}
		}
	}
	return 0;
}
*/
int** addition3(int** matrixA, int** matrixB, int rows, int cols) {
	int** result;
	result = new int* [rows];
	for (int i = 0; i < cols; i++) {
		result[i] = new int[cols];
	}
	cout << "Matrix A input"<<endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> *(*(matrixA + i) + j);
		}
	}
	cout << "Matrix B input" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> *(*(matrixB + i) + j);
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j=0; j < cols; j++) {
			*(*(result+ i) + j) = *(*(matrixA + i) + j) + *(*(matrixB + i) + j);
		}
	}
	cout << "Addition" << endl;
	for (int i = 0; i < rows; i++) {
		cout << endl;
		for (int j = 0; j < cols; j++) {
			cout<<* (*(result + i) + j)<<" ";
		}
	}
	int mult[2][2];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			
			for (int k = 0; k < rows; k++)
				mult[i][j] = result[i][j] * matrixA[i][j];
		}
	}
	cout << "Multiplication";
	for (int i = 0; i < rows; i++) {
		cout << endl;
		for (int j = 0; j < cols; j++) {
			cout << mult[i][j]<<" ";
		}
	}
	return 0;
}
/*
void matrice(int***a, int totalmatrix, int rows, int cols) {
	cout << "3D matrices" << endl;
	int c = 0;
	for (int i = 0; i < totalmatrix; i++) {
		for (int j = 0; j < rows; j++) {
			for (int k = 0; k < cols; k++) {
				a[i][j][k] = rand();
			}
		}
	}
	for (int i = 0; i < totalmatrix; i++) {
		for (int j = 0; j < rows; j++) {
			cout << endl;
			for (int k = 0; k < cols; k++) {
			cout<<	a[i][j][k]<<" ";
			}
		}
	}




}
*/

