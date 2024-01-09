#include<iostream>
using namespace std;
#include <iostream>
#include <fstream>
#include <string>

class PhoneDirectory {
public:
    void writeToFile(string name, string number, string email) {

        ofstream ofile("./Directory.txt", ios::binary | ios::out);
        if (!ofile.is_open()) {
            cout << "Cant open file" << endl;
            return;
        }

        ofile << name << ',' << number << ',' << email << '\n';

        ofile.close();
    }

    string searchname(string name) {
        ifstream ifile("Directory.txt.txt");


        string fullName, phoneNumber, email;

        while (getline(ifile, fullName, ',') && getline(ifile, phoneNumber, ',') &&
            getline(ifile, email)) {
            if (fullName == name) {
                ifile.close();
                return phoneNumber;
            }
        }

        ifile.close();
        return phoneNumber;
    }

    string searchByEmail(string email) {
        ifstream ifile("Directory.txt.txt");
        string fullName, phoneNumber, storedEmail;

        while (getline(ifile, fullName, ',') && getline(ifile, phoneNumber, ',') &&
            getline(ifile, storedEmail)) {
            if (storedEmail == email) {
                ifile.close();
                return phoneNumber;
            }
        }

        ifile.close();
        return phoneNumber;
    }

    void printdirectory() {
        ifstream ifile("Directory.txt");


        string fullName, phoneNumber, email;

        while (getline(ifile, fullName, ',') && std::getline(ifile, phoneNumber, ',') &&
            getline(ifile, email)) {
            cout << "Name: " << fullName << "\nPhone Number: " << phoneNumber << "\nEmail: " << email << "\n\n";
        }
        ifile.close();
    }
};

    int main() {

        PhoneDirectory directory;

        directory.writeToFile("Abdullah", "1234567890", "Abdullah@gmail.com");
        directory.writeToFile("Ghani", "12345663", "Ghani@gmail.com.com");

        string searchname = "Abdullah";
        string phoneNumberByName = directory.searchname(searchname);
        cout << "Phone number of " << searchname  << phoneNumberByName << endl;
        string searchemail = "Ghani@gmail.com";
        string phoneNumberByemail = directory.searchByEmail(searchemail);
        if (!phoneNumberByemail.empty()) {
            cout << "Phone number of user with email " << searchemail << " is: " << phoneNumberByemail << endl;
        }
        else {
            cout << "No entry found for email " << searchemail << endl;
        }

        directory.printdirectory();

        return 0;
    }