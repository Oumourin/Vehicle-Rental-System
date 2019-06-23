#include "StatisticsFunction.h"

extern RentalForm rentalForm;
int arraySize = 0;

void statisticalTotalIncome()
{
	double totalIncome = 0.0;
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		totalIncome += rentalForm.vehicles[i].vehicleRent;
	}
	cout<<"本月总收入为："<<totalIncome<<endl;
}



void statisticalTotalIncomeByPlateNumber()
{
	string licensePlateNumber[100];
	double incomeArray[100];
	if (arraySize != 0)
	{
		arraySize = 0;
	}
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		int Point = getPoint(licensePlateNumber, rentalForm.vehicles[i].licensePlateNumber);
		if (Point==-1)
		{
			licensePlateNumber[i] = rentalForm.vehicles[i].licensePlateNumber;
			incomeArray[i] = rentalForm.vehicles[i].vehicleRent;
			arraySize++;
		}
		else
		{
			incomeArray[Point] += rentalForm.vehicles[i].vehicleRent;
		}
	}
	cout << "收入最高的车辆是：" << licensePlateNumber[getMaxIncome(incomeArray)] << "收入为：" << incomeArray[getMaxIncome(incomeArray)]<<endl;
}

int getPoint(string licensePlateNumber[100], string _licensePlateNumber)
{
	if (arraySize == 0)
	{
		return -1;
	}
	for (int i = 0; i < arraySize; i++)
	{
		if (licensePlateNumber[i]==_licensePlateNumber)
		{
			return i;
		}
	}
	return -1;
}

int getMaxIncome(double incomeArray[100])
{
	int max = 0;
	for (int i = 1; i < arraySize; i++)
	{
		if (incomeArray[i]>incomeArray[max])
		{
			max = i;
		}
	}
	return max;
}
