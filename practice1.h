#pragma once
class Vehicle {
private:
	double mileage;
	double price;
};
class Car:public Vehicle{
protected:
	double cost;
	int year;
	int capacity;
	string fueltype;
	Car( double c, int sc, string ft,int cap) {
		cost = c;
		year = sc;
		fueltype = ft;
		capacity = cap;
		
	}
	void display() {
		cout << "Cost of car" << cost;
		cout << "Warranty of car " << year;
		cout << "Capacity " << capacity;
	}
};
class Bike :public Vehicle {
protected:
	int numberofcylinder;
	int gears;
	string cooling;
	string wheel;
	
	string fueltype;
	Bike(double m, double p, int cylinder, int gears, string cooling, string wheel, double size) {
		numberofcylinder = cylinder;
		this->gears = gears;
		this->cooling = cooling;
		this->wheel = wheel;
	}
};
class Audi : public Car {
private:
   string modeltype;
    int capacity;
        
public:
    Audi(double _mileage, double _price, double _cost, int _warranty, int _seatingCapacity, string _fuelType, string _modelType)
        : Car(_mileage, _price, _cost, _warranty, _seatingCapacity, _fuelType), modeltype(_modelType) {}
    int year;
    
    void displayInfo() {
        cout << "Audi Model: " << modeltype << endl;
        cout << "Ownership Cost: $" << cost << endl;
        cout << "Warranty: " << year << " years" << endl;
        cout << "Seating Capacity: " << capacity << endl;
        cout << "Fuel Type: " << fueltype << endl;
        
    }
};

class Ford : public Car {
private:
    string modelType;

public:
    Ford(double _mileage, double _price, double _cost, int _warranty, int _seatingCapacity, string _fuelType, string _modelType)
        : Car(_mileage, _price, _cost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void displayInfo() {
        cout << "Ford Model: " << modelType << endl;
        cout << "Ownership Cost: $" << cost << endl;
        cout << "Warranty: " << capacity << " years" << endl;
        cout << "Seating Capacity: " << capacity << endl;
        cout << "Fuel Type: " << fueltype << endl;
        
    }
};

class Bajaj : public Bike {
private:
    string makeType;

public:
    Bajaj(double _mileage, double _price, int _numCylinders, int _numGears, string _coolingType, string _wheelType, double _fuelTankSize, string _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void displayInfo() {
        cout << "Bajaj Make: " << makeType << endl;
        cout << "Number of Cylinders: " << numberofcylinder << endl;
        cout << "Number of Gears: " << gears << endl;
        cout << "Cooling Type: " << cooling << endl;
        cout << "Wheel Type: " << wheel << endl;
 
        
    }
};

class TVS : public Bike {
private:
    string makeType;

public:
    TVS(double _mileage, double _price, int _numCylinders, int _numGears, string _coolingType, string _wheelType, double _fuelTankSize, string _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void displayInfo() {
        cout << "TVS Make: " << makeType << endl;
        cout << "Number of Cylinders: " << numberofcylinder << endl;
        cout << "Number of Gears: " << gears << endl;
        cout << "Cooling Type: " << cooling << endl;
        cout << "Wheel Type: " << wheel << endl;
      
    }
};
