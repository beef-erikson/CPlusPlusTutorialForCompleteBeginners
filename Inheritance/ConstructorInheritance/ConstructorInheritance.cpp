#include <iostream>
using namespace std;

// Machine superclass
class Machine
{
private:
	int id;

public:
	Machine() : id(0) { cout << "Machine no argument constructor called." << endl; }
	Machine(int id) : id(id) { cout << "Machine id argument constructor called" << endl; }

public:
	void info() { cout << "ID: " << id << endl; }
};


// Vehicle subclass of Machine
class Vehicle : public Machine
{
public:
	Vehicle() { cout << "Vehicle no argument constructor called." << endl; }
	Vehicle(int id) : Machine(id) { cout << "Vehicle id argument constructor called." << endl; }
};


// Car subclass of Vehicle, grandchild of Machine
class Car : public Vehicle
{
public:
	Car() : Vehicle(999) { cout << "Car no argument constructor called." << endl; }
};


int main()
{
	Vehicle vehicle(123);
	vehicle.info();
	cout << endl;

	Car car;
	car.info();

	return 0;
}