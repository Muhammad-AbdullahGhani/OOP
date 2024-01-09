#include <iostream>
#include <string>
using namespace std;
struct Car {
    string regnumber;
    string time;
    int noofslots;
};
Car parking[50]; 
int noofcars = 0;       
void parkcar() {
    if (noofcars < 50) {
        Car newCar;
        cout << "Enter registration number: ";
        cin >> newCar.regnumber;

        cout << "Enter arrival time: ";
        cin >> newCar.time;

        cout << "Enter slot number: ";
        cin >> newCar.noofslots;

        parking[noofcars++] = newCar;
        cout << "Car parked successfully!" << endl;
    }
    else {
        cout << "Parking is full!" << endl;
    }
}

void removecar() {
    string regnumber;
    cout << "Enter registration number of the car to remove: ";
    cin >> regnumber;

    bool found = false;
    for (int i = 0; i < noofcars; ++i) {
        if (parking[i].regnumber == regnumber) {
            for (int j = i; j < noofcars - 1; j++) {
                parking[j] = parking[j + 1];
            }
            noofcars--;
            cout << "Car removed from parking." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Car with registration number " << regnumber << " not found." << endl;
    }
}

void updateslotno() {
    string regNumber;
    int newslot;
    cout << "Enter registration number of the car to update slot: ";
    cin >> regNumber;

    for (int i = 0; i < noofcars; ++i) {
        if (parking[i].regnumber == regNumber) {
            cout << "Enter new slot number: ";
            cin >> newslot;

            parking[i].noofslots = newslot;
            cout << "Slot number updated successfully." << endl;
            return;
        }
    }

    cout << "Car with registration number " << regNumber << " not found." << endl;
}

void printtotalcars() {
    cout << "Total number of cars " << noofcars;
}

void removeallcars() {
    noofcars = 0;
    cout << "All parked cars removed." << endl;
}

void searchCar() {
    string regNumber;
    cout << "Enter registration number\n ";
    cin >> regNumber;

    bool found = false;
    for (int i = 0; i < noofcars; i++) {
        if (parking[i].regnumber == regNumber) {
            cout << "Car found at slot number: " << parking[i].noofslots << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Car with registration number " << regNumber << " not found." << endl;
    }
}

void displayMenu() {
    cout << "\nCar Parking System Menu:\n";
    cout << "1. Park a car\n";
    cout << "2. Remove a car\n";
    cout << "3. Update car slot\n";
    cout << "4. Print total parked cars\n";
    cout << "5. Remove all parked cars\n";
    cout << "6. Search a car by registration number\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            parkcar();
            break;
        case 2:
            removecar();
            break;
        case 3:
            updateslotno();
            break;
        case 4:
            printtotalcars();
            break;
        case 5:
            removeallcars();
            break;
        case 6:
            searchCar();
            break;
        case 7:
            cout << "Exiting the program. Thank you!\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
            break;
        }
    } while (choice != 7);

    return 0;
}
