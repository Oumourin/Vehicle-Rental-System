#include "RentalForm.h"
#include"checkSecurity.h"
#include"UI.h"

RentalForm rentalForm;

RentalForm::RentalForm()
{
	arraySize = 0;
}

void addVehicleToForm()
{
	if (!checkOverflow())
	{
		cout << "�����б��������޷����" << endl;
		return;
	}
	printf("�������ʾ���������Ϣ��\n");
	string orderNumber, identifyNum, licensePlateNumber;
	//  ������Ӧ�����Զ����ɲŷ��ϳ������
	cout << "�����붩����:";
	cin >> orderNumber;
	// �߼��е����ʵ�����Ӧ�ÿ����м������˳�
	while (!checkOrderNumber(orderNumber))
	{
		cout << "����������������룺";
		cin >> orderNumber;
	}
	cout << "������֤���ţ�";
	cin >> identifyNum;
	while (!checkIdentifyNumber(identifyNum))
	{
		cout << "����������������룺";
		cin >> identifyNum;
	}
	cout << "�����복�ƺţ�";
	cin >> licensePlateNumber;
	// �����ַ�û�취����飬ֱ��ȡ����������
	//while (!(checkVehiclePlateNumberLength(licensePlateNumber)&&isVehiclePlateNumber(licensePlateNumber)))
	//{
	//	cout << "����������������룺";
	//	cin >> licensePlateNumber;
	//}
	addVehicleToForm(Vehicle(orderNumber, identifyNum, licensePlateNumber));
	cout << "��ӳɹ�����Ϣ���£�" << endl;
	printHeader();
	toString(rentalForm.vehicles[(rentalForm.arraySize-1)]);
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

void returnVehicke()
{
	cout << "����Ҫ�Ǽǹ黹�Ķ����ţ�" << endl;
	string getOrderNumber;
	cin >> getOrderNumber;
	// ����Ƿ��ҵ�����
	bool getFlag = false;
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		if (getOrderNumber == rentalForm.vehicles[i].orderNumber)
		{
			cout << "�����복�����";
			double getRent;
			cin >> getRent;
			rentalForm.vehicles[i].vehicleRent = getRent;
			cout << "�����ɹ���" << endl;
			getFlag = true;
			break;
		}
	}
	if (!getFlag)
	{
		cout << "δ�ҵ��ö�����" << endl;
	}
}

void modifyImformation(int Point)
{
	if (Point == -1)
	{
		cout << "δ�ҵ������Ϣ��" << endl;
		return;
	}
	cout << "�������ʾ����Ҫ���ĵ���Ϣ��" << endl;
	string orderNumber, identifyNumber, licensePlateNumber;
	cout << "������Ҫ���ĵĶ����ţ�������������#:";
	cin >> orderNumber;
	if (orderNumber != "#")
	{
		while (!checkOrderNumber(orderNumber))
		{
			cout << "�������!����������:";
			cin >> orderNumber;
		}
		rentalForm.vehicles[Point].orderNumber = orderNumber;
	}
	cout << "������Ҫ���ĵ����֤��,������������#��";
	cin >> identifyNumber;
	if (identifyNumber != "#")
	{
		while (!checkIdentifyNumber)
		{
			cout << "�������!����������:";
			cin >> identifyNumber;
		}
		rentalForm.vehicles[Point].identifyNumber = identifyNumber;
	}
	cout << "������Ҫ���ĵĳ��ƺ�,���޸�������#��";
	cin >> licensePlateNumber;
	if (licensePlateNumber!="#")
	{
		rentalForm.vehicles[Point].licensePlateNumber = licensePlateNumber;
	}
	double rent;
	cout<< "������Ҫ���ĵ����,���޸�������-1��";
	cin >> rent;
	if (rent!=-1)
	{
		rentalForm.vehicles[Point].vehicleRent = rent;
	}
	cout << "�޸���ɣ��޸���Ϣ���£�" << endl;
	printHeader();
	toString(rentalForm.vehicles[Point]);
}
