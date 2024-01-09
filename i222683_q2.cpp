#include <iostream>
#include<string>
#include <fstream>
using namespace std;
void input() {
    ofstream ofile("Info.txt");
    if (!ofile.is_open()) {
        cout << "Cannot open file for writing";
    }
    else {
        string text;
        cout << "Enter text" << endl;
        cin.ignore();
        for (int i = 0; i < 10; i++) {
            
            getline(cin, text);
        }

    }
}
int wordcount=0;

void output() {
    ifstream ifile("Info.txt");
   // ifile.open("./Info.txt", ios::binary | ios::in);
    if (!ifile.is_open()) {
        cout << "Cannot open file for writing";
    }
    else {
        string text;
        for (int i = 0; i < 10; i++) {
            cout << text;
        }
        string line;
        int wordCount = 0;
        

        while (getline(ifile, line)) {
          
            while (!ifile.eof()) {
                ++wordCount;
            }

        }

        cout << "\nNumbers of words " << wordcount << endl;

        ifile.close();

    }

}
int main() {

    input();
    output();
	return 0;
}
