#pragma once

#include"Vehicle.h"

#ifndef VEHICLE_RENTAL_SYSTEM_RENTALFORM_H
#define VEHICLE_RENTAL_SYSTEM_RENTALFORM_H

struct RentalForm
{
	Vehicle vehicles[100];
	int arraySize;

	RentalForm();
};

void addVehicleToForm();

void addVehicleToForm(Vehicle vehicle);

void toString();

#endif // !VEHICLE_RENTAL_SYSTEM_RENTALFORM_H
