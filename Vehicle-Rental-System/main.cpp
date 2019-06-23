#include"RentalForm.h"
#include"UI.h"
#include"InitData.h"
#include"FindFunction.h"

extern RentalForm rentalForm;

int main(int args, char* argb[])
{
	initArray();
	printHeader();
	toString();
	//modifyImformation(modifyRentalRocord());
	deleteRentalRecord(modifyRentalRocord());
	toString();
	return 0;
}