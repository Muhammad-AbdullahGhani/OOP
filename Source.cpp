#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void input() {
    ofstream ofile("Info.txt");
    if (!ofile.is_open()) {
        cout << "Cannot open file for writing";
    }
    else {
        string text;
        cout << "Enter text" << endl;
        for (int i = 0; i < 10; i++) {
            getline(cin, text);
            ofile << text << " "; 
        }
        ofile.close(); 
    }
}

void output() {
    ifstream ifile("Info.txt");
    if (!ifile.is_open()) {
        cout << "Cannot open file for reading";
    }
    else {
        string text;
        int wordCount = 0;

        while (ifile >> text) { 
            ++wordCount;
        }

        cout << "Number of words: " << wordCount << endl;

        ifile.close();
    }
}

int main() {
    input();
    output();
    return 0;
}
