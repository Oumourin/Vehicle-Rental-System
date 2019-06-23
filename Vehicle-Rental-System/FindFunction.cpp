#include "FindFunction.h"
#include"CheckSecurity.h"
#include"UI.h"

extern RentalForm rentalForm;

void findRentalRecordById()
{
	string getId;
	cout << "����Ҫ���ҵ����֤�ţ�";
	cin >> getId;
	while (!checkIdentifyNumber(getId))
	{
		cout << "��������������룺";
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
	cout << "����Ҫ���ҵĳ��ƺţ�";
	cin >> getPlateNumber;
	while (!checkVehiclePlateNumberLength(getPlateNumber))
	{
		cout << "���복�Ƴ��ȴ����������룡" << endl;
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
	cout << "���ƺ�" << "     " << "Ӫҵ��" << endl;
	cout << getPlateNumber << "    " << getTurnove << endl;
}

int modifyRentalRocord()
{
	string getId;
	cout << "����Ҫ���ҵ����֤�ţ�";
	cin >> getId;
	while (!checkIdentifyNumber(getId))
	{
		cout << "��������������룺";
		cin >> getId;
	}
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		if (rentalForm.vehicles[i].identifyNumber == getId)
		{
			toString(rentalForm.vehicles[i]);
			cout << "�Ƿ�Ҫ�޸ĸ�����Ϣ��Y/N";
			string flag;
			cin >> flag;
			getchar();
			if (flag == "y" || flag == "Y")
			{
				return i;
			}
		}
	}
	cout << "�Ѿ��������м�¼��"<<endl;
	return -1;
}
