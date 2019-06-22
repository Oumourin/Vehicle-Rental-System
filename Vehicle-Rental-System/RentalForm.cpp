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

}
