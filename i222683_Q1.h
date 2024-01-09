#pragma once
using namespace std;
class String {
	char* str;
public:
	String() {};
		String(const char* s="") {
		const int size = 20;
		str = new char[size];
		for (int i = 0; i < size; i++) {
			str[i] =s[i];
		}


	}
	
	String(const String& other) {
		int size = 20;
		for (int i = 0; i < size; i++) {
			str[i] =other.str[i];
		}
		

	}
	String& operator=(const String& other) {
		
		int size = 20;
		for (int i = 0; i < size; i++) {
			str[i] = other.str[i];
		}
	}
	char& operator[](int index) {
		return str[index];
	}
	char operator()(int index) {
		for (int i = 0; i < 20; i++) {
			if (str[i] == 'a') {
				return index;
			}
		}
		return '\0';
	}
	void* operator new(size_t size) {
		void* p = :: operator new(size); 
		return p;

	}
	void* operator new[](size_t size) {
		void* p = ::operator new[](size);
		return p;
	}
		friend ostream& operator<<(ostream& os, const String& s) {
		for (int i = 0; i < 20; i++) {
			os << s.str[i];
		}
		return os;
	}
	friend istream& operator>>(istream& is, const String& s) {
		for (int i = 0; i < 20; i++) {
			is >> s.str[i];
		}
		return is;

	}
	~String() {
		delete[]str;
	}
};
class Matrix {




};