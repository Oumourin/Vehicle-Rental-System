#include "RentalForm.h"

RentalForm rentalForm;

RentalForm::RentalForm()
{
	arraySize = 0;
}

void addVehicleToForm()
{
	printf("请根据提示输入相关信息：\n");
	string orderNumber, identifyNum, licensePlateNumber;
	
}

void addVehicleToForm(Vehicle vehicle)
{
	rentalForm.vehicles[rentalForm.arraySize] = vehicle;
	rentalForm.arraySize++;
}

void toString()
{
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		toString(rentalForm.vehicles[i]);
	}
}
