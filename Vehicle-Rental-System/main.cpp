#include"RentalForm.h"
#include"UI.h"
#include"InitData.h"

extern RentalForm rentalForm;

int main(int args, char* argb[])
{
	initArray();
	printHeader();
	toString();
	addVehicleToForm();
	toString();
	return 0;
}