#include "InitData.h"


extern RentalForm rentalForm;

void initArray()
{
	rentalForm.arraySize = 0;
	addVehicleToForm(Vehicle("1145141919", "123456789987654321", "TNOK888", 810.0));
	addVehicleToForm(Vehicle("1145148100", "123456789987654321", "HOMO810", 810.0));
	addVehicleToForm(Vehicle("1145141991", "123456789987654221", "TNOK888", 1919.0));
}
