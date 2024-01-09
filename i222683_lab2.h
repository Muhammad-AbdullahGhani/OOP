#pragma once
int exchange(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return 0;
}
int func(int *arr, int size) {
	int sum;
	int i = 0;
	while (i < 4) {
		for (int l = i + 1; l < 4; l++)
			if (arr[i] > arr[l]) {
				int temp = arr[i];
				arr[i] = arr[l];
				arr[l] = temp;
			}
		i++;
	}
	for (int i = 0; i < 4; i++) {
		sum = arr[0] + arr[2] + arr[4];
	}
	cout << "sum of elements " << sum;

	return 0;
}
int func3(int* arr, int size, int num) {
	int result;
	for (int i = 0; i < size; i++) {
		for (int l = i + 1; l < size; l++) {
			if (arr[i] + arr[l] == num) {
				result=num;
				;
			}
			else {
				result = -1;
			}
			
		}
	}
	cout << result;
	return 0;
}

	int func4(int* arr, int s, int number1, int number2) {
		for (int i = 0; i < 4; i++) {
			for (int l = i + 1; l < 4; l++)
				if (arr[i] > arr[l]) {
					int temp = arr[i];
					arr[i] = arr[l];
					arr[l] = temp;
				}
		}
		
		return 0;
	}
	int func5(int* arr, int size){
		int large=0;
		int secondsmallest=0;
		int i = 0;
		while (i < size) {
			if (arr[i] < secondsmallest) {
				secondsmallest = arr[i];
			}
			if (arr[i] > large) {
				large = arr[i];
			}
			i++;
		}
		int array2[5];
		int index = 0;
		int j = 0;
		while (j < size) {
			if (arr[i] != secondsmallest && arr[i] != large) {
				array2[index++] = arr[i];
			}
			j++;
		}
		array2[index++] = secondsmallest;
		array2[index++] = large;
		for (int i = 0; i < 4; i++) {
			for (int l = i + 1; l < 4; l++) {
				if (array2[i] < array2[l]) {
					int temporaray = array2[i];
					array2[i] = array2[l];
					array2[l] = temporaray;

				}
			}
		}
		


		return 0;
	}
	bool func8(char* c) {
		int len=0;
		while (c[len] != '/0') {
			len++;
		}
		if (len < 1) {
			return false;
		}

		if (len == 1) {
			return true;
		}

		for (int i = 0; i < len / 2; ++i) {
			if (c[i] == c[len - 1 - i]) {
				return true;
			}
		}

		return false;
	}
	int func6(char* c1, char* c2) {
		int l1=0;
		int l2=0;
		while (c1[l1] != '/0') {
			l1++;
		}
		while (c1[l2] != '/0') {
			l2++;
		}
		int index = 0;
		for (int i = 0; i < l1; ++i) {
			bool matchFound = false;

			for (int j = 0; j < l2; ++j) {
				if (c1[i] == c2[j]) {
					matchFound = true;

				}
			}

			if (!matchFound) {
				c1[index++] = c1[i];
			}
		}

		c1[index] = '\0'; // Null-terminate the resulting string
	
		
	


		return 0;
	}
	bool func7(char* c1, char* c2) {
		int len1=0;
		int len2=0;
		while (c1[len1] != '/0') {
			len1++;
		}
		while (c1[len2] != '/0') {
			len2++;
		}
		for (int i = 0; i < len1; i++) {
			for (int j = 0; j < len2; j++) {
				if (c1[i] == c2[j]) {
					return true;
				}
			}
		}
		return false;
	}