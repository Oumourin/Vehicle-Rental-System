#include "Vehicle.h"

Vehicle::Vehicle(string _orderNumber, string _identifyNumber, string _licensePlateNumber)
{
	orderNumber = _orderNumber;
	identifyNumber = _identifyNumber;
	licensePlateNumber = _licensePlateNumber;
	vehicleRent = 0.0;
}

Vehicle::Vehicle()
{
	orderNumber = "NULL";
	identifyNumber = "NULL";
	licensePlateNumber = "NULL";
	vehicleRent = 0.0;
}

void toString(Vehicle vehicle)
{
	cout << vehicle.orderNumber << "    " << vehicle.identifyNumber << "    " << vehicle.licensePlateNumber << "    " << vehicle.vehicleRent << endl;
}
