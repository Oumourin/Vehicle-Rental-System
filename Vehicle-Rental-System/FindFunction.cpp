#include "FindFunction.h"
#include"CheckSecurity.h"
#include"UI.h"

extern RentalForm rentalForm;

void findRentalRecordById()
{
	string getId;
	cout << "输入要查找的身份证号：";
	cin >> getId;
	while (!checkIdentifyNumber(getId))
	{
		cout << "输入错误！重新输入：";
		cin >> getId;
	}
	printHeader();
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		if (rentalForm.vehicles[i].identifyNumber == getId)
		{
			toString(rentalForm.vehicles[i]);
		}
	}
}

void findRentByPlateNumber()
{
	string getPlateNumber;
	cout << "输入要查找的车牌号：";
	cin >> getPlateNumber;
	while (!checkVehiclePlateNumberLength(getPlateNumber))
	{
		cout << "输入车牌长度错误，重新输入！" << endl;
		cin >> getPlateNumber;
	}
	double getTurnove = 0.0;
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		if (rentalForm.vehicles[i].licensePlateNumber==getPlateNumber)
		{
			getTurnove += rentalForm.vehicles[i].vehicleRent;
		}
	}
	cout << "车牌号" << "     " << "营业额" << endl;
	cout << getPlateNumber << "    " << getTurnove << endl;
}

int modifyRentalRocord()
{
	string getId;
	cout << "输入要查找的身份证号：";
	cin >> getId;
	while (!checkIdentifyNumber(getId))
	{
		cout << "输入错误！重新输入：";
		cin >> getId;
	}
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		if (rentalForm.vehicles[i].identifyNumber == getId)
		{
			toString(rentalForm.vehicles[i]);
			cout << "是否要修改该条信息？Y/N";
			string flag;
			cin >> flag;
			getchar();
			if (flag == "y" || flag == "Y")
			{
				return i;
			}
		}
	}
	cout << "已经找完所有记录！"<<endl;
	return -1;
}
